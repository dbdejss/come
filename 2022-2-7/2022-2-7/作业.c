#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//int main()
//{
////小乐乐喜欢数字，尤其喜欢0和1，他现在得到一个数，想把每位的数变成0或1
////如果某一位是奇数，就把他变成1，如果是偶数，那么就把他变成0.请你回答他最后得到的数是多少
////示列：
////输入222222
////输出0
////示列：
////输入123
////输出101
//
////思路：输入——计算——输出
//	int num = 0;
//	scanf("%d",&num);
//	int temp = 0;
//	int sum = 0;
//	int i = 0;
//	while (num)
//	{
//		temp = num % 10;
//		if (temp % 2 == 1)
//			temp=1;
//		else
//			temp=0;
//		sum += temp*pow(10,i++);
//		num /= 10;
//	}
//	printf("%d\n",sum);
//	return 0;
//}
 
 
 
//int arr[10001] = { 0 };			//全局变量防止栈溢出，节省内存空间
//int main()
//{
////老师给了小乐乐一个正整数序列，要求小乐乐把这个序列去重后按从小到大排序
////但是老师给出的序列太长了，小乐乐没办法耐心的去重排序，请你帮助他。
////输入描述：
////第一行包含一个正整数n，表示老师给出的序列有n个数，接下来有n行，每行一个正整数k，为序列中的每一个元素的值.(1<= n<= 10^5,1<= k <=n)
////输出描述：
////输出一行，为去重排序后的序列，每个数后面有一个空格
////示列：
////输入：4
////		2
////		2
////		1
////		1
////输出：1  2
//
//	int n = 0;
//	int k = 0;
//	int i = 0;
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	{
//		scanf("%d",&k);
//		arr[k] = k;				//将数字放在对应的下标数组中
//	}
//	for (i = 0; i <=n; i++)
//	{
//		if (arr[i] != 0)
//			printf("%d  ",arr[i]);
//	}
//	return 0;
//}


//int main()
//{
////描述
////小乐乐学校教学楼的电梯前排了很多人，他的前面有n个人在等电梯
////电梯每次可以乘坐12人，每次上下需要的时间为4分钟（上需要2分钟，下需要2分钟）
////请帮助小乐乐计算还需要多少分钟才能乘电梯到达楼上。（假设最初电梯在1层）
////输入描述：
////输入包含一个整数n(0 ≤ n ≤ 10^9)
////输出描述：
////输出一个整数，即小乐乐到达楼上需要的时间
//	int n = 0;
//	scanf("%d",&n);
//	int minute = (n / 12) * 4 + 2;
//	printf("%d\n",minute);
//	return 0;
//}

//int main()
//{
////描述：KiKi有一个矩阵，他想知道转置后的矩阵（将矩阵的行列互换得到的新矩阵称为转置矩阵），请编程帮他解答。
////输入描述：
////第一行包含两个整数n和m，表示一个矩阵包含n行m列，用空格分隔。(1≤n≤10, 1≤m≤10)
////从2到n + 1行，每行输入m个整数（范围 - 231~231 - 1），用空格分隔，共输入n * m个数，表示第一个矩阵中的元素	
////输出描述：
////输出m行n列，为矩阵转置后的结果。每个数后面有一个空格。
////示例1
////输入：
////2 3
////1 2 3
////4 5 6
////输出：
////1 4
////2 5
////3 6
//	int i = 0;
//	int j = 0;
//	int arr[10][10] = { 0 };
//	int n = 0;
//	int m = 0;
//	int num = 0;
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &num);
//			arr[i][j] = num;
//		}
//	}
//	for (j = 0; j < m; j++)
//	{
//		for (i = 0; i < n; i++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
////描述
////有一个整数序列（可能有重复的整数），现删除指定的某一个整数，输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变。
////数据范围：序列长度和序列中的值都满足0≤n≤50
////输入描述：	
////第一行输入一个整数(0≤N≤50)。	
////第二行输入N个整数，输入用空格分隔的N个整数。	
////第三行输入想要进行删除的一个整数
////输出描述：	
////输出为一行，删除指定数字之后的序列
////示例1
////输入：
////6
////1 2 3 4 5 9
////4
////输出：
////1 2 3 5 9
//	int i = 0;
//	int k = 0;
//	int delete = 0;
//	int arr[50] = { 0 };
//	int input = 0;
//	scanf("%d",&input);
//	for (i = 0; i < input; i++)
//	{
//		scanf("%d",&k);
//		arr[i] = k;
//	}
//	scanf("%d",&delete);
//	for (i = 0; i < input; i++)
//	{
//		if (arr[i] != delete)
//			printf("%d ",arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int arr[50] = {0};
//	scanf("%d",&n);
//	int i = 0;
//	//输入数据
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	//输入要删除的数据
//	int del = 0;
//	scanf("%d",&del);
//	int  j = 0;		//用来记录下一个存放数组的位置
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d  ",arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//描述
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的“空心”三角形图案。
//输入描述：
//多组输入，一个整数（3~20），表示输出的行数，也表示组成三角形边的“ * ”的数量。
//输出描述：
//针对每行输入，输出用“ * ”组成的“空心”三角形，每个“ * ”后面有一个空格。
//示例1
//输入：
//4
//复制
//输出：
//*
//**
//* *
//****
//	int input = 0;
//	while (scanf("%d", &input) != EOF)		//多次输入
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < input; i++)
//		{
//			for (j = 0; j <= i; j++)
//			{
//				if ((0 == j) || (i == input - 1) || (i == j))
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	//计算2的n次方
//	//描述
//	//不使用累计乘法的基础上，通过移位运算（ << ）实现2的n次方的计算
//	//数据范围：0≤n≤31
//	//输入描述：
//	//一行输入整数n（0 <= n < 31）
//	//输出描述：
//	//输出对应的2的n次方的结果
//	int input = 0;
//	scanf("%d", &input);
//	printf("%d\n",1<<input);
//	return 0;
//结果：
//10
//1024
//}


