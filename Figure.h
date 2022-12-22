#pragma once
#include <iostream>

/*
*@brief ����� "Figure"
*/
class Figure
{
public:

	/*
	*@brief ����������
	*/
	virtual ~Figure();

	/*
	*@brief ������� ��������
	*@return ������������� �����
	*/
	virtual double Perimeter();

	/*
	*@brief ������� �������
	*@return ������������� �����
	*/
	virtual double Square();
};