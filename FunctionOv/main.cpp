#pragma warning(disable:4326)
#include <iostream>
#include <stdlib.h>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void Print(T arr[], const int n);

template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T Sum(T arr[], const int n);

template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T Avg(T arr[], const int n);

template<typename T>
T Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T minValueIn(T arr[], const int n);

template<typename T>
T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T maxValueIn(T arr[], const int n);

template<typename T>
T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
void shiftLeft(T arr[], const int n, int number_of_shifts);

template<typename T>
void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

template<typename T>
void shiftRight(T arr[], const int n, int number_of_shifts);

template<typename T>
void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

template<typename T>
void Sort(T arr[], const int n);

template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	int number_of_shifts;
	int brr[ROWS][COLS];
	FillRand(brr, ROWS, COLS);
	Print(brr, ROWS, COLS);
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftLeft(brr, ROWS, COLS, number_of_shifts);
	Print(brr, ROWS, COLS);
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 150 + 50;
	}
}
void FillRand(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = char(rand() % 26 + 0x61);		
	}
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
void FillRand(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS) 
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{	
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = char(rand() % 26 + 0x61);
		}
	}
}

template<typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "---------------------------------------------------" << endl;
}

template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "---------------------------------------------------" << endl;
}

template<typename T>
T Sum(T arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

template<typename T>
T Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

template<typename T>
T Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

template<typename T>
T minValueIn(T arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

template<typename T>
T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	return min;
}

template<typename T>
T maxValueIn(T arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

template<typename T>
T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
}

template<typename T>
void shiftLeft(T arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++) 
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

template<typename T>
void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	shiftLeft(arr[0], ROWS * COLS, number_of_shifts);
}

template<typename T>
void shiftRight(T arr[], const int n, int number_of_shifts)
{
	shiftLeft(arr, n, n - number_of_shifts);
}

template<typename T>
void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	shiftRight(arr[0], ROWS * COLS, number_of_shifts);
}

template<typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] > arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS * COLS; i++)
	{
		for (int j = i + 1; j < ROWS * COLS; j++)
		{
			for (int k = 0; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
				}
			}
		}
	}
}