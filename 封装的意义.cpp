#include<iostream>

using namespace std;

//���һ��Բ��,��Բ���ܳ� 
const double PI = 3.14;
//class�������һ���࣬��������������
class Circle
{
	//����Ȩ�� 
public:     //����Ȩ�� 
	//����
	int m_r;   //�뾶
	//��Ϊ
	double calculateZC()  //���ܳ�
	{
		return 2 * PI * m_r;
	}
};
int main001()
{
	//ͨ��Բ�� ���������Բ������
	Circle c1;
	c1.m_r = 10;
	cout << "Բ���ܳ�Ϊ��" << c1.calculateZC() << endl;
	system("pause");
	return 0;
}