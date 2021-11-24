#include <iostream>
#include <bitset>
#include <limits>

using std::cout;
using std::cin;
using std::endl;
int main() {
	setlocale(LC_ALL, "Russian");
	char spase = ' ';
	cout << "1."<<endl << "Штуров" << spase << "Роман" << spase << "Сергеевич," << spase << "211-353" << endl;	//Задание 1
	cout << "2." << endl;	//Задание 2
	int int_min = -2147483648, int_max = 2147483647;
	unsigned int uint_min = 0, uint_max = 4294967295;
	short short_min = -32768, short_max = 32768;
	unsigned short ushort_min = 0, ushort_max = 65535;
	long long_min = -2147483648;
	long long_max =  2147483647;
	long long ll_min = 9223372036854775808, ll_max = 9223372036854775807;
	double double_min = 1.7E-308, double_max = 1.7E+308;
	char char_min = -128, char_max = 127;
	bool bool_min = 0, bool_max = 1;
	cout << "min int = " << int_min << ", max int = " << int_max << ", size of int = " << sizeof(int) << endl;
	cout << "min unsigned int = " << uint_min << ", max unsigned int = " << uint_max << ", size of unsigned int = " << sizeof(unsigned int) << endl;
	cout << "min short = " << short_min << ", max short = " << short_max << ", size of short = " << sizeof(short) << endl;
	cout << "min unsigned short = " << ushort_min << ", max unsigned short = " << ushort_max << ",size of unsigned short = " << sizeof(unsigned short) << endl;
	cout << "min long = " << long_min << ", max long = " << long_max << ", size of long = " << sizeof(long) << endl;
	cout << "min long long = " << ll_min << ", max long long = " << ll_max << ",size of long long = " << sizeof(long long) << endl;
	cout << "min double = " << double_min << ", max double = " << double_max << ",size of double = " << sizeof(double) << endl;
	cout << "min char = " << char_min << ", max char = " << char_max << ", size of char = " << sizeof(char) << endl;
	cout << "min bool = " << bool_min << ", max bool = " << bool_max << ", size of bool = " << sizeof(bool) << endl;
	cout << "3." << endl;	//Задание 3
	short num;
	cout << "Введите число:", cin >> num,"\n";
	cout << "В бинарном виде " << std::bitset<16>(num) << endl;
	cout << "В шестнадцатиричном виде " << std::hex << num << endl;
	cout << "bool " << bool(num) << endl;
	cout << "double " << double(num) << endl;
	cout << "char " << char(num) << endl;
	cout << "int " << int(num) << endl;
	cout << "unsigned int " << unsigned int(num) << endl;
	cout << "unsigned short " << unsigned short(num) << endl;
	cout << "long " << long(num) << endl;
	cout << "long long " << long long(num) << endl;
	cout << "4." << endl;	//Задание 4
	int coef_a, coef_b;
	cout << "Введите коэффиценты a * x = b: ", cin >> coef_a >> coef_b,"\n";
	cout << coef_a << " * x = " << coef_b << endl;
	cout << "x = " << coef_b << " / " << coef_a << endl;
	cout << "x = " << coef_b / coef_a << endl;
	cout << "Ответ: " << coef_b / coef_a << endl;
	cout << "5.";	//Задание 5
	double cord1, cord2;
	cout << "Введите координаты отрезка на прямой: ", cin >> cord1 >> cord2,"\n";
	cout << "Середина отрезка находится в точке с координатой " << (cord2 + cord1) / 2 << endl;
	return 0;
}