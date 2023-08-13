#include<iostream>
using namespace std;

class Cube
{
private:
	int m_L; //��
	int m_H; //��
	int m_W; //��
public:
	void SetL(int L) //���ó�
	{
		m_L = L;
	}
	int GetL() //��ȡ��
	{
		return m_L;
	}
	void SetW(int W) //���ÿ�
	{
		m_W = W;
	}
	int GetW() //��ȡ��
	{
		return m_W;
	}
	void SetH(int H) //���ø�
	{
		m_H = H;
	}
	int GetH() //��ȡ��
	{
		return m_H;
	}
	//��ȡ���
	int calculateS()
	{
		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
	}
	//��ȡ���
	int calculateV()
	{
		return m_L * m_W * m_H;
	}
	//���ں����ж�
	bool SameClass(Cube c)
	{
		if (m_L == c.GetL() && m_W == c.GetW() && m_H == c.GetH())
			return true;
		else
			return false;
	}
};
//ȫ�ֺ����ж�
bool Same(Cube& c1, Cube& c2)
{
	if (c1.GetL() == c2.GetL() && c1.GetW() == c2.GetW() && c1.GetH() == c2.GetH())
		return true;
	else
		return false;
}
int main005()
{
	Cube c1;
	c1.SetL(10);
	c1.SetW(10);
	c1.SetH(10);
	Cube c2;
	c2.SetL(10);
	c2.SetW(10);
	c2.SetH(10);
	Same(c1, c2);
	cout << "������c1�����Ϊ��" << c1.calculateS() << endl;
	cout << "������c1�����Ϊ��" << c1.calculateV() << endl;
	if (Same(c1, c2) == true)
		cout << "c1��c2����ȵ�" << endl;
	else
		cout << "c1��c2�����" << endl;
	if (c1.SameClass(c2) == true)
		cout << "c1��c2����ȵ�" << endl;
	else
		cout << "c1��c2�����" << endl;
	system("pause");
	return 0;
}