#include<iostream>
using namespace std;
typedef struct Point
{
	int m_x;
	int m_y;
};
typedef struct Circle
{
	struct Point center;
	int m_r;
};
void Same(Circle c, Point p)
{
	int distance = (p.m_x - c.center.m_x) * (p.m_x - c.center.m_x) + (p.m_y - c.center.m_y) * (p.m_y - c.center.m_y);
	int rdistance = c.m_r * c.m_r;
	if (distance == rdistance)
		cout << "点在圆上 " << endl;
	if (distance > rdistance)
		cout << "点在圆外 " << endl;
	if (distance < rdistance)
		cout << "点在圆内" << endl;
}
int main()
{
	Circle c;
	c.center.m_x = 10;
	c.center.m_y = 0;
	c.m_r = 10;
	Point p;
	p.m_x = 10;
	p.m_y = 10;
	Same(c, p);
	return 0;
}