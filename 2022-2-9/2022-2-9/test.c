#include <stdio.h>
/********************************************************指针的进阶**************************************************/
/********************************************************指针的进阶**************************************************/
/********************************************************指针的进阶**************************************************/
//int main()
//{
////写法一：
//	char a = 'w';
//	char* p = &a;			//这里的指针变量p存放的是变量a的地址
//	*p = 'b';
//	printf("%c\n",a);
//	return 0;
////结果：b

//写法二：
//	char* a = "abcdef";		//"abcdef"常量字符串存放在只读数据区，指针变量a存放的是字符串常量首元素的地址
//	printf("%s\n",a);
//	return 0;
//}

//int main()
//{
//	char* ch = "abcdef";			//这里的"abcdef"是常量字符串，只能读不能改.规范写法是：const char* ch = "abcdef";
//	*ch = 'w';
//	printf("%s\n",ch);
//	return 0;
////结果：
////C:\Users\86158\Desktop\C语言\come\2022 - 2 - 9\Debug\2022 - 2 - 9.exe(进程 2480)已退出，代码为 - 1073741819。
////按任意键关闭此窗口. . .
//}


//int main()
//{
////练习：《剑指offer》
//	char str1[] = "hello bit";
//	char str2[] = "hello bit";						//这里的两个字符数组虽然字符串内容相同，但是地址不同
//	const char* str3 = "hello bit";
//	const char* str4 = "hello bit";					//这里的"hello bit"是常量字符串，常量字符串是不能被改的，所以没有必要存两份，所以str3和str4所指向的内存空间相同
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if(str3==str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
////结果：
////str1and str2 are not same
////str3and str4 are same
//}

//typedef int* pint;
//#define PINT int*
//int main()
//{
//	int a, b;				//表示int a   int b
//	int* pa, pb;			//表示int* pa int pb
//	pint pa, pb;			//表示int* pa int*pb
//	PINT pa, pb;			//表示int* pa int pb
//	return 0;
//}


//int main()
//{
///********************************************************指针数组*******************************************/
////指针数组：用来存放指针的数组
//	char* arr[] = {"abcdef","aanglei","zhangsan"};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n",arr[i]);
//	}
//	return 0;
////结果：
////abcdef
////wanglei
////zhangsan
//}


//int main()
//{
///********************************************************指针数组*******************************************/
////指针数组：用来存放指针的数组
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {2,3,4,5,6};
//	int arr3[] = {3,4,5,6,7};
//	int* arr[] = {arr1,arr2,arr3};
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
////结果：
////1 2 3 4 5
////2 3 4 5 6
////3 4 5 6 7
//}

//int main()
//{
///********************************************************指针数组*******************************************/
////指针数组：用来存放指针的数组
//	int a = 10;
//	int* p = &a;			//一级指针p存放a的地址
//	int** pp = &p;			//二级指针pp存放一级指针变量p的地址
//	int** arr[4];			//定义一个二级指针数组
//	return 0;
//}


//int main()
//{
///*************************************************************数组指针************************************************/
////数组指针：用来存放数组的指针
//	int arr[10] = { 0 };
//	printf("%p\n",arr);
//	printf("%p\n",&arr);			//arr表示整个数组的地址，不是首元素的地址
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr+1);
////004FFE88
////004FFE88
////004FFE8C
////004FFEB0
//	return 0;
//}


int main()
{
/*************************************************************数组指针的使用************************************************/
	char arr[5];		
	char(*pa)[5] = &arr;					//数组指针pa的类型是char(*)[5]

	int* parr[6];
	int* (*pp)[6] = &parr;					//数组指针pp的类型是int*[6]
	return 0;
}