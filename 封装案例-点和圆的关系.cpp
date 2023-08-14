//#include<iostream>
//
//using namespace std;
////点类
//class Point
//{
//private:
//	int m_x;
//	int m_y;
//public:
//	//设置点
//	void SetX(int x)
//	{
//		m_x = x;
//	}
//	void SetY(int y)
//	{
//		m_y = y;
//	}
//	//获取点
//	int GetX()
//	{
//		return m_x;
//	}
//	int GetY()
//	{
//		return m_y;
//	}
//};
////圆类
//class Circle
//{
//private:
//	int m_r; //半径
//	Point m_center; //圆心
//public:
//	//设置半径
//	void SetR(int r)
//	{
//		m_r = r;
//	}
//	//获得半径
//	int GetR()
//	{
//		return m_r;
//	}
//	//设置圆心
//	void Setcenter(Point center)
//	{
//		m_center = center;
//	}
//	//获得圆心
//	Point GetCenter()
//	{
//		return m_center;
//	}
//};
////判断
//void IsCircle(Circle c, Point p)
//{
//	//计算点与圆心距离的平方 
//	int pdistance = (c.GetCenter().GetX() - p.GetX())* (c.GetCenter().GetX() - p.GetX()) + (c.GetCenter().GetY() - p.GetY()) * (c.GetCenter().GetY() - p.GetY());
//	//计算半径的平方 
//	int rdistance = c.GetR()*c.GetR();
//	if (pdistance == rdistance)
//		cout << "点在圆上 " << endl;
//	if (pdistance > rdistance)
//		cout << "点在圆外 " << endl;
//	if (pdistance < rdistance)
//		cout << "点在圆内 " << endl;
//}
//int main005()
//{
//	//创建圆
//	Circle c;
//	c.SetR(10);
//	Point center;
//	center.SetX(10);
//	center.SetY(0);
//
//	//创建点
//	Point p;
//	p.SetX(10);
//	p.SetY(10);
//
//	//判断
//	IsCircle(c,p);
//	return 0;
//}