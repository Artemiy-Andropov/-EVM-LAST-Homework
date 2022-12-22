#pragma once
#include "Figure.h"
#include <iostream>

/*
*@brief Класс "Triangle"
*/
class Triangle : public Figure
{
	double m_Side_a;
	double m_Side_b;
	double m_Side_c;

public:

	/*
	*@brief Конструктор с параметрами
	*@param Действительно число (Сторона)
	*@param Действительно число (Сторона)
	*@param Действительно число (Сторона)
	*/
	Triangle(double Side_a, double Side_b, double Side_c);

	/*
	*@brief Деструктор
	*/
	~Triangle() override;

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