#include <stdio.h>
/********************************************************指针的进阶**************************************************/
/********************************************************指针的进阶**************************************************/
/********************************************************指针的进阶**************************************************/
//void is_test(int(*p)[5], int r, int c)
//{
//	int i = 0; 
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i) + j));		//这里的*(p+i)相当于拿到了二维数组的第i行，也相当于第i行的数组名
//		}										//数组名表示首元素的地址，其实也是第i行第一个元素的地址
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	/*************************************************************数组指针的使用************************************************/
//	int arr[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
//	is_test(arr,3,5);
//	return 0;
//}


//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
///**********************************************************函数指针***************************************/
//	//通过一个列子说明函数指针
//	printf("%p\n",test);			//这里的函数既然有地址，那么就可以用一个指针来接收它的地址
//	printf("%p\n",&test);
//	return 0;
////结果：
////00871253
////00871253
//}

//void test()
//{
//	printf("hehe\n");
//}
//void(*pfun1)();
//void*pfun2();
////pfun1可以存放。pfun1先和*结合，说明pfun1是指针，指针指向的是一个函数，指向的函数无参数，返回值类型为void



//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//int (*pa)(int, int) = &Add;		//pa是函数指针,它的类型是int (*pa)(int,int)，这里也可以不加Add前面的&
//	//int sum = (*pa)(2, 3);			//通过指针pa来操作函数，这里的*没有用，可以不加，但是加上以后必须带括号
//	//printf("%d\n",sum);
//	int (*pa)(int, int) = Add;
//	int sum = pa(2,3);
//	printf("%d\n",sum);
//	return 0;
//}



int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x -y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
/********************************************************函数指针数组*****************************************/
//函数指针数组：存放函数地址的数组叫做函数指针数组
	int (*pfArr[4])(int, int) = {Add,Sub,Mul,Div};
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		int ret = pfArr[i](8,4);
		printf("%d\n",ret);
	}
	return 0;
}

void mean()
{
	printf("***********************************\n");
	printf("*****    1:add        2:sub   *****\n");
	printf("*****    3:mul        4:div   *****\n");
	printf("***********************************\n");
}
int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
int div(int a, int b)
{
	return a / b;
}

int main()
{
//函数指针数组的应用
	int x, y;
	int input = 1;
	int ret = 0;
	int (*p[5])(int x, int y) = {0,add,sub,mul,div};
	while (input)
	{
		mean();
		printf("请选择:");
		scanf("%d",&input);
		if ((input <= 4 && input >= 1))
		{
			printf("请输入操作数:");
			scanf("%d %d", &x, &y);
			ret = (*p[input])(x, y);
			printf("ret = %d\n", ret);
		}
		else if (0 == input)
		{
			printf("退出程序\n");
			break;
		}
		else
			printf("输入有误\n");
	} 
	return 0;
}
