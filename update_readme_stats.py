# update_readme_stats.py

import os
import re
import subprocess

def get_push_stats():
    try:
        git_log_output = subprocess.check_output(
            ['git', 'log', '--pretty=format:%an'], 
            universal_newlines=True,
            cwd=os.path.dirname(os.path.abspath(__file__))
        )
        
        authors = git_log_output.strip().split('\n')
        
        author_counts = {}
        
        EXCLUDE_BOT_NAME = "github-actions[bot]" 

        for author in authors:
            if author and author != EXCLUDE_BOT_NAME:
                author_counts[author] = author_counts.get(author, 0) + 1
        # 횟수를 기준으로 내림차순 정렬
        sorted_authors = sorted(author_counts.items(), key=lambda item: item[1], reverse=True)
        
        # Markdown 테이블 형식으로 변환
        stats_content = []
        stats_content.append("")
        stats_content.append("| Contributor | Pushes |")
        stats_content.append("| ----------- | ------ |")
        rakham = 0
        for name, count in sorted_authors:
            if name == "nagi" or name == "flatroad":
                rakham = rakham + count
                stats_content.append(f"| 락햄 | {rakham} |")    
            stats_content.append(f"| {name} | {count} |")
        stats_content.append("")
        
        return "\n".join(stats_content)
        
    except subprocess.CalledProcessError as e:
        print(f"Error running git log: {e}")
        return "Failed to retrieve push statistics."

def update_readme(readme_path, new_stats_content):
    """
    README.md 파일을 업데이트합니다. 기존 통계 블록을 완전히 제거하고 새 통계를 삽입합니다.
    """
    try:
        with open(readme_path, 'r', encoding='utf-8') as f:
            content = f.read()

        start_marker = "Push Statistics:"
        end_marker = "Some concluding text."

        # 시작 마커와 끝 마커를 찾습니다.
        start_index = content.find(start_marker)
        end_index = content.find(end_marker)

        if start_index == -1 or end_index == -1:
            print(f"Error: Markers '{start_marker}' or '{end_marker}' not found in {readme_path}. Cannot update.")
            print("Please ensure your README.md contains both markers.")
            # 마커가 없으면 파일 끝에 추가 (첫 실행 또는 마커가 없는 경우)
            with open(readme_path, 'a', encoding='utf-8') as f:
                f.write(f"\n{start_marker}\n{new_stats_content}\n{end_marker}\n")
            return False # 마커가 없으면 성공으로 간주하지 않음. 수동 수정 필요 알림.

        # 마커 포함 블록의 시작과 끝
        # start_index는 START 마커의 시작 인덱스
        # end_index는 END 마커의 시작 인덱스 + END 마커 길이
        
        # 새로운 통계 블록 생성
        new_stats_block = f"{start_marker}\n{new_stats_content}\n{end_marker}"

        # 기존 내용을 세 부분으로 나눔
        # 1. START 마커 이전 내용
        # 2. 새로운 통계 블록
        # 3. END 마커 이후 내용
        
        # content[:start_index] : 시작 마커 전까지의 내용
        # content[end_index + len(end_marker):] : 끝 마커 후부터의 내용
        
        updated_content = (
            content[:start_index] + 
            new_stats_block + 
            content[end_index + len(end_marker):]
        )

        with open(readme_path, 'w', encoding='utf-8') as f:
            f.write(updated_content)
        
        print(f"README.md updated successfully at {readme_path}")
        return True
    except Exception as e:
        print(f"Error updating README.md: {e}")
        return False

if __name__ == "__main__":
    script_dir = os.path.dirname(os.path.abspath(__file__))
    readme_path = os.path.join(script_dir, 'README.md') 
    
    # 만약 README.md가 레포지토리 루트에 있고, 스크립트가 .github/workflows 아래 있다면 경로 조정 필요
    # GitHub Actions 워크플로우에서 `working-directory: .` 로 설정했다면
    # 스크립트 실행 시 현재 작업 디렉토리가 레포지토리 루트가 되므로
    # readme_path = 'README.md' 로 단순화 가능.
    # 하지만 안전을 위해 `git rev-parse --show-toplevel` 로 레포지토리 루트를 찾는 것이 좋습니다.
    
    try:
        # 워크플로우의 'working-directory: .' 설정에 맞춰 README.md 경로를 조정
        # 스크립트가 레포지토리 루트에서 실행된다고 가정
        readme_path = 'README.md'
    except Exception as e:
        print(f"Could not determine repository root for README.md: {e}")
        exit(1)


    stats = get_push_stats()
    if stats:
        update_readme(readme_path, stats)
    else:
        print("No statistics generated.")
