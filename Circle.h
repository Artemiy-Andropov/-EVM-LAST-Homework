#pragma once
#include "Figure.h"
#include <iostream>

/*
*@brief ����� "Circle"
*/
class Circle : public Figure
{
	double m_radius;

public:

	/*
	*@brief ����������� � �����������
	*@param ������������� ����� (������)
	*/
	Circle(double radius_);

	/*
	*@brief ����������
	*/
	~Circle() override;

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