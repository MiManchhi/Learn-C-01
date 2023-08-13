#include<iostream>

using namespace std;
//成员属性设置为私有 
//1.可以自己控制读写权限 
//2.对于写可以检测数据的有效性
class Person
{
private:
	string m_name;  //可读可写
	int m_age; //只读
	string m_lover; //可写
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
	s1.SetName("张三");
	s1.SetLover("李四");
	cout <<"姓名为：" << s1.GetName() << endl;
	cout << "年龄为：" << s1.GetAge() << endl;
	system("pause");
	return 0;
}