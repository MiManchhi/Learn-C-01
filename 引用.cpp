#include<iostream>
//���ʣ����õı�����C++�ڲ�ʵ����һ��ָ�볣��

using namespace std;
//���ã������������
//�﷨����������& ���� = ԭ��
/*ע�⣡���� 
1.���ñ���Ҫ��ʼ����
int& a���Ǵ����
2.����һ����ʼ�����Ͳ����Ը�����*/

//��������������,���Ըı�ʵ��
void swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}

//������Ϊ�����ķ���ֵ
//1.��Ҫ���ؾֲ�����������,�Ͳ�Ҫ���ؾֲ������ĵ�ַһ��(�ֲ�����������ջ�����ں���ִ�����ͱ��ͷţ�
//2.�����ĵ��ÿ�����Ϊ��ֵ
int& test01()
{
	int a = 10;
	return a;
}
int& test02()
{
	static int a = 10; //��̬�����������ȫ��������ϵͳ�ͷ�
	return a;
}

//�������ã����������βη�ֹ�������

void test03()
{
	int a = 10;
	//���const��������������޸�Ϊ��int temp = 10,int& ref = temp;
	const int& ref = 10; //���ñ�������һ��Ϸ����ڴ�ռ�

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
	//cout << "t = " << t << endl;  //�ѱ��ͷ�

	int& t = test02();
	cout << "t = " << t << endl;
	test02() = 1000; //��Ϊ��ֵ���൱�ڸ�ֵ
	cout << "t = " << t << endl;

	system("pause");
	return 0;
}