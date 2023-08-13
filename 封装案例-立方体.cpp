#include<iostream>
using namespace std;

class Cube
{
private:
	int m_L; //长
	int m_H; //宽
	int m_W; //高
public:
	void SetL(int L) //设置长
	{
		m_L = L;
	}
	int GetL() //获取长
	{
		return m_L;
	}
	void SetW(int W) //设置宽
	{
		m_W = W;
	}
	int GetW() //获取宽
	{
		return m_W;
	}
	void SetH(int H) //设置高
	{
		m_H = H;
	}
	int GetH() //获取高
	{
		return m_H;
	}
	//获取面积
	int calculateS()
	{
		return 2 * m_L * m_W + 2 * m_L * m_H + 2 * m_W * m_H;
	}
	//获取体积
	int calculateV()
	{
		return m_L * m_W * m_H;
	}
	//类内函数判断
	bool SameClass(Cube c)
	{
		if (m_L == c.GetL() && m_W == c.GetW() && m_H == c.GetH())
			return true;
		else
			return false;
	}
};
//全局函数判断
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
	cout << "立方体c1的面积为：" << c1.calculateS() << endl;
	cout << "立方体c1的体积为：" << c1.calculateV() << endl;
	if (Same(c1, c2) == true)
		cout << "c1和c2是相等的" << endl;
	else
		cout << "c1和c2不相等" << endl;
	if (c1.SameClass(c2) == true)
		cout << "c1和c2是相等的" << endl;
	else
		cout << "c1和c2不相等" << endl;
	system("pause");
	return 0;
}