#include<iostream>

using namespace std;
//��Ա��������Ϊ˽�� 
//1.�����Լ����ƶ�дȨ�� 
//2.����д���Լ�����ݵ���Ч��
class Person
{
private:
	string m_name;  //�ɶ���д
	int m_age; //ֻ��
	string m_lover; //��д
public:
	void SetName(string name)
	{
		m_name = name;
	}
	string GetName()
	{
		return m_name;
	}
	int GetAge()
	{
		m_age = 18;
		return m_age;
	}
	void SetLover(string lover)
	{
		m_lover = lover;
	}
};
int main004()
{
	Person s1;
	s1.SetName("����");
	s1.SetLover("����");
	cout <<"����Ϊ��" << s1.GetName() << endl;
	cout << "����Ϊ��" << s1.GetAge() << endl;
	system("pause");
	return 0;
}