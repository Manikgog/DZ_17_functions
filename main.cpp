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

	// Exercise 1.
	/*
		Create a mean function that returns
	the arithmetic mean of the two numbers passed to it.
	Don't forget to demonstrate its work by calling
	the function in the main block.
	*/
	std::cout << "Exercise 1.\nA program for finding the arithmetic mean of two numbers.\nEnter two numbers:";
	double num1, num2;
	std::cin >> num1 >> num2;
	std::cout << "Arithmetic mean of numbers " << num1 << " and " << num2 << " equally " << mean(num1, num2) << ".\n\n\n";

	// Exercise 2.
	/*
		Create the mean_arr function. It takes
	an array and its length, and then returns
	the arithmetic mean of all its elements.
	*/
	std::cout << "Exercise 2.\nA program for finding the arithmetic mean of array elements.\n";
	int low = 0, hi = 10;
	const int size = 10;
	int arr[size];
	fill_arr(arr, size, low, hi);
	std::cout << "The arithmetic mean of the array:\n";
	print_arr(arr, size);
	std::cout << "equally " << mean_arr(arr, size) << ".\n\n\n";

	// Exercise 3.
	/*
		Create a powers(N, M) function that
	takes two numeric values. The function should
	output to the console all powers of the number 
	N from degree 0 to degree M inclusive.
	*/
	int N, M;
	std::cout << "Exercise 3.\nA program for displaying the powers of a number.\nEnter number -> ";
	std::cin >> N;
	std::cout << "Enter the degree to raise the entered number -> ";
	std::cin >> M;
	powers(N, M);
	std::cout << "\n\n\n";

	// Exercise 4.
	/*
		Create a positive_art function that takes
	an array and its length, and then changes everything in it
	negative values are replaced by positive ones. The
	positive numbers themselves should not change in any way.
	*/
	std::cout << "Exercise 4.\nA program for replacing negative numbers in an array with positive ones.\n";
	low = -10; hi = 10;
	const int size1 = 10;
	int arr1[size1];
	fill_arr(arr1, size1, low, hi);
	std::cout << "Initial array:\n";
	print_arr(arr1, size1);
	positive_arr(arr1, size1);
	std::cout << "The final array:\n";
	print_arr(arr1, size1);
	std::cout << "\n\n\n";

	return 0;
}
