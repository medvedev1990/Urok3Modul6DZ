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
			//10.��� ������ ����� ����� A.����� ����� ������������� � ������������� ��������� �������, ��������� ������� ����������� �����
			int A[10];
			ZappMass(A, 10);
			PrintMass(A, 10);
			summMass(A, 10);
		}
		break;
		case 2:
		{
			/*2.�������� ��������� ������� � ����� ������ int f(�) � � ������� �������� ����������. ����������������� ������ ������������� �������*/
			int a, b, am, bm;
			printf("������� ������� �������������� � �����������: ");
			scanf("%d", &a);
			printf("������� ������� �������������� � �����������: ");
			scanf("%d", &b);
			printf("������� ������� �������������� � ������: ");
			scanf("%d", &am);
			printf("������� ������� �������������� � ������: ");
			scanf("%d", &bm);
			printf("S1 = %d\n", ploshad(&a, &b));
			printf("S2 = %d\n", ploshad(&a, &b, &am, &bm));
		}
		break;
		case 3:
		{
			/*3.��������� int u=f(3, 4);
			double v=f(20.5, 10.5);
			myofs<<�u=�<<u<<� v=�<<v<<endl;
			���� � ���������� u=7 v=10 (�.�. �������������� ����� � ������������ ����� ����������). �������� ������� f(�,�).*/
			int a, b;
			double c, d;
			printf("������� ����� a : ");
			scanf("%d", &a);
			printf("������� ����� b : ");
			scanf("%d", &b);
			printf("������� ����� c : ");
			scanf("%d", &c); // �� ��������� ������� ����� ������ ������
			printf("������� ����� d : ");
			scanf("%d", &d); // �� ��������� ������� ����� ������ ������
			printf("u = %d\n  v = %f\n", u(&a, &b), v(&c, &d));//������� double v ������ �����
		}
		break;
		case 4:
		case 5:
		{
			/*�������� ������� f(double& a, double& b, double c, double q),
			������� ���������� ������ �������������� ������������, ���������� �������� ����� �, � ������ ���� q (��������). 
			//������ a=12Cos(60) � � 12*Sin(60)*/
			double c, q;
			printf("������� ����������: ");
			scanf("%d", &c);
			printf("������� ������ ������� ����");
			scanf("%d", &q);
			f(&c, &q);
		}
		break;
		case 6:
		{
			/*6.���� ������ ���� � �������� �������������� ����������. �������� ����������� ������� ��� ����������:
			a.n-�� ����� ����������;
			b.����� n ������ ������ ����������.*/
			int a, q, qa;
			printf("������� ������ ���� ����������: ");
			scanf("%d", &a);
			printf("������� ��������� �������������� ���������: ");
			scanf("%d", &q);
			printf("������� n-�� ����� ����������: ");
			scanf("%d", &qa);
			rec(&a, &q, &qa);//�� ���������� ��������� ����������� �������
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