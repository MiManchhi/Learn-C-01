#include<iostream>
//本质：引用的本质在C++内部实现是一个指针常量

using namespace std;
//引用：给变量起别名
//语法：数据类型& 别名 = 原名
/*注意！！！ 
1.引用必须要初始化。
int& a；是错误的
2.引用一旦初始化，就不可以更改了*/

//引用做函数参数,可以改变实参
void swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}

//引用作为函数的返回值
//1.不要返回局部变量的引用,和不要返回局部变量的地址一样(局部变量储存在栈区，在函数执行完后就被释放）
//2.函数的调用可以作为左值
int& test01()
{
	int a = 10;
	return a;
}
int& test02()
{
	static int a = 10; //静态变量，存放在全局区，由系统释放
	return a;
}

//常量引用（用来修饰形参防止误操作）

void test03()
{
	int a = 10;
	//添加const后编译器将代码修改为，int temp = 10,int& ref = temp;
	const int& ref = 10; //引用必须引向一块合法的内存空间

}
int main003()
{
	//int a = 10;
	//int& c = a;
	//c = 15;
	//int b = 20;
	//cout << a << endl;
	
	//swap(a, b);
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;

	//int& t = test01();
	//cout << "t = " << t << endl;  //已被释放

	int& t = test02();
	cout << "t = " << t << endl;
	test02() = 1000; //作为左值，相当于赋值
	cout << "t = " << t << endl;

	system("pause");
	return 0;
}