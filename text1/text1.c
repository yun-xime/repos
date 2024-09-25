#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//请你打印一个九九乘法表
//int main()
//{
//    int i, j;
//    for (i = 1; i <= 9; i++)
//    {
//        for (j = 1; j <= i; j++)
//        {
//            printf("%dx%d=%2d\t", j, i, i * j);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//给你一个3字符的字符串S，它是由[1,9]内的整数a，b及字符x按照axb顺序排列得到的。请你计算a和b的乘积。
// int main()
//{
//    int a, b;
//    scanf("%d x %d", &a, &b);//确保输入符合“axb”的格式
//    printf("%d\n", a * b);
//    return 0;
//}

//地震的震级是地震释放的能量的对数比。已知每次震级增加1，能量就会增加大约32倍。在这里，我们假设每次震级增加1时，能量会准确地增加32倍。在这种情况下，震级为A的地震的能量是震级为B的地震的多少倍？
//约束条件：3<=B<=A<=9,且A和B均为整数,使用scanf函数和循环语句。
//int main()
//{
//	int A, B;
//	scanf("%d %d", &A, &B);
//	long long energy = 1;
//	int i;
//	for (i = B; i <A; i++)//循环变量 i 从 B 开始，每次循环 i 增加 1，直到 i 不再小于 A。这个循环的作用是计算从震级 B 到震级 A - 1 每增加一个震级，能量都要乘以 32。
//
//	{
//		energy *= 32;
//	}
//	printf("%lld\n",energy);
//	return 0;
//}

