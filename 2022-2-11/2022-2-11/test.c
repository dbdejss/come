#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/********************************************************ָ��Ľ���**************************************************/
/********************************************************ָ��Ľ���**************************************************/
/********************************************************ָ��Ľ���**************************************************/
//int main()
//{
////��void�������͵����
//	int a = 10;
//	//int* p = &a;
//	//char* p = &a;			//�ᱨ���ӡ�int *������char *�������Ͳ�����
//	void* p = &a;
//	return 0;
////void*��һ�������͵�ָ�룬�޾������͵�ָ��
////void*��ָ��������Դ���������͵ĵ�ַ
////void*��ָ�벻��ֱ�ӽ��н����ò���
////void*��ָ�벻��ֱ�ӽ���+-����
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
//	return *(int*)e1 - *(int*)e2;			//����
//	//return *(int*)e2 - *(int*)e1;			//����
//}
//int main()
//{
////qsort���⺯������������ķ���ʵ��
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
	//ͨ���Ƚ�ѧ���ɼ�������
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
//qsort���⺯������������ķ���ʵ��
	test2();
	return 0;
}
//