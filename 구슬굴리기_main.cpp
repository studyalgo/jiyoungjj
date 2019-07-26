#include<iostream>
#include "findx.h"
#include "selectsort.h"

using namespace std;

int main()
{
	int N,i,j;
	//int *speedarr;
	cin >> N;
	/*ball* p = new ball[N+1][N];*/
	int *speedarr;
	int** p = new int *[N + 1];
	for (i = 0; i < N; ++i)
	{
		p[i] = new int[N];
	}
	
	for (i = 0; i < N+1; i++)
	{
		for (j = 0; j < N; j++)
		{
			cin >> p[i][j];
		}
	}
	selectsort(p, N);
	
	findx(p, N,speedarr);

	cout << "출력합니다" << endl;

	for (i = 0; i < N; i++)
	{
		cout << p[0][i] << speedarr[i]<< endl;

	}


}
