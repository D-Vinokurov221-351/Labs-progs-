#pragma once
#include <iostream>
class D3Matrix
{
private:
	int rows, cols;
	double* elem;
public:
	D3Matrix();
	~D3Matrix();
	D3Matrix(const int size_rows);
	double get_elem(int i, int j) const;
	void output() const;
	double trase();
	int columns();
	void input();
	void input(int size);

	friend std::istream& operator>>(std::istream& input, D3Matrix& temp);
	friend std::ostream& operator<<(std::ostream& out, const D3Matrix& temp);
};

