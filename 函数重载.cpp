#include<iostream>

using namespace std;
//函数名可以相同
//条件：
//1.同一个作用域下
//2.函数名相同
//3.函数参数类型不同或者个数不同或者顺序不同

//注意 :函数的返回值类型不可以作为函数重载的条件 如int test()和void test()


//引用作为函数重载的条件 
void fun(int& a)
{
	cout << "函数fun(int& a)的调用" << endl;
}
void fun(const int& a)
{
	cout << "函数const fun(int& a)的调用" << endl;
}

//函数重载遇到默认参数 只传一个参数的情况下可能会出现二义性，会报错
void fun01(int a, int b = 10)
{
	cout << "函数fun01(int a,int b = 10)的调用" << endl;
}
void fun01(int a)
{
	cout << "函数fun01(int a)的调用" << endl;
}

void test()
{
	cout << "test()的调用" << endl;
}
void test(int a)
{
	cout << "test(int a)的调用" << endl;
}

void test(int a,double b)
{
	cout << "test(int a,double b)的调用" << endl;
}
void test(double a,int b)
{
	cout << "test(double a,int b)的调用" << endl;
}

int main()
{
 //   test();
	//test(10);
	//test(3.14, 10);
	//test(10, 3.14);
	int a = 10;
	fun(a); //调用无const
	fun(10); //调用有const
	system("pause");
	return 0;
}