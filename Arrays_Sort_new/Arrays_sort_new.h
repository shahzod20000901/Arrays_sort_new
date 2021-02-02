#include <iostream>
using namespace std;
#define delimiter "\n---------------------------------------------\n";
const int ROWS = 8;
const int COLS = 5;

void FillRand(int arr[ROWS][COLS], const int m, const int n);
void FillRand(double arr[ROWS][COLS], const int m, const int n);

template <typename T>
void Print(T arr[ROWS][COLS], const int m, const int n);

template <typename T>
void Sort_1(T arr[ROWS][COLS], const int m, const int n);

template <typename T>
void Sort_2(T arr[ROWS][COLS], const int m, const int n);
