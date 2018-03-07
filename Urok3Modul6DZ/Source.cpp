#include<iostream>
#include<stdio.h>
#include<time.h>
#include<locale.h>
#include<stdarg.h>
#include"Header.h"
#include<math.h>

using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n, exit;
	do
	{
		printf("Enter number exemple: ");
		scanf("%d", &n);
		
		switch (n)
		{
		case 10:
		{
			//10.Дан массив целых чисел A.Найти суммы положительных и отрицательных элементов массива, используя функцию определения суммы
			int A[10];
			ZappMass(A, 10);
			PrintMass(A, 10);
			summMass(A, 10);
		}
		break;
		case 2:
		{
			/*2.Напишите несколько функций с одним именем int f(…) и с разными наборами параметров. Продемонстрируйте работу перегруженных функций*/
			int a, b, am, bm;
			printf("введите сторону прямоугольника в сантиметрах: ");
			scanf("%d", &a);
			printf("введите сторону прямоугольника в сантиметрах: ");
			scanf("%d", &b);
			printf("введите сторону прямоугольника в метрах: ");
			scanf("%d", &am);
			printf("введите сторону прямоугольника в метрах: ");
			scanf("%d", &bm);
			printf("S1 = %d\n", ploshad(&a, &b));
			printf("S2 = %d\n", ploshad(&a, &b, &am, &bm));
		}
		break;
		case 3:
		{
			/*3.Операторы int u=f(3, 4);
			double v=f(20.5, 10.5);
			myofs<<”u=”<<u<<” v=”<<v<<endl;
			дают в результате u=7 v=10 (т.е. соответственно сумму и произведение своих параметров). Напишите функции f(…,…).*/
			int a, b;
			double c, d;
			printf("введите число a : ");
			scanf("%d", &a);
			printf("введите число b : ");
			scanf("%d", &b);
			printf("введите число c : ");
			scanf("%d", &c); // не принимает дробное число выдает ошибку
			printf("введите число d : ");
			scanf("%d", &d); // не принимает дробное число выдает ошибку
			printf("u = %d\n  v = %f\n", u(&a, &b), v(&c, &d));//функция double v выдает мусор
		}
		break;
		case 4:
		case 5:
		{
			/*Напишите функцию f(double& a, double& b, double c, double q),
			которая возвращает катеты прямоугольного треугольника, гипотенуза которого равна с, а острый угол q (градусов). 
			//Катеты a=12Cos(60) и в 12*Sin(60)*/
			double c, q;
			printf("введите гипотенузу: ");
			scanf("%d", &c);
			printf("введите градус острого угла");
			scanf("%d", &q);
			f(&c, &q);
		}
		break;
		case 6:
		{
			/*6.Даны первый член и разность арифметической прогрессии. Написать рекурсивную функцию для нахождения:
			a.n-го члена прогрессии;
			b.суммы n первых членов прогрессии.*/
			int a, q, qa;
			printf("введите превый член прогрессии: ");
			scanf("%d", &a);
			printf("введите расзность арифмитической прогресии: ");
			scanf("%d", &q);
			printf("введите n-ый челен прогрессии: ");
			scanf("%d", &qa);
			rec(&a, &q, &qa);//не получается настроить рекурсивную функцию
		}
		break;
		default:printf("Dosn't Number exemple! Please repeat enter");
			break;
		}
		printf("Do Your want continue? 1-Yes 2-No: ");
		scanf("%d", &exit);
		printf("\n");
	} while (exit == 1);
}