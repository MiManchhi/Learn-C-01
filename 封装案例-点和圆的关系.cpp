//#include<iostream>
//
//using namespace std;
////����
//class Point
//{
//private:
//	int m_x;
//	int m_y;
//public:
//	//���õ�
//	void SetX(int x)
//	{
//		m_x = x;
//	}
//	void SetY(int y)
//	{
//		m_y = y;
//	}
//	//��ȡ��
//	int GetX()
//	{
//		return m_x;
//	}
//	int GetY()
//	{
//		return m_y;
//	}
//};
////Բ��
//class Circle
//{
//private:
//	int m_r; //�뾶
//	Point m_center; //Բ��
//public:
//	//���ð뾶
//	void SetR(int r)
//	{
//		m_r = r;
//	}
//	//��ð뾶
//	int GetR()
//	{
//		return m_r;
//	}
//	//����Բ��
//	void Setcenter(Point center)
//	{
//		m_center = center;
//	}
//	//���Բ��
//	Point GetCenter()
//	{
//		return m_center;
//	}
//};
////�ж�
//void IsCircle(Circle c, Point p)
//{
//	//�������Բ�ľ����ƽ�� 
//	int pdistance = (c.GetCenter().GetX() - p.GetX())* (c.GetCenter().GetX() - p.GetX()) + (c.GetCenter().GetY() - p.GetY()) * (c.GetCenter().GetY() - p.GetY());
//	//����뾶��ƽ�� 
//	int rdistance = c.GetR()*c.GetR();
//	if (pdistance == rdistance)
//		cout << "����Բ�� " << endl;
//	if (pdistance > rdistance)
//		cout << "����Բ�� " << endl;
//	if (pdistance < rdistance)
//		cout << "����Բ�� " << endl;
//}
//int main005()
//{
//	//����Բ
//	Circle c;
//	c.SetR(10);
//	Point center;
//	center.SetX(10);
//	center.SetY(0);
//
//	//������
//	Point p;
//	p.SetX(10);
//	p.SetY(10);
//
//	//�ж�
//	IsCircle(c,p);
//	return 0;
//}