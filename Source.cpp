#include "my_func.h"

int main() {
	setlocale(LC_ALL, "rus");
	int n = 5;
	int m = 5;
	int** mas;
	// ��������� ������ ��� ���������� ������, ������� ������ ������ �����
	mas = new int*[n];
	//��������� ������ ��� ������
	for (int i = 0; i < n; i++) {
		mas[i] = new int[m];
	}
	fill_random(mas, n, m);
	print_matrix(mas, n, m);
	cout << endl;
	/*cout << "���-�� ������������� " << count_positive(mas, n, m) << endl;
	cout << "���-�� ������ " << count_chot(mas, n, m) << endl;*/
	//mul_by_number(mas, n, m, 10);
	//cout << endl;
	//print_matrix(mas, n, m);
	/*cout << " �� ����� ������� " << amean(mas, n, m) << endl;
	cout << "��������� ����� ������� ���������: " << fact(sum_main(mas,n,m)) << endl;
	reverse_row(mas, 0, m);
	print_matrix(mas, n, m);*/
	main_revers(mas, n);
	print_matrix(mas, n, m);
}