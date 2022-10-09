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
void Print(int arr[], const int n);
void Print(float arr[], const int n);
void Print(double arr[], const int n);
void Print(char arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(float arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS);
int Sum(int arr[], const int n);
float Sum(float arr[], const int n);
double Sum(double arr[], const int n);
char Sum(char arr[], const int n);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
char Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(int arr[], const int n);
double Avg(float arr[], const int n);
double Avg(double arr[], const int n);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(float arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);
int minValueIn(int arr[], const int n);
float minValueIn(float arr[], const int n);
double minValueIn(double arr[], const int n);
int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
float minValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
int maxValueIn(int arr[], const int n);
float maxValueIn(float arr[], const int n);
double maxValueIn(double arr[], const int n);
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
float maxValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftLeft(float arr[], const int n, int number_of_shifts);
void shiftLeft(double arr[], const int n, int number_of_shifts);
void shiftLeft(char arr[], const int n, int number_of_shifts);
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
//void shiftLeft(float arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
//void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
//void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftRight(int arr[], const int n, int number_of_shifts);
void shiftRight(float arr[], const int n, int number_of_shifts);
void shiftRight(double arr[], const int n, int number_of_shifts);
void shiftRight(char arr[], const int n, int number_of_shifts);
//void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
//void shiftRight(float arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
//void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
//void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void Sort(int arr[], const int n);
void Sort(float arr[], const int n);
void Sort(double arr[], const int n);
//void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
//void Sort(float arr[ROWS][COLS], const int ROWS, const int COLS);
//void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS);

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

	/*FillRand(arr, n); 
	Print(arr, n);
	cout << "Сумма: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);

	const int SIZE = 8;
	int brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);

	const int D_SIZE = 5;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);*/

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

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "---------------------------------------------------" << endl;
}
void Print(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "---------------------------------------------------" << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "---------------------------------------------------" << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "---------------------------------------------------" << endl;
}

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
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
void Print(float arr[ROWS][COLS], const int ROWS, const int COLS)
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
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
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
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS)
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

int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
float Sum(float arr[], const int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
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
float Sum(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(float arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
float minValueIn(float arr[], const int n)
{
	float min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}

int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
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
float minValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS)
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
double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS) 
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

int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
float maxValueIn(float arr[], const int n)
{
	float max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
double maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
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
float maxValueIn(float arr[ROWS][COLS], const int ROWS, const int COLS)
{
	float max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
}
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
}

void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++) //АААААА, сначала не понял, а потом как понял
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(float arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		float buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++) //повторяет сдвиг массива на 1 элемент
	{
		double buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftLeft(char arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++) //повторяет сдвиг массива на 1 элемент
	{
		char buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	shiftLeft(arr[0], ROWS * COLS, number_of_shifts);
	//for (int k = 0; k < number_of_shifts; k++)
	//{
	//	int temp = 0;
	//	for (int i = 0; i < ROWS; i++)
	//	{
	//	    int buffer = arr[i][0];
	//		for (int j = 0; j < COLS; j++)
	//		{
	//			arr[i][j] = arr[i][j + 1];
	//			/*if (i - 1 == temp && j == 0 && i - 1 >= 0)
	//			{
	//				arr[i - 1][COLS - 1] = arr[i][j];
	//				--i;
	//				++temp;
	//			}
	//			else 
	//			{
	//			}*/
	//		}
	//		arr[i][COLS - 1] = buffer;
	//	}
	//}
}

void shiftRight(int arr[], const int n, int number_of_shifts)
{
	shiftLeft(arr, n, n - number_of_shifts);
}
void shiftRight(float arr[], const int n, int number_of_shifts) 
{
	shiftLeft(arr, n, n - number_of_shifts);
}
void shiftRight(double arr[], const int n, int number_of_shifts)
{
	shiftLeft(arr, n, n - number_of_shifts);
}
void shiftRight(char arr[], const int n, int number_of_shifts)
{
	shiftLeft(arr, n, n - number_of_shifts);
}

void Sort(int arr[], const int n)
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
void Sort(float arr[], const int n)
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
void Sort(double arr[], const int n)
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
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS*COLS; i++)
	{
		for (int j = i+1; j < ROWS*COLS; j++)
		{
			/*for (int k = 0; k < ROWS; k++)
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

			}*/
			if (arr[0][j] < arr[0][i])
			{
				int buffer = arr[0][i];
				arr[0][i] = arr[0][j];
				arr[0][j] = buffer;
			}
		}
		
	}
}
//void shiftLeft(float arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
//{
//
//}
//void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
//{
//
//}
//void shiftRight(int arr[], const int n, int number_of_shifts)
//{
//	shiftLeft(arr, n, n - number_of_shifts);
//}
//void Sort(int arr[], const int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (arr[j] > arr[i])
//			{
//				int buffer = arr[i];
//				arr[i] = arr[j];
//				arr[j] = buffer;
//			}
//		}
//	}
//}


//void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS);
//void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS);
//void shiftRight(float arr[ROWS][COLS], const int ROWS, const int COLS);
//void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS);
//void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS);
//void Sort(float arr[ROWS][COLS], const int ROWS, const int COLS);
//void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS);