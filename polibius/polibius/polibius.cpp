// polibius.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

const char POLYBIUS[5][5] = {
	{ 'A', 'B', 'C' , 'D', 'E'},
	{ 'F', 'G', 'H' , 'I', 'K'},
	{ 'L', 'M', 'N' , 'O', 'P'},
	{ 'Q', 'R', 'S' , 'T', 'U'},
	{ 'V', 'W', 'X' , 'Y', 'Z'}
};

void kodavorum(char *c) {

	int size = -1;
	while (c[++size] != '\0') {};

	int *x = new int[size];
	int *y = new int[size];

	for (int k = 0; k < size; ++k) {

		for (int i = 0; i < 5; ++i)
			for (int j = 0; j < 5; ++j)
				if (POLYBIUS[i][j] == c[k]) {
					x[k] = j;
					y[k] = i;
				}
	}

	int *z = new int[2 * size];

	for (int k = 0; k < size; ++k)
		z[k] = x[k];
	for (int k = size; k < 2 * size; ++k)
		z[k] = y[k - size];

	for (int k = 0; k < size; ++k) {
		x[k] = z[k * 2];
		y[k] = z[k * 2 + 1];
	}

	for (int k = 0; k < size; ++k)
		c[k] = POLYBIUS[y[k]][x[k]];

	delete[] z;
	delete[] y;
	delete[] x;
}

void apakodavorum(char *c) {

	int size = -1;
	while (c[++size] != '\0') {};

	int *z = new int[2 * size];

	for (int k = 0; k < size; ++k) {

		for (int i = 0; i < 5; ++i)
			for (int j = 0; j < 5; ++j)
				if (POLYBIUS[i][j] == c[k]) {
					z[2 * k] = j;
					z[2 * k + 1] = i;
				}
	}

	int *x = new int[size];
	int *y = new int[size];

	for (int k = 0; k < size; ++k)
		x[k] = z[k];
	for (int k = size; k < 2 * size; ++k)
		y[k - size] = z[k];

	for (int k = 0; k < size; ++k)
		c[k] = POLYBIUS[y[k]][x[k]];

	delete[] y;
	delete[] x;
	delete[] z;
}

int main() {

	char c[25] ;
	cout << " NERMUCEQ KODAVORVOX BAR@    " << endl;
	cin >> c;
	kodavorum(c);
	std::cout << c << std::endl;
	apakodavorum(c);
	std::cout << c << std::endl;

	return 0;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
