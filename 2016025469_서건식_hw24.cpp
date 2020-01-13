#include <iostream>
#include <cmath>

using namespace std;
class Shape
{
protected:
	float width, height;
public:
	void set_data(float a, float b)
	{
		width = a;
		height = b;
	}
};

class rectangular : public Shape
{
public:
	float area()
	{
		return (width * height);
	}
};
class triangle : public Shape
{
public:
	float area()
	{
		return ((width * height) / 2);
	}
};

int main()
{
	rectangular rect;
	triangle tri;
	rect.set_data(5, 3);
	tri.set_data(2, 5);
	cout << rect.area() << endl;
	cout << tri.area() << endl
		return 0;
}
