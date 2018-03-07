#include<iostream>
#include<stdio.h>
#include<time.h>
#include<locale.h>
#include<stdarg.h>
#include"Header.h"
int i;
int ploshad(int *a, int *b)
{
	
	return  *a * *b;
}
int ploshad(int *a, int *b, int *am, int*bm)
{
	return ((*am * 100) + *a) * ((*bm * 100) + *b);
}
int u(int *a, int *b)
{
	return *a + *b;
}
double v (double *a, double *b)
{
	return *a * *b;
}
double f(double *c, double *q)
{
	double a, b;
	a = *c*(cos(90-*q));
	b = *c*(sin(90-*q));
	printf("katet 1 = %f\t katet 2 = %f\n", a, b);
	return 0;
}
void rec(int *a, int *q, int *qa)
{
	int chek = 0;
	int summ = *a;
	*a = *a - *q;
	chek++;
	summ += *a;
	if (chek < *qa)
		rec(a,q,qa);
	printf("n член прогрессии = %d\n сумма n членнов прогресии = %d\n", *a, summ);
}
void ZappMass(int *mass, int val)
{
	for (i = 0;i < val;i++)
	{
		mass[i] = -20 + rand() % 50;
	}
}
void PrintMass(int *mass, int val)
{
	for (i = 0;i < val;i++)
	{
		printf("%d\t", mass[i]);
	}
	printf("\n");
}
void summMass(int *mass, int val)
{
	int summPolozh = 0;
	int summOtr = 0;
	for (i = 0;i < val;i++)
	{
		if (mass[i] < 0)
			summOtr += mass[i];
		else
			summPolozh += mass[i];
	}
	printf("сумма отрицательных элементов = %d\n сумма положительных элементов = %d\n", summOtr, summPolozh);
}