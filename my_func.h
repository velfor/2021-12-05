#pragma once
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

void fill_random(int** mas, int n, int m) {
	srand(time(0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = rand() % 21 - 10;
		}
	}
}

void print_matrix(int** mas, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(6) << mas[i][j];
		}
		cout << endl;
	}
}

//Написать функцию, которая вычислит кол-во положительных элементов в матрице
int count_positive(int** mas, int n, int m) {
	int k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mas[i][j] > 0) k++;
		}
	}
	return k;
}
// Написать функцию, которая вычислит кол-во четных элементов в матрице
int count_chot(int** mas, int n, int m) {
	int k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mas[i][j] % 2 == 0) k++;
		}
	}
	return k;
}
//Умножить матрицу на число
void mul_by_number(int** mas, int n, int m, int number) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] *= number;
		}
	}
}
//Среднее арифметическое элементов главной диагонали
double amean(int** mas, int n, int m) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += mas[i][i];
	}
	return static_cast<double>(sum) / n;
}
int sum_main(int** mas, int n, int m) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		s += mas[i][i];
	}
	return s;
}
long long int fact(int k) {
	long long int f = 1;
	for (int i = 1; i <= k; i++) {
		f *= i;
	}
	return f;
}
// Развернуть выбранную строку с номером k
void reverse_row(int** mas, int k, int m) {
	int s = m / 2;
	for (int j = 0; j < s; j++) {
		swap(mas[k][j], mas[k][m-1-j]);
	}
}
void main_revers(int** mas, int n) {
	int s = n / 2;
	for (int i = 0; i < s; i++) {
			swap(mas[i][i], mas[n-1-i][n-1-i]);
	}
}