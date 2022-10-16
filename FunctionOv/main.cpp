#include"stdafx.h"
#include"constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Sum.h"
#include"Avg.h"
#include"minValueIn.h"
#include"maxValueIn.h"
#include"shiftLeft.h"
#include"shiftRight.h"
#include"Sort.h"

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