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