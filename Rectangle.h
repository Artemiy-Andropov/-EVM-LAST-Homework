#pragma once
#include "Figure.h"
#include <iostream>

/*
*@brief ����� "Rectangle"
*/
class Rectangle : public Figure
{
	double m_Side_a;
	double m_Side_b;

public:

	/*
	*@brief ����������� � �����������
	*@param ������������� ����� (�������)
	*@param ������������� ����� (�������)
	*/
	Rectangle(double Side_a, double Side_b);

	/*
	*@brief ����������
	*/
	~Rectangle() override;

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