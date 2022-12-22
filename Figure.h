#pragma once
#include <iostream>

/*
*@brief Класс "Figure"
*/
class Figure
{
public:

	/*
	*@brief Деструктор
	*/
	virtual ~Figure();

	/*
	*@brief Находит периметр
	*@return Действительно число
	*/
	virtual double Perimeter();

	/*
	*@brief Находит площадь
	*@return Действительно число
	*/
	virtual double Square();
};