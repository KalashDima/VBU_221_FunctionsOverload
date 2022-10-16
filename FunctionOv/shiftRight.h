#pragma once
#include"constants.h"
#include"shiftLeft.h"

void shiftRight(int arr[], const int n, int number_of_shifts);
void shiftRight(float arr[], const int n, int number_of_shifts);
void shiftRight(double arr[], const int n, int number_of_shifts);
void shiftRight(char arr[], const int n, int number_of_shifts);

void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftRight(float arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);