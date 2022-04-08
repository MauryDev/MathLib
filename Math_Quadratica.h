#pragma once
namespace Math_Funcao
{
	struct Quadratica
	{
		double a, b, c;
		Quadratica(double a, double b, double c);
		double f(double x);
		double x();
		double xv();
		double yv();
		double delta();
	};
}