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

	// Задача 1.
	/*
		Создайте функцию mean, которая возвращает
	среднее арифметическое двух переданных в неё чисел.
	Не забудьте продемонстрировать её работу, вызвав
	функцию в блоке main.
	*/
	std::cout << "Задача 1.\nПрограмма для нахождения среднего арифметического двух чисел.\nВведите два числа: ";
	double num1, num2;
	std::cin >> num1 >> num2;
	std::cout << "Среднее арифметическое чисел " << num1 << " и " << num2 << " равно " << mean(num1, num2) << ".\n\n\n";

	// Задача 2.
	/*
		Создайте функцию mean_arr. Она принимает
	массив и его длину, после чего возвращает среднее
	арифметическое всех его элементов.
	*/
	std::cout << "Задача 2.\nПрограмма для нахождения среднего арифметического элементов массива.\n";
	int low = 0, hi = 10;
	const int size = 10;
	int arr[size];
	fill_arr(arr, size, low, hi);
	std::cout << "Среднее арифметическое массива:\n";
	print_arr(arr, size);
	std::cout << "равно " << mean_arr(arr, size) << ".\n\n\n";

	// Задача 3.
	/*
		Создайте функцию powers(N, M), которая
	принимает два числовых значения. Функция должна
	выводить в консоль все степени числа N от степени 0 до
	степени M включительно.
	*/
	int N, M;
	std::cout << "Задача 3.\nПрограмма для вывода степеней числа.\nВведите число -> ";
	std::cin >> N;
	std::cout << "Введите степень для возведения введённого числа -> ";
	std::cin >> M;
	powers(N, M);
	std::cout << "\n\n\n";

	// Задача 4.
	/*
		Создайте функцию positive_arr, которая принимает
	массив и его длину, после чего меняет в нём все 
	отрицательные значения на положительные. Сами
	положительные числа никак меняться не должны
	*/
	std::cout << "Задача 4.\nПрограмма для замены отрицательных чисел в массиве на положительные.\n";
	low = -10; hi = 10;
	const int size1 = 10;
	int arr1[size1];
	fill_arr(arr1, size1, low, hi);
	std::cout << "Начальный массив:\n";
	print_arr(arr1, size1);
	positive_arr(arr1, size1);
	std::cout << "Конечный массив:\n";
	print_arr(arr1, size1);
	std::cout << "\n\n\n";

	return 0;
}
