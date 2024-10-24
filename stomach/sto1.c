#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
/*斯拉维克正在为朋友的生日准备一个礼物。他有一个由n个数字组成的数组a，这个礼物将是所有这些数字的乘积。因为斯拉维克是一个想要做出最大乘积的好孩子，他想在他的一个数字上加1。斯拉维克能够做到的最大乘积是多少？
输入：每个测试用例的第一行包含一个整数t（1 <= t <= 10^4) - 测试用例的数量；每个测试用例的第一行包含一个整数n（1 <= n <= 9) 数字的数量；每个测试用例的第二行包含n个以空格分隔的的整数ai（0 <= ai <= 9) - 数组中的数字
输出：对于每个测试用例，输出一个整数 - 斯拉维克可以通过在一个数字上加1来获得的最大乘积*/
//int main() 
//{
//    int t; 
//    scanf("%d", &t);
//    while (t--) 
//    {
//        int n;
//        scanf("%d", &n);
//
//        int a[9];
//        for (int i = 0; i < n; i++) 
//        {
//            scanf("%d", &a[i]);
//        }
//
//        int max = 0;
//        for (int i = 0; i < n; i++) 
//        {
//            int j = 1;
//            for (int b = 0; b < n; b++) 
//            {
//                if (b == i) 
//                {
//                    j *= (a[b] + 1); 
//                }
//                else 
//                {
//                    j *= a[b];
//                }
//            }
//            if (j > max) 
//            {
//                max = j;
//            }
//        }
//        printf("%d\n", max);
//    }
//    return 0;
//}

/*给定N个整数A1, A2, A3...AN。同时，定义Bi = Ai * Ai+1（1 <= i <= N - 1)。约束条件：2 < N < 100,1 < Ai < 100。
输入：第一行输入N，第二行输入A1 A2 ... AN;输出：按顺序打印B1,B2,...,BN-1，并用空格分隔。*/
//int main()
//{
//	int N;
//	int A[100];
//	int B[100];
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &A[i]);
//	}
//	for (int i = 0; i < N - 1; i++)
//	{
//		B[i] = A[i] * A[i + 1];
//	}
//	for (int i = 0; i < N - 1; i++)
//	{
//		printf("%d ", B[i]);
//	}
//	return 0;
//}

/*Naohiro有N+1个连续整数，每个整数都不相同，但他丢失了其中一个。剩下的N个整数以任意顺序给出，为A1,…,AN。找出丢失的整数。给定的输入保证丢失的整数是唯一确定的。
约束条件：2 < N < 100,1 < Ai < 1000；
输入：第一行输入N，第二行输入A1 A2 ... AN;
输出：输出答案。*/
//void o_O(int A[],int N)//冒泡排序
//{
//	for (int i = 0; i < N - 1; i++)
//	{
//		for (int j = 0; j < N - 1 - i;j++)//j < N - 1 - i作用是让相邻两个数进行比较
//		{
//			int temp;
//			if (A[j] > A[j + 1])
//			{
//				temp = A[j];
//				A[j] = A[j + 1];
//				A[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int N;
//	int A[1000];
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &A[i]);
//	}
//	o_O(A, N);
//	for (int i = 0; i < N - 1; i++)
//	{
//		if (A[i + 1] - A[i] == 2)
//		{
//			printf("%d", A[i] + 1);
//		}
//	}
//	return 0;
//}

/*给定一个由小写英文字母组成的字符串 S。字符串 S 的长度在 3 和 100之间，包括两端。除了某一个字符，S 的所有字符都相同。找到 x ，使得 S 的第 x 个字符与其他所有字符都不同。int sz = sizeof(S); 这行代码会返回整个数组的大小（以字节为单位），而不是字符串的实际长度。应该使用 strlen(S) 来获取字符串的字符数。*/
//int main()
//{
//	char S[101];
//	int j = 0;
//	scanf("%s", S);
//	int sz = strlen(S);
//	for (int i = 0; i < sz; i++)
//	{
//		if ((S[i] != S[i + 1] && S[i] != S[i + 2]) && i + 2 < sz)
//		{
//			printf("%d", i + 1);
//			break;
//		}
//		if ((S[i + 1] != S[i] && S[i + 1] != S[i + 2]) && i + 2 < sz)
//		{
//			printf("%d", i + 2);
//			break;
//		}
//		if ((S[i] != S[i - 1] && S[i] != S[i - 2]) && i >= 2)
//		{
//			printf("%d", i + 1);
//			break;
//		}
//	}
//	return 0;
//}

/*现在有三个数A1,A2,A3，你可以操作K次，每次从这三个数中任意选择一个并给这个数加一，最终使得（A1-A2）的绝对值等于（A2-A3）的绝对值。找出K的最小值。约束条件：1<=A1,A2,A3<=10^15*/


/*需要一种大币A和一种小币B来购买粮食C，只有当大币的价值减小币的价值等于粮食价格时，才能购买粮食，现在你有面值范围从L到R的大币和小币若干个，你需要找出能买到L到R范围内的储备粮的组合个数。
将给出 T 个案例。解决每一个案例。约束条件：1 <= T <= 2 * 10^4,0 <= L,R <= 10^6，输入的都是整数。*/
//long long ToT(int L, int R)
//{
//    long long T_T = 0;
//    for (int j = 2 * L; j <= R; j++)
//    {
//        int min_B = L;
//        int max_B = (j - L < R) ? j - L : R;
//
//        if (max_B >= min_B)
//        {
//            T_T += (max_B - min_B + 1);
//        }
//    }
//    return T_T;
//}
//int main()
//{
//    int T, L, R;
//    scanf("%d", &T);
//    while (T--)
//    {
//        scanf("%d %d", &L, &R);
//        long long T_T = ToT(L, R);
//        printf("%lld\n", T_T);
//    }
//    return 0;
//}

/*三个兄弟约定见面。我们将兄弟编号如下：大哥是编号 1，中间的兄弟是编号 2，最小的兄弟是编号 3。
当会议时间到时，其中一个兄弟迟到了。现在给出定按时到达的两个兄弟的编号，您需要确定迟到的兄弟的编号。*/
//int main()
//{
//	int N, N1, N2;
//	scanf("%d %d", &N1, &N2);
//	N = 6 - N1 - N2;
//	printf("%d", N);
//	return 0;
//}

//
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (0 == n % j)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//验证哥德巴赫猜想并输出n = j + h的组合中j最小的情况
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	for (int n = 4; n <= N; n++)
//	{
//		if (n % 2 == 0)
//		{
//	        for (int j = 2; j <= n / 2; j++)
//	        {
//				if (is_prime(j))
//				{
//					for (int h = n - j; h >= n / 2; h--)//h = n - j是为了过滤掉 j + h > n 的情况
//					{
//						if (is_prime(h) &&  j + h == n)
//						{
//							printf("%d=%d+%d\n", n, j, h);
//							goto out;
//						}
//						else if (j + h < n)
//						{
//							break;
//						}
//					}
//				}
//	        }
//		}
//		out:
//		continue;
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	double a = 1, b = 1, c = 0;
//	if (n == 0)
//	{
//		printf("0.00");
//		return 0;
//	}
//	if (n == 1 || n == 2)
//	{
//		printf("1.00");
//		return 0;
//	}
//	else if (n > 2)
//	{
//		for (int i = 3; i <= n; i++)
//		{
//			c = a + b;
//			b = a;
//			a = c;
//		}
//		printf("%.2lf", c);
//	}
//	return 0;
//}

