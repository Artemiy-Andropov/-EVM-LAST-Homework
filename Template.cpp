#include <iostream>
//#include <utility>

template <typename T>

/*
*@brief Шаблонный класс "Table"
*/
class Table
{
	T** m_table;
	size_t m_size_v;
	size_t m_size_g;

public:

	/*
	*@brief Конструктор с параметрами
	*@param Число типа size_t
	*@param Число типа size_t
	*/
	Table(size_t size_v, size_t size_g)
	{
		m_table = new T * [size_g];

		for (size_t i = 0; i < size_g; i++)
			m_table[i] = new T[size_v];

		m_size_v = size_v;
		m_size_g = size_g;
	}

	/*
	*@brief Деструктор
	*/
	~Table()
	{
		if (m_size_g != 0)
		{
			if (m_size_v != 0)
			{
				for (size_t i = 0; i < m_size_g; i++)
					delete[]m_table[i];
			}
			delete[]m_table;
		}

		m_size_g = 0;

		m_size_v = 0;
	}

	/*
	*@brief Функция, меняющая размер таблицы
	*@param Число типа size_t
	*@param Число типа size_t
	*/
	void resize(size_t n_size_v, size_t n_size_g)
	{
		Table<T> copy(n_size_v, n_size_g);

		if (n_size_g < m_size_g)
		{
			for (size_t i = 0; i < n_size_g; i++)
			{
				if (n_size_v < m_size_v)
				{
					for (size_t j = 0; j < n_size_v; j++)
						copy[i][j] = m_table[i][j];
				}
				else
				{
					for (size_t j = 0; j < m_size_v; j++)
						copy[i][j] = m_table[i][j];
				}
			}
		}
		else
		{
			for (size_t i = 0; i < m_size_g; i++)
			{
				if (n_size_v < m_size_v)
				{
					for (size_t j = 0; j < n_size_v; j++)
						copy[i][j] = m_table[i][j];
				}
				else
				{
					for (size_t j = 0; j < m_size_v; j++)
						copy[i][j] = m_table[i][j];
				}
			}
		}

		m_size_g = n_size_g;

		m_size_v = n_size_v;

		*this = copy;
	}

	/*
	*@brief Функция, взвращает размер таблицы как пару
	*@return Пара
	*/
	std::pair<size_t, size_t> size()
	{
		std::pair<size_t, size_t> answer;

		answer.first = m_size_v;

		answer.second = m_size_g;

		return answer;
	}

	/*
	*@brief Перегрузка оператора []
	*@param Число типа size_t (Индекс)
	*@return Указатель на контейнер
	*/
	T* operator[](size_t index)
	{
		if (index < 0 || index > m_size_g)
			throw 1;
		return m_table[index];
	}

	/*
	*@brief Перегрузка оператора =
	*@param Константная ссылка на объект класс "Table"
	*@return Указатель на объект класс "Table"
	*/
	Table<T>& operator=(const Table<T>& obj)
	{
		if (m_size_g != 0)
		{
			if (m_size_v != 0)
			{
				for (size_t i = 0; i < m_size_g; i++)
					delete[]m_table[i];
			}
			delete[]m_table;
		}

		m_size_g = obj.m_size_g;
		m_size_v = obj.m_size_v;

		m_table = new T * [m_size_g];

		for (size_t i = 0; i < m_size_g; i++)
			m_table[i] = new T[m_size_v];

		for (int i = 0; i < m_size_g; i++)
		{
			for (size_t j = 0; j < m_size_v; j++)
				m_table[i][j] = obj.m_table[i][j];
		}
		return *this;
	}
};

/*
int main()
{

	Table<int> tab(3, 3);

	std::cout << tab[2] << std::endl;

	tab.resize(4, 2);

	std::cout << tab[2] << std::endl;

	size_t test_1 = tab.size().first;

	size_t test_2 = tab.size().second;

	std::cout << test_1 << std::endl;

	std::cout << test_2 << std::endl;

	return 0;
}
*/