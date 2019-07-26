#pragma once

void selectsort(int **arr, int N)
{
	int i, j, temp, min;

	for (i = 0; i < N; i++)
	{
		min = 999;
		for (j = i; j < 10; j++) {
			if (min > arr[0][j])
			{
				min = arr[0][j];
				temp = arr[0][i];
				arr[0][i] = min;
				arr[0][j] = temp;
			}
		}
	}

}

