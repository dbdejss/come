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
//ָ�����͵����壺
//ָ�����;������ڽ�����ʱһ���ܷ��ʼ����ֽ�
//	int a = 0x11223344;
//	//int *pa = &a;
//	//*pa = 0;
//	char *pc = &a;
//	*pc = 0;
//	return 0;
//}

//int main()
//{
//ָ�����͵����壺
//2.ָ�����;�����ָ����ǰ�������һ���ľ���
	//int a = 10;
	//int *pa = &a;
	//char *pc = &a;
	//printf("%p\n",pa);
	//printf("%p\n",pa+1);
	//printf("%p\n",pc);
	//printf("%p\n",pc+1);
	//return 0;
//�����
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
//	//���Ŵ�ӡ
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
////����Ұָ���ԭ��֮һ��ָ������Ŀռ��ͷ�
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
	//���Ŵ�ӡ
	//int* q = arr + 9;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d  ", *q--);
	//}
	// ���Ŵ�ӡ
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
//дһ���������ַ����ĳ���
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
//����ָ��
/*	int a = 10;
	int* p = &a;
	int** pa = &p;	*/	//pa����һ������ָ�룬����ָ�������ŵ���p�ĵ�ַ
	//	**pa = 20;
	//	printf("%d\n",a);
	//	return 0;
	//}

int main()
{
	//ָ������
		/*int arr1[10];*/	//�������顪��������ε�����
		/*char ch[5];*/		//�ַ����顪������ַ�������
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr2[5] = { &a,&b,&c };		//ָ�����顪�����ִ��������
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
//	//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣arr��һ������һά����
//	int arr[] = {1,4,2,10,6,7,8};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int p = test(arr,sz);
//	return 0;
//}
