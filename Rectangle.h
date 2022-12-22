#pragma once
#include "Figure.h"
#include <iostream>

/*
*@brief Класс "Rectangle"
*/
class Rectangle : public Figure
{
	double m_Side_a;
	double m_Side_b;

public:

	/*
	*@brief Конструктор с параметрами
	*@param Действительно число (Сторона)
	*@param Действительно число (Сторона)
	*/
	Rectangle(double Side_a, double Side_b);

	/*
	*@brief Деструктор
	*/
	~Rectangle() override;

	/*
	*@brief Находит периметр
	*@return Действительно число
	*/
	double Perimeter() override;

	/*
	*@brief Находит площадь
	*@return Действительно число
	*/
	double Square() override;

};