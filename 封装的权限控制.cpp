#include<iostream>

using namespace std;
//����Ȩ��
//1.����Ȩ�ޣ�public     ��Ա ���ڿ��Է��� ������Է���
//2.����Ȩ�ޣ�protected  ��Ա ���ڿ��Է��� ���ⲻ���Է��� ���ӿ��Է��ʸ����еı������� 
//3.˽��Ȩ�ޣ�private    ��Ա ���ڿ��Է��� ���ⲻ���Է��� ���Ӳ����Է��ʸ����еı�������

class test
{
public:
	string m_name;
protected:
	string m_car;
private:
	string m_password;
};
int main003()
{

	system("pause");
	return 0;
}
//C++��struct��class����������Ĭ�ϵķ���Ȩ�޲�ͬ
//structĬ��Ϊ����  classĬ��Ϊ˽��