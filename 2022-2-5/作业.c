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
////дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
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
////����һ���ַ������м�����пո������ӡ�ַ�������
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
////����һ���ַ������м�����пո������ӡ�ַ�������
//	char arr[1000] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	is_nixu(arr, len);
//	return 0;
//}

//int main()
//{
////�������:��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣����磺2 + 22 + 222 + 2222 + 22222
//	int a = 0;				//Ҫ����ٸ�
//	int n = 0;				//Ҫ��Ļ���
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
////�����5 2
////		24690
//}

//int main()
//{
////���0��100000֮������С�ˮ�ɻ������������
////��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�����
//	//ȷ��λ��
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
//	//��ˮ�ɻ���
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
////�����0 1 2 3 4 5 6 7 8 9 153 370 371 407 1634 8208 9474 54748 92727 93084
//}