#include<iostream>

using namespace std;
//������������ͬ
//������
//1.ͬһ����������
//2.��������ͬ
//3.�����������Ͳ�ͬ���߸�����ͬ����˳��ͬ

//ע�� :�����ķ���ֵ���Ͳ�������Ϊ�������ص����� ��int test()��void test()


//������Ϊ�������ص����� 
void fun(int& a)
{
	cout << "����fun(int& a)�ĵ���" << endl;
}
void fun(const int& a)
{
	cout << "����const fun(int& a)�ĵ���" << endl;
}

//������������Ĭ�ϲ��� ֻ��һ������������¿��ܻ���ֶ����ԣ��ᱨ��
void fun01(int a, int b = 10)
{
	cout << "����fun01(int a,int b = 10)�ĵ���" << endl;
}
void fun01(int a)
{
	cout << "����fun01(int a)�ĵ���" << endl;
}

void test()
{
	cout << "test()�ĵ���" << endl;
}
void test(int a)
{
	cout << "test(int a)�ĵ���" << endl;
}

void test(int a,double b)
{
	cout << "test(int a,double b)�ĵ���" << endl;
}
void test(double a,int b)
{
	cout << "test(double a,int b)�ĵ���" << endl;
}

int main()
{
 //   test();
	//test(10);
	//test(3.14, 10);
	//test(10, 3.14);
	int a = 10;
	fun(a); //������const
	fun(10); //������const
	system("pause");
	return 0;
}