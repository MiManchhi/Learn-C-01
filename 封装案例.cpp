#include<iostream>

using namespace std;
//���е����Ժ���Ϊͳһ��Ϊ��Ա 
//���һ��ѧ����,������ѧ�ź����� 
//���Ը�ѧ����ѧ��������ֵ,������ʾѧ����ѧ�ź����� 
class Student
{
public:
	string name;
	string num;
	void ShowStudent()
	{
		cout << name << "\t";
		cout << num << endl;
	}
};
int main002()
{
	Student s1;
	s1.name = "����";
	s1.num = "00001";
	Student s2;
	s2.name = "����";
	s2.num = "00002";
	s1.ShowStudent();
	s2.ShowStudent();

	system("pause");
	return 0;
}