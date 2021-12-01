#include "D3Matrix.h"
#include <iostream>

D3Matrix::D3Matrix()
{
	rows = 0;
	cols = 0;
}

D3Matrix::~D3Matrix()
{
	if (elem != nullptr)
		delete[]elem;
}

D3Matrix::D3Matrix(const int size_rows)
{
	setlocale(LC_ALL, "Russian");
	rows = size_rows;
	cols = size_rows;
	if (elem != nullptr)
		delete[]elem;
	elem = new double[size_rows * 3];
	std::cout << "¬ведите элементы матрицы ";
	for (int i = 0; i < cols * 3; i++)
	{
		std::cin >> elem[i];
	}
	elem[rows - 1] = 0;
	elem[rows * 2] = 0;
}

double D3Matrix::get_elem(int i, int j) const
{
	if (i == j) return elem[rows + i];
	else if (i == j + 1) return elem[rows * 2 + i];
	else if (i + 1 == j) return elem[i];
	else return 0;
}

void D3Matrix::output() const
{
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; j++) {
			std::cout << this->get_elem(i, j)<<" ";
		}
		std::cout << '\n';
	}
}

double D3Matrix::trase()
{
	double out = 0;
	for (int i = 0; i < this->cols; i++) {
		out += this->get_elem(i, i);
	}
	return out;
}

int D3Matrix::columns()
{
	return rows;
}

void D3Matrix::input(int size)
{
	setlocale(LC_ALL, "Russian");
	rows = size;
	cols = size;
	if (elem != nullptr)
		delete[]elem;
	std::cout << "¬ведите матрицу ";
	elem = new double[size * 3];
	for (int i = 0; i < size * 3; i++)
	{	
		if (i != rows - 1 or i != rows * 2)
			std::cin >> elem[i];
		else elem[i] = 0;
	}
}

void D3Matrix::input()
{
	setlocale(LC_ALL, "Russian");
	int size;
	std::cout << "¬ведите размер матрицы ";
	std::cin >> size;
	this->input(size);
}

std::istream& operator>>(std::istream& input, D3Matrix& temp)
{
	int size;
	input >> size;
	/*temp.rows = size;
	temp.cols = size;
	if (temp.elem != nullptr)
		delete[]temp.elem;
	temp.elem = new double[size * 3];
	for (int i = 0; i < size * 3; i++)
	{
		temp.elem[i] = i + 1;
	}
	temp.elem[temp.rows - 1] = 0;
	temp.elem[temp.rows * 2] = 0;*/
	temp.input(size);
	return input;
}

std::ostream& operator<<(std::ostream& out, const D3Matrix& temp)
{
for (int i = 0; i < temp.rows; i++) {
	for (int j = 0; j < temp.rows; j++) {
		out << temp.get_elem(i, j) << " ";
	}
	out << '\n';
	}
return out;
}
