#include <iostream>
#include <string>
#include <cmath>
#include <numbers>
using namespace std;

class Shape
{
private:

public:
		
	int getArea()
	{
		cout << "The Area of the Shape is: " << 0 << endl;
		return 0;
	}

	int getPerimeter()
	{
		cout << "The Perimeter of the Shape is: " << 0 << endl;
		return 0;
	}
};

class Circle : public Shape
{
private:
	
public:
	int r;
	//use "numbers::pi" to use exact Pi value in calculations. Comes from #include <numbers>

	Circle(int rad)
	{
		r = rad;
	}
	
	double getArea() 
	{
		double a = numbers::pi * (r * r);
		cout << "The Area of the Circle is: " << a << endl;
		return a;
	}

	double getPerimeter()
	{
		double p = numbers::pi * 2 * r;
		cout << "The Perimeter of the Circle is: " << p << endl;
		return p;
	}
};

class Rectangle : public Shape
{
private:

public:
	int x;
	int y;
	
	Rectangle()
	{
		x = 0;
		y = 0;
	}

	Rectangle(int l, int w)
	{
		x = l;
		y = w;
	}

	int getArea()
	{
		int a = x * y;
		cout << "The Area of the Rectangle is: " << a << endl;
		return a;
	}

	int getPerimeter()
	{
		int p = (2 * x) + (2 * y);
		cout << "The Perimeter of the Rectangle is: " << p << endl;
		return p;
	}
};

class RightTriangle : public Shape
{
private:

public:
	int x;
	int y;

	RightTriangle()
	{
		x = 0;
		y = 0;
	}
	RightTriangle(int l, int w)
	{
		x = l;
		y = w;
	}

	double getArea()
	{
		double a = 0.5 * (x * y);
		cout << "The Area of the Triangle is: " << a << endl;
		return a;
	}

	double getPerimeter()
	{
		double c;
		c = sqrt((x * x) + (y * y));
		double p = c + x + y;
		cout << "The Perimeter of the Triangle is: " << p << endl;
		return p;
	}
};

class Square : public Rectangle
{
private:

public:

	Square(int s)
	{
		x = s;
		y = s;
	}

	int getArea()
	{
		int a = x * y;
		cout << "The Area of the Square is: " << a << endl;
		return a;
	}
};

class IsocelesRightTriangle : public RightTriangle
{
private:

public:

	IsocelesRightTriangle(int s)
	{
		x = s;
		y = s;
	}

};


int main()
{
	//Write all Testers. Test each Unique Shape with 2 examples.
	cout << "Testing 'Shape'" << endl;
	Shape basic = Shape();
	basic.getArea();
	basic.getPerimeter();
	cout << "'Shape' Testing Complete." << endl;

	cout << "\nTesting 'Circle'" << endl;
	cout << "First Test... input 2." << endl;
	Circle C1 = Circle(2);
	C1.getArea();
	C1.getPerimeter();
	cout << "Second Test... input 5" << endl;
	Circle C2 = Circle(5);
	C2.getArea();
	C2.getPerimeter();
	cout << "'Circle' Testing Complete." << endl;

	cout << "\nTesting 'Rectangle'" << endl;
	cout << "First Test... inputs 3 and 4" << endl;
	Rectangle R1 = Rectangle(3,4);
	R1.getArea();
	R1.getPerimeter();
	cout << "Second Test... inputs 9 and 6" << endl;
	Rectangle R2 = Rectangle(9,6);
	R2.getArea();
	R2.getPerimeter();
	cout << "'Rectangle' Testing Complete." << endl;

	cout << "\nTesting 'RightTriangle'" << endl;
	cout << "First Test... inputs 3 and 4" << endl;
	RightTriangle T1 = RightTriangle(3, 4);
	T1.getArea();
	T1.getPerimeter();
	cout << "Second Test... inputs 9 and 6" << endl;
	RightTriangle T2 = RightTriangle(9, 6);
	T2.getArea();
	T2.getPerimeter();
	cout << "'RightTriangle' Testing Complete." << endl;

	cout << "\nTesting 'Square'" << endl;
	cout << "First Test... input 5" << endl;
	Square S1 = Square(5);
	S1.getArea();
	S1.getPerimeter();
	cout << "Second Test... input 12" << endl;
	Square S2 = Square(12);
	S2.getArea();
	S2.getPerimeter();
	cout << "'Square' Testing Complete." << endl;

	cout << "\nTesting 'IsocelesRightTriangle'" << endl;
	cout << "First Test... input 5" << endl;
	IsocelesRightTriangle I1 = IsocelesRightTriangle(5);
	I1.getArea();
	I1.getPerimeter();
	cout << "Second Test... input 12" << endl;
	IsocelesRightTriangle I2 = IsocelesRightTriangle(12);
	I2.getArea();
	I2.getPerimeter();
	cout << "'IsocelesRightTriangle' Testing Complete." << endl;

	cout << "\n -All Testing Complete-";
}