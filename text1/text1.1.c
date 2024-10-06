#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

//判断素数（即质数）
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (0 == n % j)
//		{
//			return 0;//如果是合数则返回0以结束函数而不是跳出当前循环
//		}
//	}
//	return 1;//在循环结束之后，即只有当遍历完所有可能的因子后，如果没有找到因子时才返回1。
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//		if (is_prime(i))
//		{
//			printf("It is a prime number");
//		}
//		else
//			printf("It is not a prime number");
//     return 0;
//}
/*为什么要使用根号（sqrt):如果输入的是一个合数，如 16 ，则有 16 = 2 * 8 或 16 = 4 * 4，又 8 = 2 * 4 = 2 * 2 * 2（根据算术基本原理，任何一个大于1的自然数，如果它不是质数，那么必定可分解为数个质数的乘积）
那么 16 / 8 就相当于 16 与 2 相除了 3 次。在寻找素数的时候，就没必要再拿 16 除以 8 了。
可以注意到，m = a * b 中必定有一个 质因子（比如上面的 2） 小于或等于 m 的平方根（ 9 的时候等于)，又根据算术基本原理，大于 m 的平方根的因子（比如上面的8）必定可以分解为 质因子 ，故寻找素数的时候拿 2 到 m 的平方根
的数相除就可以了*/