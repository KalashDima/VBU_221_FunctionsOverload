#pragma once
#include"constants.h"
#include"Sum.h"

double Avg(int arr[], const int n);
double Avg(float arr[], const int n);
double Avg(double arr[], const int n);

double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(float arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);