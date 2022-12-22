#include "Figure.h"
#include "Triangle.h"
#include <iostream>
#include <math.h>

Triangle::Triangle(double Side_a, double Side_b, double Side_c)
{
	if (((Side_a + Side_b) > Side_c) && ((Side_b + Side_c) > Side_a) && ((Side_a + Side_c) > Side_b))
	{
		m_Side_a = Side_a;

		m_Side_b = Side_b;

		m_Side_c = Side_c;
	}
	else
	{
		m_Side_a = 0;

		m_Side_b = 0;

		m_Side_c = 0;
	}
}

Triangle::~Triangle()
{
	m_Side_a = 0;

	m_Side_b = 0;

	m_Side_c = 0;
}

double Triangle::Perimeter()
{
	double P = m_Side_a + m_Side_b + m_Side_c;

	return P;
}

double Triangle::Square()
{
	double half_prim = this->Perimeter() / 2;

	double S = sqrt(half_prim * (half_prim - m_Side_a) * (half_prim - m_Side_b) * (half_prim - m_Side_c));

	return S;
}