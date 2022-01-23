//#include <stdio.h>
//
//int main()
//{
////移位操作符
////右移操作符
//	//int a = 16;				//对应的二进制数为00000000000000000000000000010000
//	//int b = a >> 1;			//b对应的二进制数为00000000000000000000000000001000
//	//printf("%d\n",b);		
//	//return 0;
////规则：
////1.算术右移——右边丢弃，左边补原符号位
////2.逻辑右移——右边丢弃，左边补0
//
////整数的二进制表示有：源码、反码、补码
////存储到内存的是补码
////10000000000000000000000000000001	-1的源码
////11111111111111111111111111111110	-1的反码
////11111111111111111111111111111111	-1的补码
//
//	//int a = -1;				//a对应的二进制数为11111111111111111111111111111111
//	//int b = a >> 1;			//b对应的二进制数为11111111111111111111111111111111
//	//printf("%d\n",b);		
//	//return 0;
//
////左移操作符
//	int a = -5;					//原码10000000000000000000000000000101
//	int b = a << 1;				//反码11111111111111111111111111111010
//	printf("%d\n",b);			//补码11111111111111111111111111111011
//	return 0;					//左移以后的补码11111111111111111111111111101100
//
////规则
////左边去掉，右边补0
//}

#include <stdio.h>
int main()
{
//按位异或
//规则：相同为0，相异为1
	//int a = 5;			//00000000 00000000 00000000 00000101
	//int b = 3;			//00000000 00000000 00000000 00000011
	//int c = a ^ b;
	//printf("%d\n",c);
	//return 0;

//练习：不能创建临时变量（第三个变量），实现两个数的交换
	//int a = 3;
	//int b = 5;
	//a = a ^ b;
	//b = a ^ b;
	//a = a ^ b;
	//printf("a = %d   b = %d\n",a,b);

//求一个整数存储在内存中的二进制中1的个数
	int a,i;
	int count = 0;
	scanf("%d",&a);
	for(i=0;i<32;i++)
	{
		if(1==((a>>i)&1))
		count++;
	}
	printf("%d\n",count);
	return 0;
}