#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//int main()
//{
////描述:KiKi想获得某年某月有多少天，请帮他编程实现。输入年份和月份，计算这一年这个月有多少天
////输入描述：
////多组输入，一行有两个整数，分别表示年份和月份，用空格分隔。
////输出描述：
////针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天。
////示例1
////输入：
////2008 2
////输出：
////29
//	//1、3、5、7、8、10、12——31天
//	//4、6、9、11——30天
//	//2月——平年28天、闰年29天
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
////描述
////从键盘输入a, b, c的值，编程计算并输出一元二次方程ax2 + bx + c = 0的根，当a = 0时，输出“Not quadratic equation”，当a ≠ 0时，根据△ = b2 - 4 * a * c的三种情况计算并输出方程的根。
////输入描述：
////多组输入，一行，包含三个浮点数a, b, c，以一个空格分隔，表示一元二次方程ax2 + bx + c = 0的系数。
////输出描述：
////针对每组输入，输出一行，输出一元二次方程ax2 + bx + c = 0的根的情况。
////如果a = 0，输出“Not quadratic equation”；
////如果a ≠  0，分三种情况：
////△ = 0，则两个实根相等，输出形式为：x1 = x2 = ...。
////△ > 0，则两个实根不等，输出形式为：x1 = ...; x2 = ...，其中x1 <= x2。
////△ < 0，则有两个虚根，则输出：x1 = 实部 - 虚部i; x2 = 实部 + 虚部i，即x1的虚部系数小于等于x2的虚部系数，实部为0时不可省略。实部 = -b / (2 * a), 虚部 = sqrt(-△) / (2 * a)
////所有实数部分要求精确到小数点后2位，数字、符号之间没有空格。
////示例1
////输入：
////2.0 7.0 1.0
////输出：
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

