#include<iostream>

using namespace std;
//对于栈区，局部变量的地址不能作为返回值。

//堆区,new创建int类型的变量
int* test()
{
	int *p = new int(10);//返回的是变量的地址，用指针接收
	return p;
}
void test01()
{
	int* p = test();
	cout << *p << endl;
	delete p;//释放堆区创建的变量的内存.释放后不能再次使用
}
//用new创建一个数组
void test02()
{
	int* p = new int[10];//返回值是数组的首地址
	for (int i = 0; i < 10; i++)
	{
		p[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << p[i] << endl;
	}
	delete[] p;//释放堆区数组，需要加[]
}
int main001()
{
	test01();
	test02();
	return 0;
}