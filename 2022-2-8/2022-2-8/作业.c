#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//int main()
//{
////����:KiKi����ĳ��ĳ���ж����죬��������ʵ�֡�������ݺ��·ݣ�������һ��������ж�����
////����������
////�������룬һ���������������ֱ��ʾ��ݺ��·ݣ��ÿո�ָ���
////���������
////���ÿ�����룬���Ϊһ�У�һ����������ʾ��һ��������ж����졣
////ʾ��1
////���룺
////2008 2
////�����
////29
//	//1��3��5��7��8��10��12����31��
//	//4��6��9��11����30��
//	//2�¡���ƽ��28�졢����29��
//	int year = 0;
//	int month = 0;
//	while (scanf("%d %d", &year, &month) != EOF)
//	{
//		if ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0))
//		{
//			switch (month)
//			{
//			case 1:printf("31\n"); break;
//			case 3:printf("31\n"); break;
//			case 5:printf("31\n"); break;
//			case 7:printf("31\n"); break;
//			case 8:printf("31\n"); break;
//			case 10:printf("31\n"); break;
//			case 12:printf("31\n"); break;
//			case 4:printf("30\n"); break;
//			case 6:printf("30\n"); break;
//			case 9:printf("30\n"); break;
//			case 11:printf("30\n"); break;
//			case 2:printf("29\n"); break;
//			}
//		}
//		else
//		{
//			switch (month)
//			{
//			case 1:printf("31\n"); break;
//			case 3:printf("31\n"); break;
//			case 5:printf("31\n"); break;
//			case 7:printf("31\n"); break;
//			case 8:printf("31\n"); break;
//			case 10:printf("31\n"); break;
//			case 12:printf("31\n"); break;
//			case 4:printf("30\n"); break;
//			case 6:printf("30\n"); break;
//			case 9:printf("30\n"); break;
//			case 11:printf("30\n"); break;
//			case 2:printf("28\n"); break;
//			}
//		}
//	}


//	int y = 0;
//	int m = 0;
//	int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
//	while (scanf("%d %d", &y, &m) != EOF)
//	{
//		int day = days[m-1];
//		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		{
//			if (m == 2)
//				day++;
//		}
//		printf("%d\n",day);
//	}
//	return 0;
//}

//int main()
//{
////����
////�Ӽ�������a, b, c��ֵ����̼��㲢���һԪ���η���ax2 + bx + c = 0�ĸ�����a = 0ʱ�������Not quadratic equation������a �� 0ʱ�����ݡ� = b2 - 4 * a * c������������㲢������̵ĸ���
////����������
////�������룬һ�У���������������a, b, c����һ���ո�ָ�����ʾһԪ���η���ax2 + bx + c = 0��ϵ����
////���������
////���ÿ�����룬���һ�У����һԪ���η���ax2 + bx + c = 0�ĸ��������
////���a = 0�������Not quadratic equation����
////���a ��  0�������������
////�� = 0��������ʵ����ȣ������ʽΪ��x1 = x2 = ...��
////�� > 0��������ʵ�����ȣ������ʽΪ��x1 = ...; x2 = ...������x1 <= x2��
////�� < 0����������������������x1 = ʵ�� - �鲿i; x2 = ʵ�� + �鲿i����x1���鲿ϵ��С�ڵ���x2���鲿ϵ����ʵ��Ϊ0ʱ����ʡ�ԡ�ʵ�� = -b / (2 * a), �鲿 = sqrt(-��) / (2 * a)
////����ʵ������Ҫ��ȷ��С�����2λ�����֡�����֮��û�пո�
////ʾ��1
////���룺
////2.0 7.0 1.0
////�����
////x1 = -3.35; x2 = -0.15
//	double a, b, c;
//	while (scanf("%lf %lf %lf", &a, &b, &c)!=EOF)
//	{
//		if (a == 0)
//		{
//			printf("Not quadratic equation\n");
//		}
//		else
//		{
//			double z = b*b-4*a*c;
//			if (z == 0)
//			{
//				double x = (-b) / (2 * a);
//				if (x == 0)
//				{
//					x = 0;
//				}
//				printf("x1=x2=%.2lf\n", x);
//				printf("x1=x2=%.2lf\n",x);
//			}
//			else if (z > 0)
//			{
//				double x1 = (-b - sqrt(z))/(2*a);
//				double x2 = (-b + sqrt(z)) /(2*a);
//				printf("x1=%.2lf;x2=%.2lf\n",x1,x2);
//			}
//			else
//			{
//				double shibu = (-b) / (2 * a);
//				double xubu = sqrt(-z) / (2 * a);
//				printf("x1=%.2lf-%.2lfi;",shibu,xubu);
//				printf("x2=%.2lf+%.2lfi\n", shibu,xubu);
//			}
//		}
//	}
//	return 0;
//}

