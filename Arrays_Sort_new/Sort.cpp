#include "Arrays_sort_new.h"


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