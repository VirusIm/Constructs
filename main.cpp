#include<iostream>
using namespace std;

class Point
{
	double x;
	double y;
public:
	double get_x() const
	{
		return x;
	}
	double get_y() const
	{
		return y;
	}
	void set_x(double x)
	{
		if (x >= -100 && x <= 100)
		{
			this->x = x;
		}
		else
		{
			//this->x = 0;
			throw exception("Bad x");
		}
	}
	void set_y(double y)
	{
		this->y = y;
	}
	double distance(Point other)
	{
		return sqrt(pow(this->x - other.x, 2) + pow(this->y - other.y, 2));
	}
	/*Point()
	{
		x = y = 0;
		cout << "Constructor\t" << this<<endl;
	}*/
	~Point()
	{
		cout << "Destructor\t" << this << endl;
	}
	void print()
	{
		cout << "X = " << x << "\ty = " << y << endl;
	}
	Point(double x =0 , double y=0)
	{
		this->x = x;
		this->y = y;
		cout << "Constructor " << this << endl;
	}
	Point(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		cout << "CopyConstructor:\t" << this << endl;
	}
};
//get/set - методов.
//Inheritance
class Point3D :public Point
{
	double z;
public:
	double get_z()const
	{
		return z;
	}
	void set_z(double z)
	{
		this->z = z;
	}
};
void main()
{
	setlocale(LC_ALL, "Russian");
	//int a;
	//Point A;
	///*A.x = 2;
	//A.y = 3;*/
	//A.set_x(20);
	//A.set_y(3);
	//cout << A.get_x() << "\t" << A.get_y() << endl;	//Point operator
	//												//Arrow operator - оператор косвенного доступа
	//Point* pA = &A;
	//cout << pA->get_x() << "\t" << pA->get_y() << endl;
	//cout << (*pA).get_x() << "\t" << (*pA).get_y() << endl;

	//Point3D B;
	Point A;		//вызывает конструктор по умолчанию(Call default constructor)
	//A.print();	
	Point B(2, 3);
	/*B.print();*/
	/*Point C = 5;
	C.print();
	Point D = B;*/
	A.distance(B);

}