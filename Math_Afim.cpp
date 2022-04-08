#include "Math_Afim.h"
#include <sstream>
#include "Format.h"
Math_Funcao::AfimStruct::AfimStruct(double a, double b)
{
	this->a = a;
	this->b = b;
}

double Math_Funcao::AfimStruct::f(double x)
{
	return this->a * x + this->b;
}

std::vector<double> Math_Funcao::AfimStruct::GetResults(std::vector<double>& list_x)
{
	auto len = list_x.size();
	std::vector<double> ret(len);
	for (size_t i = 0; i < len; i++)
	{
		ret[i] = f(list_x[i]);
	}
	return ret;
}

std::string Math_Funcao::AfimStruct::Format(double x)
{
	std::string test = "f({}) = ({}) * ({}) + ({}) = ({})";
	std::string x_str = std::to_string(x);
	std::string a_str = std::to_string(a);
	std::string b_str = std::to_string(b);
	std::string result_str = std::to_string(f(x));

	std::vector< std::string> args = { x_str ,a_str ,b_str,x_str, result_str };
	auto s2 = string_format2(test, args);

	return s2;
}

double Math_Funcao::AfimStruct::X()
{
	return b / a;
}
