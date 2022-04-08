
#include <math.h>
#include "Math_Quadratica.h"
namespace Math_Funcao
{
	Quadratica::Quadratica(double a, double b, double c)
	{
		// sendo a != 0. a == 0 error
		if (a == 0.0)
		{
			throw "Invalid parameter 'a'";
		}
		this->a = a;
		this->b = b;
		this->c = c;
	}
	double Quadratica::f(double x)
	{
		// f(x) = ax2+ bx + c
		return this->a * pow(x,2) + this->b * x + this->c;
	}
	double Quadratica::x()
	{
		auto v1 = sqrt(pow(b, 2) - 4 * a * c);
		auto v2 = 2 * a;
		auto r1 = (-b + v1) / v2;
		auto r2 = (-b - v1) / v2;
		return r1 - ((r1 - r2) / 2);
	}
	double Quadratica::xv()
	{
		return -b / (2.0 * a);
	}
	double Quadratica::yv()
	{
		return delta() / (4 * a);
	}
	double Quadratica::delta()
	{
		return pow(b, 2) - 4 * a * c;
	}
}