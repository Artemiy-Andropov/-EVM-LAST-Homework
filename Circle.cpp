#include "Figure.h"
#include "Circle.h"
#include <iostream>
#include <math.h>

Circle::Circle(double radius_)
{
	m_radius = radius_;
}

Circle::~Circle()
{
	m_radius = 0;
}

double Circle::Perimeter()
{
	double pi_ = 3.14159265358979323846;

	double P = 2 * pi_ * m_radius;

	return P;
}

double Circle::Square()
{
	double pi_ = 3.14159265358979323846;

	double S = pi_ * pow(m_radius, 2);

	return S;
}