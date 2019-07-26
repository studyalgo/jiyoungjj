int findx(int **ball,int N, int *arr)
{
	int i,j=0,a=0;
	int x;

	while (a < N)
	{
		i = 0;
		j = 0;

		while (j < N)
		{
			x = ball[0][a] - ball[1][j];
			for (i = 0; i < N; i++)
			{
				if (ball[1][j] - ball[2][i] == x)
				{
					/*
					temp = ball[2][0];
					ball[2][0] = ball[2][i];
					ball[2][i] = temp;

					temp2 = ball[1][0];
					ball[1][0] = ball[1][j];
					ball[1][j] = temp2;
					*/
					
					arr[a] = -x;
					a++;
					j = N;

				}
				else if (i == N - 1)
				{
					j++;
					i = 0;
				}

			}
		}

	}
}
