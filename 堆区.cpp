#include<iostream>

using namespace std;
//����ջ�����ֲ������ĵ�ַ������Ϊ����ֵ��

//����,new����int���͵ı���
int* test()
{
	int *p = new int(10);//���ص��Ǳ����ĵ�ַ����ָ�����
	return p;
}
void test01()
{
	int* p = test();
	cout << *p << endl;
	delete p;//�ͷŶ��������ı������ڴ�.�ͷź����ٴ�ʹ��
}
//��new����һ������
void test02()
{
	int* p = new int[10];//����ֵ��������׵�ַ
	for (int i = 0; i < 10; i++)
	{
		p[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << p[i] << endl;
	}
	delete[] p;//�ͷŶ������飬��Ҫ��[]
}
int main001()
{
	test01();
	test02();
	return 0;
}