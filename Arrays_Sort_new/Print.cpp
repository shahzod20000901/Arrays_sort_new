#include "Arrays_sort_new.h"


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