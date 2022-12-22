#pragma once
#include "Figure.h"
#include <iostream>

/*
*@brief ����� "Triangle"
*/
class Triangle : public Figure
{
	double m_Side_a;
	double m_Side_b;
	double m_Side_c;

public:

	/*
	*@brief ����������� � �����������
	*@param ������������� ����� (�������)
	*@param ������������� ����� (�������)
	*@param ������������� ����� (�������)
	*/
	Triangle(double Side_a, double Side_b, double Side_c);

	/*
	*@brief ����������
	*/
	~Triangle() override;

	/*
	*@brief ������� ��������
	*@return ������������� �����
	*/
	double Perimeter() override;

	/*
	*@brief ������� �������
	*@return ������������� �����
	*/
	double Square() override;

};