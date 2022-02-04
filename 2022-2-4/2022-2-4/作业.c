#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 5
//int main()
//{
//	unsigned char a = 200;							//printf在传入参数的时候如果是整形会默认传入四字节，所以a+b的结果是用一个四字节的整数接收的，不会越界
//	unsigned char b = 100;							//而c已经在c = a + b这一步中丢弃了最高位的1，所以只能是300-256得到的44了
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d  %d" , a + b, c);
//	return 0;
////结果：300  44
//}

//int main()
//
//{
////练习：在屏幕上输出杨辉三角
//	int arr[N][N] = { 0 };
//	int hang, lie;
//	arr[0][0] = 1;
//	arr[1][0] = 1;
//	arr[1][1] = 1;
//	for (hang = 1; hang < N; hang++)
//	{
//		for (lie = 0; lie <= hang; lie++)
//
//		{
//			if (0 == lie || hang == lie)
//				arr[hang][lie] = 1;
//			else
//				arr[hang][lie] = arr[hang - 1][lie - 1] + arr[hang - 1][lie];
//		}
//	}
//	//打印杨辉三角
//	for (hang = 0; hang < N; hang++)
//	{
//		for (lie = 0; lie <= hang; lie++)
//		{
//			printf("%4d", arr[hang][lie]);
//		}
//		printf("\n");
//	}
//	return 0;
////结果：
////	1
////	1   1
////	1   2   1
////	1   3   3   1
////	1   4   6   4   1
//}



////日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
////以下为4个嫌疑犯的供词:A说：不是我。B说：是C。C说：是D。D说：C在胡说。已知3个人说了真话，1个人说的是假话。现在请根据这些信息，写一个程序来确定到底谁是凶手
//int main()
//
//{
//	char killer = 'A';
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("凶手是%c\n", killer);
//		}
//	}
//	system("pause");
//	return 0;
////结果：凶手是C
//}



////5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
////A选手说：B第二，我第三；
////B选手说：我第二，E第四；
////C选手说：我第一，D第二；
////D选手说：C最后，我第三；
////E选手说：我第四，A第一；
////比赛结束后，每位选手都说对了一半，请编程确定比赛的名次
//int main()
//{
//	int A, B, C, D, E;
//	for (A = 1; A <= 5; A++)
//	{
//		for (B = 1; B <= 5; B++)
//		{
//			for (C = 1; C <= 5; C++)
//			{
//				for (D = 1; D <= 5; D++)
//				{
//					for (E = 1; E <= 5; E++)
//					{
//						if ((B == 2) + (A == 3) == 1 &&
//							(B == 2) + (E == 4) == 1 &&
//							(C == 1) + (D == 2) == 1 &&
//							(C == 5) + (D == 3) == 1 &&
//							(E == 4) + (A == 1) == 1 &&
//							A * B * C * D * E == 120)
//						{
//							printf("A=%d B=%d C=%d D=%d E=%d\n", A, B, C, D, E);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
////结果：A=3 B=1 C=5 D=2 E=4
//}


//小乐乐上课需要走n阶台阶，因为他腿比较长，所以每次可以选择走一阶或者走两阶，那么他一共有多少种走法？
/**
 * 案例2 分治算法 走楼梯
 * 一个台阶总共有n级，如果一次可以走1级，也可以一次走2级，求总共有多少种走法。
 * 分析：
 * 如果只有1级台阶，则只有一种走法，如果有2级台阶，则有2种走法：一次走1级或一次走2级
 * 假设有三级台阶，则可以一次走1级或一次走2级，如果一次走1级则还剩2级台阶，产生2种走法（上面已经说了），
 * 一次走2级则还剩1级只有一种走法，总共的走法就是2+1=3.
 *             3
 *            /\
 *剩余级数   2  1
 * 走法     2 + 1 = 3
 * 由此可见，n>2时，走法数就是第一次走1级后剩余级数的走法数+第一次走2级后剩余级数的走法数，这正是递归
 *可以归纳出公式：
 * f(n) =f(n-1) + f(n-2)  n>2
 * 观察公式可发现，这其实是斐波那契数列！
 *
 * **/
//int is_test_recursion(int input)
//{
//	if (1 == input)
//		return 1;
//	else if (2 == input)
//		return 2;
//	else
//		return is_test_recursion(input - 1) + is_test_recursion(input - 2);
//}
//int main()
//{
//
//	int input = 0;
//	printf("请输入台阶数:\n");
//	scanf("%d", &input);
//	int ret = 0;
//	ret = is_test_recursion(input);
//	printf("有%d种\n", ret);
//	return 0;
////结果：请输入台阶数:
////		10
////		有89种
//}



//小乐乐喜欢数字，尤其喜欢0和1。
//他现在得到了一个数，想把每位的数变成0或1。如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。请你回答他最后得到的数是多少

int main()
{
    int i = 0;
    int count1 = 0;
    int count2 = 0;
    char arr[10000] = { 0 };
    int input = 0;
    scanf("%d", &input);
    while (input)
    {
        int ret = 0;
        ret = input % 10;
        if (1 == ret % 2)
        {
            arr[i] = '1';
            i++;
        }
        else
        {
            arr[i] = '0';
            i++;
            count1++;
        }
        input = input / 10;
        count2++;
    }
    if (count1 == count2)               //将22222这种情况单独拿出来
    {
        printf("0");
        return 0;
    }
    for (i = 0; i < count2; i++)
    {
        printf("%c", arr[count2 - 1 - i]);
    }
    return 0;
}




















