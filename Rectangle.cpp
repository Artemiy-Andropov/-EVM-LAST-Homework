#include "Figure.h"
#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(double Side_a, double Side_b)
{
	m_Side_a = Side_a;

	m_Side_b = Side_b;
}

Rectangle::~Rectangle()
{
	m_Side_a = 0;

	m_Side_b = 0;
}

double Rectangle::Perimeter()
{
	double P = 2 * (m_Side_a + m_Side_b);

	return P;
}

double Rectangle::Square()
{
	double S = m_Side_a * m_Side_b;

	return S;
}