// #include <iostream>
// 
// using namespace std;
// 
// class A
// {
// public:
// 	virtual void func()
// 	{
// 		cout << "A" << endl;
// 		cout << c << endl;
// 	}
// 
// public:
// 	int a = 11;
// protected:
// 	int b = 12;
// private:
// 	int c = 13;
// };
// 
// class B : public A
// {
// public:
// 	virtual void func() override
// 	{
// 		cout << "B" << endl;
// 		cout << this->b << endl;
// 		cout << this->a << endl;
// 		cout << this->c << endl;
// 	}
// };
// 
// int main()
// {
// 	B* b = new B();
// 
// 	A* a = dynamic_cast<A*>(b);
// 
// 	b->func();
// 	a->func();
// }
