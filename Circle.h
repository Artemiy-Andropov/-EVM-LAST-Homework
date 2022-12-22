#pragma once
#include "Figure.h"
#include <iostream>

/*
*@brief Класс "Circle"
*/
class Circle : public Figure
{
	double m_radius;

public:

	/*
	*@brief Конструктор с параметрами
	*@param Действительно число (Радиус)
	*/
	Circle(double radius_);

	/*
	*@brief Деструктор
	*/
	~Circle() override;

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