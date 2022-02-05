#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//int is_test(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ",*(p+i));
//	}
//	return 0;
//}
//int main()
//{
////写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//	int arr[] = {1,2,3,4,15,6,7,38,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	is_test(arr,sz);
//	return 0;
//}


//char is_nixu(char* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c",*(p+sz-1-i));
//	}
//	return 0;
//}
//int main()
//{
////输入一个字符串，中间可以有空格，逆序打印字符串内容
//	char arr[1000] = { 0 };
//	scanf("%[^\n]",&arr);
//	int len = strlen(arr);
//	is_nixu(arr,len);
//	return 0;
//}


//char is_nixu(char arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c",arr[sz-1-i]);
//	}
//	return 0;
//}
//int main()
//{
////输入一个字符串，中间可以有空格，逆序打印字符串内容
//	char arr[1000] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	is_nixu(arr, len);
//	return 0;
//}

//int main()
//{
////计算求和:求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，例如：2 + 22 + 222 + 2222 + 22222
//	int a = 0;				//要求多少个
//	int n = 0;				//要求的基数
//	int i = 0;
//	int ret = 0;
//	int sum = 0;
//	scanf("%d  %d",&a,&n);
//	for (i = 0; i < a; i++)
//	{
//		ret = ret * 10 + n;
//		sum += ret;
//	}
//	printf("%d",sum);
//	return 0;
////结果：5 2
////		24690
//}

//int main()
//{
////求出0～100000之间的所有“水仙花数”并输出。
////“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”
//	//确定位数
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int n = 1;
//		int ret = 0;
//		int sum = 0;
//		int temp = i;
//		while (temp / 10)
//		{
//			temp /= 10;
//			n++;
//		}
//	//求水仙花数
//		temp = i;
//		while (temp)
//		{
//			ret = (int)pow(temp % 10,n);
//			temp /= 10;
//			sum += ret;
//		}
//		if (sum == i)
//			printf("%d ",i);
//	}
//	return 0;
////结果：0 1 2 3 4 5 6 7 8 9 153 370 371 407 1634 8208 9474 54748 92727 93084
//}