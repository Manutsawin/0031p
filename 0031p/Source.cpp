#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void setup();
int number[3];
int* max;
int main()
{


	int answer = 0;
	setup();
	while (number[0] > 1 || number[1] > 1 || number[2] > 1)
	{

		if (number[0] >= number[1] && number[0] >= number[2])
		{
			max = &number[0];
		}
		else if (number[1] >= number[0] && number[1] >= number[2])
		{
			max = &number[1];
		}
		else if (number[2] >= number[0] && number[2] >= number[1])
		{
			max = &number[2];
		}
		if (*max % 2 == 0)
		{
			*max = *max / 2;
		}
		else
		{
			*max = (*max - 1) / 2;
		}

		answer++;
	}
	printf("%d", answer);


	return 0;
}
void setup()
{
	int loop;
	for (loop = 0; loop < 3; loop++)
	{
		scanf("%d", &number[loop]);
	}
	for (int loop1 = 0; loop1 < 3; loop1++)
	{
		for (int loop2 = 0; loop2 < 3; loop2++)
		{
			if (number[loop1] >= number[loop2])
			{
				max = &number[1];
			}
		}
	}
}