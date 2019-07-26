#pragma once
#include"dotstruct.h"

void quickSort(dot* data, int start, int end)
{
	if (start >= end)	//원소가 1개인 경우
	{
		return;
	}

	int key = start;
	int i = start + 1;
	int j = end;
	dot temp;

	while (i <= j)
	{
		while (data[i].y <= data[key].y)
		{
			i++;
		}
		while (data[j].y >= data[key].y && j > start)
		{
			j--;
		}
		if (i > j)
		{
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else {
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}

	}

	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
}
