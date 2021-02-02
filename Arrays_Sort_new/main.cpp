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


void main()
{
	const int m = 8, n = 5;
	setlocale(LC_ALL, "Russian");
	int arr[ROWS][COLS];
	double d_arr[ROWS][COLS];
	cout << delimiter;
	cout << "Двухмерный несортированный массив:(типа int) ";
	cout << delimiter;
	FillRand(arr, m, n);
	Print(arr, m, n);
	cout << delimiter;
	cout << "Двухмерный отсортированный массив:(типа int) ";
	cout << delimiter;
	Sort_1(arr, m, n);
	Print(arr, m, n);
	cout << delimiter;
	cout << "Двухмерный несортированный массив:(типа double) ";
	cout << delimiter;
	FillRand(d_arr, m, n);
	Print(d_arr, m, n);
	cout << delimiter;
	cout << "Двухмерный отсортированный массив:(типа double) ";
	cout << delimiter;
	Sort_2(d_arr, m, n);
	Print(d_arr, m, n);
	cout << delimiter;
}



void FillRand(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void FillRand(double arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
			arr[i][j] = arr[i][j] / 10;
		}
	}
}


template <typename T>
void Print(T arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}


template <typename T>
void Sort_1(T arr[ROWS][COLS], const int m, const int n)
{
	for (int k = 0; k < m; k++)
	{
		for (int l = 0; l < n; l++)
		{
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (i + 1 == m and j + 1 == n)
					{
						continue;
					}
					else
					{
						if (j + 1 == n and arr[i][j] > arr[i + 1][0])
						{
							int buffer = arr[i][j];
							arr[i][j] = arr[i + 1][0];
							arr[i + 1][0] = buffer;
						}
						else
						{
							if (arr[i][j] > arr[i][j + 1])
							{
								int buffer = arr[i][j];
								arr[i][j] = arr[i][j + 1];
								arr[i][j + 1] = buffer;
							}
						}
					}
				}

			}
		}
	}
}

template <typename T>
void Sort_2(T arr[ROWS][COLS], const int m, const int n)
{

	for (int k = 0; k < m; k++)
	{
		for (int l = 0; l < n; l++)
		{
			for (int i = 0; i < m; i++)
			{
				for (int j = 0; j < n; j++)
				{
					if (i + 1 == m and j + 1 == n)
					{
						continue;
					}
					else
					{
						if (j + 1 == n and arr[i][j] > arr[i + 1][0])
						{
							double buffer = arr[i][j];
							arr[i][j] = arr[i + 1][0];
							arr[i + 1][0] = buffer;
						}
						else
						{
							if (arr[i][j] > arr[i][j + 1])
							{
								double buffer = arr[i][j];
								arr[i][j] = arr[i][j + 1];
								arr[i][j + 1] = buffer;
							}
						}
					}
				}

			}
		}
	}
}

/*Написать шаблонную функцию Sort для сортировки двумерных массивов.*/