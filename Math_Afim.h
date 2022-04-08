#pragma once

#include <string>
#include <vector>
 namespace Math_Funcao
{
	 struct AfimStruct
	 {
		 AfimStruct(double a, double b);
		 double a, b;
		 double f(double x);
		 // Disable realocation : std::vector<double>&
		 std::vector<double> GetResults(std::vector<double>& x);
		 std::string Format(double x);
		 double X();

	 };
}