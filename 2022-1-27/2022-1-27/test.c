#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
//int test(char arr[], int count,int i)
//{
//	char* p = arr;								//����ָ������������ַ������е�����
//	for (i = 0; i < count; i++)
//	{
//		printf("%c", *(p + count - 1 - i));		//���ַ���������ת
//	}
//	return 0;
//}
//int main()
//{
//	//дһ����������������һ���ַ���������
//	char arr[] = "I am a student";				//�����ַ���������Ҫ�������ַ�
//	int count = strlen(arr);					//�����ַ������ȣ����ں���forѭ��
//	int i = 0;
//	test(arr, count, i);						//test������������������
//	return 0;
//}


//int main()
//{
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������,���磺2 + 22 + 222 + 2222 + 22222
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

//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�����
//˼·��
//1.���ж�����������м�λ��
//2.�������λ����ÿ������Ӧƽ��֮��
//3.�ж��Ƿ�Ϊˮ�ɻ���
//int per(int n)
//{
//	int count = 1;				//������(����Ĭ�������Ǵ���10��)
//	if(n<10)
//		return 1;
//	while (n / 10)				//�������λ����λ���ϵ�����n/10�ͻ����1.���߾ͻ����0
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
//		int n = 0;								//����һ�����������������Ǽ�λ��
//		int sum = 0;							//����һ�����������λ����Ӧƽ��֮��
//		int temp = i;							//����һ����ʱ���������������е�ÿһλ��
//		n = per(i);								//1.���ж�����������м�λ��
//		while (temp)
//		{
//			sum = sum + pow((temp % 10), n);	//2.�������λ����ÿ������Ӧƽ��֮��
//			temp = temp / 10;
//		}
//		if (sum == i)							//3.�ж��Ƿ�Ϊˮ�ɻ���
//			printf("%d\n", sum);
//	}
//	return 0;
//}
