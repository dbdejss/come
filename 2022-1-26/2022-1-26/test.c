#include <stdio.h>
//int main()
//{
//	int a = 10;		//00000000 00000000 00000000 00001010
//	int *pa = &a;
//	printf("%d\n",sizeof(pa));
//	return 0;		
//}

//int main()
//{
//指针类型的意义：
//指针类型决定了在解引用时一次能访问几个字节
//	int a = 0x11223344;
//	//int *pa = &a;
//	//*pa = 0;
//	char *pc = &a;
//	*pc = 0;
//	return 0;
//}

//int main()
//{
//指针类型的意义：
//2.指针类型决定了指针向前或向后走一步的距离
	//int a = 10;
	//int *pa = &a;
	//char *pc = &a;
	//printf("%p\n",pa);
	//printf("%p\n",pa+1);
	//printf("%p\n",pc);
	//printf("%p\n",pc+1);
	//return 0;
//结果：
//00B3F834
//00B3F838
//00B3F834
//00B3F835
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	//倒着打印
//	int* q = &arr[9];
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *q);
//		q--;
//	}
//	return 0;
//}
//int* test()
//{
//	int a = 100;
//	return &a;
//}
//int main()
//{
////产生野指针的原因之一：指针引起的空间释放
//	int* p = test();
//	printf("hehe\n");
//	printf("%d\n",*p);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
	//倒着打印
	//int* q = arr + 9;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d  ", *q--);
	//}
	// 正着打印
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d  ",*(p + i));
	//}
	//return 0;
//}

//int test(char *s)
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
//int main()
//{
//写一个函数求字符串的长度
//	char arr[] = "abcd";
//	int len = test(arr);
//	printf("%d\n",len);
//	return 0;
//}

//int main()
//{
//	int arr[]{1,2,3,4,5,6,7,8,9,10};
//	int* p = arr;
//	int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%p == %p\n",p + i,&arr+i);
	//}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",p[i]);		//p[i]-->*(p+i)-->arr[i]
//	}
//	return 0;
//}

//int main()
//{
//二级指针
/*	int a = 10;
	int* p = &a;
	int** pa = &p;	*/	//pa就是一个二级指针，二级指针里面存放的是p的地址
	//	**pa = 20;
	//	printf("%d\n",a);
	//	return 0;
	//}

int main()
{
	//指针数组
		/*int arr1[10];*/	//整型数组——存放整形的数组
		/*char ch[5];*/		//字符数组——存放字符的数组
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr2[5] = { &a,&b,&c };		//指针数组——存放执政的数组
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d  ", *arr2[i]);
	}
	return 0;
}
//int test(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d  ", *(arr++));
//	}
//	return 0;
//}
//int main()
//{
//	//写一个函数打印arr数组的内容，不使用数组下标，使用指针。arr是一个整形一维数组
//	int arr[] = {1,4,2,10,6,7,8};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int p = test(arr,sz);
//	return 0;
//}
