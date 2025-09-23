# update_readme_stats.py

import os
import re
import subprocess

def get_push_stats():
   import os
import re
import subprocess

def get_push_stats():
    try:
        git_log_output = subprocess.check_output(
            ['git', 'log', '--pretty=format:%an<|>%s'],
            universal_newlines=True,
            cwd=os.path.dirname(os.path.abspath(__file__))
        )
        
        commits = git_log_output.strip().split('\n')
        
        author_counts = {}
        
        EXCLUDE_BOT_NAME = "github-actions[bot]"
        EXCLUDE_COMMIT_MSG = "Update update_readme_stats.py"

        for commit_line in commits:
            if not commit_line:
                continue
            
            try:
                author, message = commit_line.split('<|>', 1)
            except ValueError:
                continue
            

            if author and author != EXCLUDE_BOT_NAME and message != EXCLUDE_COMMIT_MSG:

                if author == "nagi" or author == "flatroad":
                    author_counts["락햄"] = author_counts.get("락햄", 0) + 1
                else:
                    author_counts[author] = author_counts.get(author, 0) + 1

        sorted_authors = sorted(author_counts.items(), key=lambda item: item[1], reverse=True)
        
        stats_content = []
        stats_content.append("")
        stats_content.append("| Contributor | Pushes |")
        stats_content.append("| ----------- | ------ |")
        
        for name, count in sorted_authors:
            stats_content.append(f"| {name} | {count} |")
        stats_content.append("")
        
        return "\n".join(stats_content)
        
    except subprocess.CalledProcessError as e:
        print(f"Error running git log: {e}")
        return "Failed to retrieve push statistics."

def update_readme(readme_path, new_stats_content):
    try:
        with open(readme_path, 'r', encoding='utf-8') as f:
            content = f.read()

        start_marker = "Push Statistics:"
        end_marker = "Some concluding text."

        start_index = content.find(start_marker)
        end_index = content.find(end_marker)

        if start_index == -1 or end_index == -1:
            print(f"Error: Markers '{start_marker}' or '{end_marker}' not found in {readme_path}. Cannot update.")
            print("Please ensure your README.md contains both markers.")

            with open(readme_path, 'a', encoding='utf-8') as f:
                f.write(f"\n{start_marker}\n{new_stats_content}\n{end_marker}\n")
            return False

        new_stats_block = f"{start_marker}\n{new_stats_content}\n{end_marker}"
        
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
    
    try:
        readme_path = 'README.md'
    except Exception as e:
        print(f"Could not determine repository root for README.md: {e}")
        exit(1)


    stats = get_push_stats()
    if stats:
        update_readme(readme_path, stats)
    else:
        print("No statistics generated.")
