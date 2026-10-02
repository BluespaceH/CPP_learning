#include <iostream>
using namespace std;

class Point
{
public:
    void setX(int x)
    {
        m_X = x;
    }
    int getX()
    {
        return m_X;
    }
    void setY(int y)
    {
        m_Y = y;
    }
    int getY()
    {
        return m_Y;
    }
private:
    int m_X;
    int m_Y;
};
class Circle
{
public:
    void setR(int r)
    {
        m_R = r;
    }
    int getR()
    {
        return m_R;
    }
    void setC(Point center)
    {
        m_Center = center;
    }
    Point getC()
    {
        return m_Center;
    }
private:
    int m_R;
    Point m_Center;
};



void isInCircle(Circle& c, Point& p)
{
    // 1. 计算两点之间距离的平方
    int distance =
        (c.getC().getX() - p.getX()) * (c.getC().getX() - p.getX()) +
        (c.getC().getY() - p.getY()) * (c.getC().getY() - p.getY());

    // 2. 计算半径的平方
    int rDistance = c.getR() * c.getR();

    // 3. 判断关系
    if (distance == rDistance)
    {
        cout << "点在圆上" << endl;
    }
    else if (distance > rDistance)
    {
        cout << "点在圆外" << endl;
    }
    else
    {
        cout << "点在圆内" << endl;
    }
}
int main()
{
    Circle c;
    c.setR(10);
    Point center;
    center.setX(10);
    center.setY(10);
    c.setC(center);
    Point p;
    p.setX(10);
    p.setY(9);
    isInCircle(c, p);
}