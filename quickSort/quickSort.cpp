// ShellSort.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h>
#include<conio.h>
void quickSort(int a[], int s,int t)
{
	int i, j, tmp;
	i = s, j = t;
	if (s < t)
	{
		tmp = a[i];
		while (i < j)
		{
			while (a[j] > tmp&&i < j) j--;
			a[i] = a[j];
			while (a[i] < tmp&&i < j) i++;
			a[j] = a[i];
		}
		a[i] = tmp;
		quickSort(a, s, i - 1);
		quickSort(a, i + 1, t);
	}
}
void quickSort_middle(int a[], int s, int t)
{
	int i, j, tmp;
	i = s, j = t;
	if (s < t)
	{
		tmp = a[(i+j)/2];
		while (i < j)
		{
			while (a[j] > tmp&&i < j) j--;
			while (a[i] < tmp&&i < j) i++;
			tmp = a[i]; a[i] = a[j]; a[j] = tmp;
		}
		a[i] = tmp;
		quickSort_middle(a, s, i - 1);
		quickSort_middle(a, i + 1, t);
	}
}
void output(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
}
int main()
{
	int a[8] = { 1,-1,2,-2,3,-3,4,-4 };
	quickSort_middle(a,0,7);
	output(a, 8);
	//system("PAUSE");
	return 0;
}

