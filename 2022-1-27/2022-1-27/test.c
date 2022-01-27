#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
//int test(char arr[], int count,int i)
//{
//	char* p = arr;								//定义指针变量来访问字符数组中的内容
//	for (i = 0; i < count; i++)
//	{
//		printf("%c", *(p + count - 1 - i));		//将字符串内容逆转
//	}
//	return 0;
//}
//int main()
//{
//	//写一个函数，可以逆序一个字符串的内容
//	char arr[] = "I am a student";				//定义字符数组存放需要操作的字符
//	int count = strlen(arr);					//计算字符串长度，便于后面for循环
//	int i = 0;
//	test(arr, count, i);						//test函数，传送三个参数
//	return 0;
//}


//int main()
//{
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字,例如：2 + 22 + 222 + 2222 + 22222
//	int n = 2;
//	int i = 0;
//	int ret = 0;
//	int sum = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ret = ret*10 + n;
//		sum = sum + ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”
//思路：
//1.先判断所求的数字有几位数
//2.求该数各位数上每个数相应平方之和
//3.判断是否为水仙花数
//int per(int n)
//{
//	int count = 1;				//计数器(这里默认数字是大于10的)
//	if(n<10)
//		return 1;
//	while (n / 10)				//如果是两位和两位以上的数，n/10就会大于1.否者就会等于0
//	{
//		n = n / 10;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int i = 0;
//	int temp = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int n = 0;								//定义一个数来计算所求数是几位数
//		int sum = 0;							//定义一个数来计算各位数相应平方之和
//		int temp = i;							//定义一个临时变量来接收数字中的每一位数
//		n = per(i);								//1.先判断所求的数字有几位数
//		while (temp)
//		{
//			sum = sum + pow((temp % 10), n);	//2.求该数各位数上每个数相应平方之和
//			temp = temp / 10;
//		}
//		if (sum == i)							//3.判断是否为水仙花数
//			printf("%d\n", sum);
//	}
//	return 0;
//}
