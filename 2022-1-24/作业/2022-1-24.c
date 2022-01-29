#include <stdio.h>
//int main()
//{
////编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//	int m = 1999;				//00000000 00000000 00000000 00000011
//	int n = 2299;				//00000000 00000000 00000000 00000101
//	int i = 0;				//00000000 00000000 00000000 00000110
//	int count = 0;
//	for(i=0;i<32;i++)
//	{
//	if(((m^n)>>i)&1==1)
//		count++;
//	}
//	printf("%d\n",count);
//	return 0;
//}

//int main()
//{
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//这里假如num=125，则二进制序列为：00000000 00000000 00000000 01111101
//	int num = 0;						
//	int i = 0;
//	scanf("%d",&num);
//	printf("%d的奇数二进制位序列:",num);
//	for(i=0;i<32;i++)
//	{
//		if((i)%2==0)
//		{
//			if((num>>i)&1==1)
//				printf("%c ",'1');	
//			else
//				printf("%c ",'0');		
//		}
//	}
//	printf("\n");
//	printf("%d的偶数二进制位序列:",num);
//	for(i=0;i<32;i++)
//	{
//		if((i)%2!=0)
//		{
//		if((num>>i)&1==1)
//			printf("%c ",'1');	
//		else
//			printf("%c ",'0');		
//		}
//	}
//	printf("\n");
//	return 0;
//}

//int count(int num)
//{
//	int count = 0;
//	int i = 0;
//	for(i=0;i<32;i++)
//	{
//		if((num>>i)&1==1)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//写一个函数返回参数二进制中的1的个数
//	int num = 0;
//	int a = 0;
//	scanf("%d",&num);
//	a = count(num);
//	printf("%d\n",a);
//	return 0;
//}

//int main()
//{
////不允许创建临时变量，交换两个整数的内容
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d  b = %d\n",a,b);
//	return 0;
//}

//int main()
//{
//    int i = 1;
//    int ret = (++i)+(++i)+(++i);
//    printf("ret = %d\n", ret);
//	return 0;
//}

//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0; 
//结果
//>
//答案解析：
//C语言中，0为假，非0即为真。
//全局变量，没有给初始值时，编译其会默认将其初始化为0。
//i的初始值为0，i--结果-1，i为整形，sizeof(i)求i类型大小是4，按照此分析来看，结果应该<
//但是sizeof的返回值类型实际为无符号整形，因此编译器会自动将左侧i自动转换为无符号整形的数据，-1对应的无符号整形是一个非常大的数字，超过4或者8，故实际应>
//}

//int main()
//{
//描述
//KiKi想知道一个整数的奇偶性，请帮他判断。从键盘任意输入一个整数（范围-231~231-1），编程判断它的奇偶性。
//输入描述：
//多组输入，每行输入包括一个整数。
//输出描述：
//针对每行输入，输出该数是奇数（Odd）还是偶数（Even）
//输入：
//4
//7
//输出：
//Even
//Odd
//	int a;
//    while(scanf("%d",&a)!=EOF)
//    {
//        int b=a%2;
//        if(b==1)
//		{
//            printf("Odd");
//        }
//		else
//		{
//			printf("Even");
//		}
//        printf("\n");
//    }
//	return 0;
//}





