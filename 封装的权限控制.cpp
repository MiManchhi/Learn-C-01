#include<iostream>

using namespace std;
//访问权限
//1.公共权限：public     成员 类内可以访问 类外可以访问
//2.保护权限：protected  成员 类内可以访问 类外不可以访问 儿子可以访问父亲中的保护内容 
//3.私有权限：private    成员 类内可以访问 类外不可以访问 儿子不可以访问父亲中的保护内容

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
//C++中struct和class的区别在于默认的访问权限不同
//struct默认为公共  class默认为私有