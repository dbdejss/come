#include <stdio.h>
#include <assert.h>
//int main()
//{
////打印菱形
//	int row = 7;
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= row; i++)
//	{
//		for (j = 1; j <=row - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i <= row-1; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <=2 * (row - i - 1); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//char* my_strlen(const char* str)		//这里的*和[]不能一起使用
//{
//	assert(str != NULL);		//断言
//	int count = 0;
//	while (*str++ !='\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
////模拟实现库函数strlen
//	int ret = 0;
//	char arr[] = "belive youself";
//	ret = my_strlen(arr);
//	printf("%d\n",ret);
//	return 0;
//}

//char* translate(char str[])
//{
//	int i = 0;
//	char arr2[] = "HELLO";
//	char* p = arr2;
//	for (i = 0; i < 5; i++)
//	{
//		*(str + i) = *(p + i);
//	}
//	return str;
//}
//int main()
//{
//	//通过一个例子简单理解一下指针
//	int i = 0;
//	char arr1[] = "hello";
//	char* ret = translate(arr1);
//	for (i = 0; i < 5; i++)
//	{
//		printf("%c", *(ret + i));
//	}
//	return 0;
//}
void test(int arr[], int sz,int i)
{

	for (i = 0; i < sz; i++)
	{
		if (arr[i] % 2 == 1)
			printf("%d  ", arr[i]);
	}
	for (i = 0; i < sz; i++)
	{
		if (arr[i] % 2 != 1)
			printf("%d  ", arr[i]);
	}
}
int main()
{
	//输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分。
	int arr[] = { 1,12,321,41,15,16,7,8,9,10 };
	int i = 0;
	//判断那些是奇数，那些是偶数
	//将奇数和偶数打印出来
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = 0;
	test(arr, sz, i);
	return 0;
}


/**********************************************************************数据在内存中的存储*************************************************************************/
/**********************************************************************数据在内存中的存储*************************************************************************/
/**********************************************************************数据在内存中的存储*************************************************************************/

int main()
{
	unsigned int num = 10;
	num = -10;				//-10的二进制源码为：10000000 00000000 00000000 00001010
	printf("%u\n",num);		//-10的二进制反码为：11111111 11111111 11111111 11110101
	return 0;               //-10的二进制补码为：11111111 11111111 11111111 11110110，将这个数以无符号整型打印，打印出来就是4294967286
//结果：
//4294967286
}

//int main()
//{
//	int a = 10;				//a变量在内存中的地址为：00000000 00000000 00000000 00001010	00 00 00 0a
//	int b = -10;			//b变量在内存中的地址为：11111111 11111111 11111111 11110110	ff ff ff f6
//	return 0;
////数据在内存中的存放分大端字节存储和小端字节存储
////大端字节存储是指：数据的低位保存在高地址中，数据的高位保存在低地址中
////小端字节存储是指：数据的低位保存在低地址中，数据的高位保存在高地址中
//}

//int main()
//{
////练习：写一个小程序判断当前机器的字节序
//	int a = 1;
//	char* ret = (char*)&a;		/*为了获得a在内存中的第一个字节，这里需要用一个指针变量ret来获取a的地址。
//								在获取之前要强制类型转换，注意这里的类型是指针类型。*/
//	if (1 == *ret)				//ret得到a的第一个地址后，解引用。看里面的值是否为1
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}


//int chick(int b)
//{
//	char* p = (char*)&b;
//	if (1 == *p)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
////练习：写一个函数判断当前机器的字节序
//	int a = 1;
//	int ret = chick(a);
//	if (1 == ret)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}


//int chick(int b)
//{
//	char* p = (char*)&b;
//	return *p;					//*p里面不是放的1就是放的0，所以这里可以这样简写
//}
//int main()
//{
//	//练习：写一个函数判断当前机器的字节序
//	int a = 1;
//	int ret = chick(a);
//	if (1 == ret)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}

//int chick(int b)
//{
//	return (*(char*)&b);		/* 这里先将b强制转化成字符型指针，然后再对指针解引用.
//								解引用的结果不是1就是0.所以这里直接返回解引用以后的值就可以了 */
//}
//int main()
//{
////练习：写一个函数判断当前机器的字节序
//	int a = 1;
//	int ret = chick(a);
//	if (1 == ret)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}

