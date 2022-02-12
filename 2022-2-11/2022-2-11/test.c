#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/********************************************************指针的进阶**************************************************/
/********************************************************指针的进阶**************************************************/
/********************************************************指针的进阶**************************************************/
//int main()
//{
////对void函数类型的理解
//	int a = 10;
//	//int* p = &a;
//	//char* p = &a;			//会报错：从“int *”到“char *”的类型不兼容
//	void* p = &a;
//	return 0;
////void*是一种无类型的指针，无具体类型的指针
////void*的指针变量可以存放任意类型的地址
////void*的指针不能直接进行解引用操作
////void*的指针不能直接进行+-整数
//}


//int print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;			//升序
//	//return *(int*)e2 - *(int*)e1;			//降序
//}
//int main()
//{
////qsort—库函数—快速排序的方法实现
//	int arr[] = {1,4,2,6,5,3,7,9,0,8};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	print_arr(arr,sz);
//	return 0;
//}



struct Stu
{
	char name[20];
	int age;
	float score;
};
//cmp_stu_by_socre(const void* e1,const void* e2)
//{
//	if (((struct Stu*)e1)->score > ((struct Stu*)e2)->score)
//		return 1;
//	else if (((struct Stu*)e1)->score < ((struct Stu*)e2)->score)
//		return -1;
//	else
//		return 0;
//}
// 
//cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}

cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name);

}
//void printf__stu_by_socre(struct Stu arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s %d %.2f\n", arr[i].name, arr[i].age, arr[i].score);
//	}
//}

//void printf__stu_by_age(struct Stu arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s %d %.2f\n", arr[i].name, arr[i].age, arr[i].score);
//	}
//}

void printf__stu_by_name(struct Stu arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s %d %.2f\n", arr[i].name, arr[i].age, arr[i].score);
	}
}
void test2()
{
	struct Stu arr[] = { {"zhangsan",20,99.8f},{"lisi",22,99.0f},{"wangwu",18,88.5f}};
	//通过比较学生成绩来排序
	int sz = sizeof(arr) / sizeof(arr[0]);
	//1.qsort(arr,sz,sizeof(arr[0]),cmp_stu_by_socre);
	//2.qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
	//1.printf__stu_by_socre(arr,sz);
	//2.printf__stu_by_age(arr, sz);
	printf__stu_by_name(arr, sz);
}
int main()
{
//qsort—库函数—快速排序的方法实现
	test2();
	return 0;
}




//int int_cmp(const void* p1, const void* p2)
//{
//	return (*(int*)p1 - *(int*)p2);
//}
//void _swap(void* p1, void* p2, int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		char tmp = *((char*)p1 + i);
//		*((char*)p1 + i) = *((char*)p2 + i);
//		*((char*)p2 + i) = tmp;
//	}
//}
//void bubble(void* base, int count, int size, int(*cmp)(void*,void*))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < count - 1; i++)
//	{
//		for (j = 0; j < count - i - 1; j++)
//		{
//			
//			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
//			{
//				_swap((char*)base + j * size, (char*)base + (j + 1) * size,size);
//			}
//		}
//	}
//}
//int main()
//{
////qsort—库函数—快速排序的方法实现
//	int arr[] = {1,3,5,7,9,2,4,6,8,0};
//	int i = 0;
//	bubble(arr,sizeof(arr)/sizeof(arr[0]),sizeof(int),int_cmp);
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	return 0;
//}