int main()
{
//描述
//公务员面试现场打分。有7位考官，从键盘输入若干组成绩，每组7个分数（百分制），去掉一个最高分和一个最低分，输出每组的平均成绩。
//（注：本题有多组输入）
//输入描述：
//每一行，输入7个整数（0~100），代表7个成绩，用空格分隔。
//输出描述：
//每一行，输出去掉最高分和最低分的平均成绩，小数点后保留2位，每行输出后换行。
//示例1
//输入：
//99 45 78 67 72 88 60
//输出：
//73.00
	int i = 0;
	int arr[7] = { 0 };
	while (scanf("%d %d %d %d %d %d %d", arr, arr + 1, arr + 2, arr + 3, arr + 4, arr + 5, arr + 6) != EOF)
	{
		int sum = 0;
		int min = 100;
		int max = 0;
		for (i = 0; i < 7; i++)
		{
			if (arr[i] < min)
				min = arr[i];
			if (arr[i] > max)
				max = arr[i];
			sum += arr[i];
		}
		printf("%.2lf\n",(sum-max-min)/5.0);
	}
	return 0;
}

//int main()
//{
////描述
////KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的带空格直角三角形图案。
////输入描述：
////多组输入，一个整数（2~20），表示直角三角形直角边的长度，即“ * ”的数量，也表示输出行数。
////输出描述：
////针对每行输入，输出用“ * ”组成的对应长度的直角三角形，每个“ * ”后面有一个空格。
////示例1
////输入：
//// 5
////输出：
////         *
////       * *
////     * * *
////   * * * *
//// * * * * *
//	int input = 0;
//	while (scanf("%d", &input) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 1; i <=input; i++)
//		{
//			for (j = input; j >0; j--)
//			{
//				if (i <j)
//					printf("  ");
//					
//				else
//					printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}