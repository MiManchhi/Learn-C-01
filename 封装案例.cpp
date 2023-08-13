#include<iostream>

using namespace std;
//类中的属性和行为统一称为成员 
//设计一个学生类,属性有学号和姓名 
//可以给学生的学号姓名赋值,可以显示学生的学号和姓名 
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
	s1.name = "张三";
	s1.num = "00001";
	Student s2;
	s2.name = "李四";
	s2.num = "00002";
	s1.ShowStudent();
	s2.ShowStudent();

	system("pause");
	return 0;
}