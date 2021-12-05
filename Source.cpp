#include "my_func.h"

int main() {
	setlocale(LC_ALL, "rus");
	int n = 5;
	int m = 5;
	int** mas;
	// выделение памяти под одномерный массив, который хранит адреса строк
	mas = new int*[n];
	//выделение памяти под строки
	for (int i = 0; i < n; i++) {
		mas[i] = new int[m];
	}
	fill_random(mas, n, m);
	print_matrix(mas, n, m);
	cout << endl;
	/*cout << "Кол-во положительных " << count_positive(mas, n, m) << endl;
	cout << "Кол-во четных " << count_chot(mas, n, m) << endl;*/
	//mul_by_number(mas, n, m, 10);
	//cout << endl;
	//print_matrix(mas, n, m);
	/*cout << " Ср арифм главной " << amean(mas, n, m) << endl;
	cout << "Факториал суммы главной диагонали: " << fact(sum_main(mas,n,m)) << endl;
	reverse_row(mas, 0, m);
	print_matrix(mas, n, m);*/
	main_revers(mas, n);
	print_matrix(mas, n, m);
}