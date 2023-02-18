#include <iostream>
#include <locale.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <cmath>


double mean(double a, double b) {
	return (a + b) / 2;
}

void fill_arr(int* arr, const int size, int low, int hi) {
	for (int i = 0; i < size; ++i) {
		
			arr[i] = rand() % (hi + 1 - low) + low;
		
	}
}

void print_arr(int* arr, const int size) {
	std::cout << "[ ";
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << ", ";
	}
	std::cout << "\b\b ]\n";
}

double mean_arr(int* arr, const int size) {
	int summ = 0;
	for (int i = 0; i < size; ++i) {
		summ += arr[i];
	}
	return (double)summ / size;
}

void powers(int N, int M) {
	int p = N;
	for (int i = 0; i <= M; ++i)
		std::cout << i << '\t';
	std::cout << '\n';
	for (int i = 0; i <= M; ++i) {
		
		if (!i)
			std::cout << 1 << '\t';
		else if (i == 1)
			std::cout << N << '\t';
		else {
			N *= p;
			std::cout << N << '\t';
		}	
	}
}

void positive_arr(int* arr, int length) {
	for (size_t i = 0; i < length; i++){
		if (arr[i] < 0)
			arr[i] = abs(arr[i]);
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	srand(time(NULL));

	// ������ 1.
	/*
		�������� ������� mean, ������� ����������
	������� �������������� ���� ���������� � �� �����.
	�� �������� ������������������ � ������, ������
	������� � ����� main.
	*/
	std::cout << "������ 1.\n��������� ��� ���������� �������� ��������������� ���� �����.\n������� ��� �����: ";
	double num1, num2;
	std::cin >> num1 >> num2;
	std::cout << "������� �������������� ����� " << num1 << " � " << num2 << " ����� " << mean(num1, num2) << ".\n\n\n";

	// ������ 2.
	/*
		�������� ������� mean_arr. ��� ���������
	������ � ��� �����, ����� ���� ���������� �������
	�������������� ���� ��� ���������.
	*/
	std::cout << "������ 2.\n��������� ��� ���������� �������� ��������������� ��������� �������.\n";
	int low = 0, hi = 10;
	const int size = 10;
	int arr[size];
	fill_arr(arr, size, low, hi);
	std::cout << "������� �������������� �������:\n";
	print_arr(arr, size);
	std::cout << "����� " << mean_arr(arr, size) << ".\n\n\n";

	// ������ 3.
	/*
		�������� ������� powers(N, M), �������
	��������� ��� �������� ��������. ������� ������
	�������� � ������� ��� ������� ����� N �� ������� 0 ��
	������� M ������������.
	*/
	int N, M;
	std::cout << "������ 3.\n��������� ��� ������ �������� �����.\n������� ����� -> ";
	std::cin >> N;
	std::cout << "������� ������� ��� ���������� ��������� ����� -> ";
	std::cin >> M;
	powers(N, M);
	std::cout << "\n\n\n";

	// ������ 4.
	/*
		�������� ������� positive_arr, ������� ���������
	������ � ��� �����, ����� ���� ������ � �� ��� 
	������������� �������� �� �������������. ����
	������������� ����� ����� �������� �� ������
	*/
	std::cout << "������ 4.\n��������� ��� ������ ������������� ����� � ������� �� �������������.\n";
	low = -10; hi = 10;
	const int size1 = 10;
	int arr1[size1];
	fill_arr(arr1, size1, low, hi);
	std::cout << "��������� ������:\n";
	print_arr(arr1, size1);
	positive_arr(arr1, size1);
	std::cout << "�������� ������:\n";
	print_arr(arr1, size1);
	std::cout << "\n\n\n";

	return 0;
}
