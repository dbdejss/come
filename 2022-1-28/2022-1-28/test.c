#define _CRT_SECURE_NO_WARNINGS			//�����ļ�������
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
////�ַ���������
//	char arr1[20] = "XXXXXXXXXX";
//	char arr2[] = "hello,bit";
//	strcpy(arr1, arr2);
//	printf("%s\n",arr1);
//	return 0;
//}

//1
//void my_strcpy(char* dis, char* str)
//{
//	//assert(dis != NULL);			//����
//	//assert(str != NULL);			//����
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
////дһ��������ʵ���ַ�����
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
//	while (* dis++ = * str++)			//'\0'��ASCLL��ֵΪ0
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	//дһ��������ʵ���ַ�����
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
//	while (*dis++ = *str++)			//'\0'��ASCLL��ֵΪ0
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	//дһ��������ʵ���ַ�����
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
//��const��������������ʶ
//const����*����ߣ�const����ָ��ָ������ݣ���ʾָ��ָ������ݲ���ͨ��ָ�����ı䣬����ָ����������ǿ��Ըı��
//const����*���ұߣ�const����ָ���������ָ����������ݲ��ܱ��޸ģ�����ָ��ָ��������ǿ���ͨ��ָ�����ı��
	
	//������const�ĺ���
	test1();
	//����const����*�����
	test2();
	//����const����*���ұ�
	test3();
	return 0;
}