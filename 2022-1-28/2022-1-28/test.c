#define _CRT_SECURE_NO_WARNINGS			//放在文件最上面
#include <stdio.h>
#include <string.h>
#include <assert.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	printf("%p\n",&i);
//	printf("%p\n", &arr[9]);
//	//for (i = 0; i < 12; i++)
//	//{
//	//	arr[i] = 0;
//	//	printf("hehe\n");
//	//}
//	return 0;
//}

//int main()
//{
////字符拷贝函数
//	char arr1[20] = "XXXXXXXXXX";
//	char arr2[] = "hello,bit";
//	strcpy(arr1, arr2);
//	printf("%s\n",arr1);
//	return 0;
//}

//1
//void my_strcpy(char* dis, char* str)
//{
//	//assert(dis != NULL);			//断言
//	//assert(str != NULL);			//断言
//	assert(dis && str);
//	while (*str!='\0')
//	{
//		*dis = *str;
//		dis++;
//		str++;
//	}
//	*dis = *str;
//	return 0;
//}
//int main()
//{
////写一个函数，实现字符拷贝
//	char arr1[20] = { 0 };
//	char arr2[] = "hello,bit";
//	my_strcpy(NULL,arr2);
//	printf("%s\n",arr1);
//	return 0;
//}

//2
//char* my_strcpy(char* dis, char* str)
//{
//	char* ret = dis;
//	assert(dis && str);
//	while (* dis++ = * str++)			//'\0'的ASCLL码值为0
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	//写一个函数，实现字符拷贝
//	char arr1[20] = { 0 };
//	char arr2[] = "hello,bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//3
//char* my_strcpy(char* dis, const char* str)
//{
//	char* ret = dis;
//	assert(dis && str);
//	while (*dis++ = *str++)			//'\0'的ASCLL码值为0
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	//写一个函数，实现字符拷贝
//	char arr1[20] = { 0 };
//	char arr2[] = "hello,bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

void test1()
{
	int n = 10;
	int m = 20;
	int* p = &n;
	*p = 20;	//ok?
	p = &m;		//ok?
}
void test2()
{
	int n = 10;
	int m = 20;
	const int* p = &n;
	*p = 20;	//ok?
	p = &m;		//ok?
}
void test3()
{
	int n = 10;
	int m = 20;
	int* const p = &n;
	*p = 20;	//ok?
	p = &m;		//ok?
}
int main()
{
//对const（常变量）的认识
//const放在*的左边：const修饰指针指向的内容，表示指针指向的内容不能通过指针来改变，但是指针变量本身是可以改变的
//const放在*的右边：const修饰指针变量本身，指针变量的内容不能被修改，但是指针指向的内容是可以通过指针来改变的
	
	//测试无const的函数
	test1();
	//测试const放在*的左边
	test2();
	//测试const放在*的右边
	test3();
	return 0;
}