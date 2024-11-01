#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
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

//正整数n是两个质数的乘积，求n的最大质因子。
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
//
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int m = 0;
//	for (int i = 2; i <= n / 2; i++)
//	{
//		if (n % i == 0)
//		{
//			if (is_prime(i))
//			{
//				m = i;
//				break;
//			}
//		}
//	}
//	printf("%d", n / m);//不难发现，找最小因子要循环的次数比找最大因子要少得多。而n = min * max, 所以n/min = max。
//	return 0;
//}
//但是，已经明确给出的n是两个质数的乘积，这意味着n的因数都是质因数，所以if(is_prime(i))这一条完全是多余的。注意审题啊。

//给出n个不大于10^5的整数，要求全部储存在数组中，去除掉不是质数的数字，依次输出剩余的质数。数据保证，1 <= n <= 100，1 <= a[i] <= 10^5。
//int is_prime(int n)
//{
//	if (n < 2)
//	{
//		return 0;//0和1不是质数。题目明确n>=2时不需要该语句，可省略以提高效率。
//	}
//
//	for (int j = 2; j <= sqrt(n); j++)
//	{
//		if (0 == n % j)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int a[101];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	int b[101];
//	int j = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (is_prime(a[i]))
//		{
//			b[j++] = a[i];
//		}
//	}
//	for (int i = 0; i < j; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	return 0;
//}

//最厉害的学生。洛谷题源：https://www.luogu.com.cn/problem/P5740
//#include <stdio.h>
//#include <stdlib.h>
//struct stu
//{
//	char name[20];
//	int a, b, c;
//	int sum;
//};
//
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	struct stu *stu = (struct stu*)malloc(N * sizeof(struct stu));
//	if (stu == NULL)
//	{
//		printf("Memory Error!\n");
//		return 0;
//	}
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%s %d %d %d", stu[i].name, &stu[i].a, &stu[i].b, &stu[i].c);
//		stu[i].sum = stu[i].a + stu[i].b + stu[i].c;
//	}
//	int max_sum = 0;
//	int max_index = 0;
//	for (int i = 0; i < N; i++)
//	{
//		if (stu[i].sum > max_sum)
//		{
//			max_sum = stu[i].sum;
//			max_index = i;//只输出
//		}
//	}
//	printf("%s %d %d %d", stu[max_index].name,stu[max_index].a,stu[max_index].b,stu[max_index].c);
//	free(stu);
//	return 0;
//}

//求所有子集之和。洛谷题源：https://www.luogu.com.cn/problem/P2415
//#include <stdio.h>
//long long main()
//{
//	int s[30] = { 0 };
//	int i = 0;
//	char c;
//	do
//	{
//		scanf("%d", &s[i]);
//		i++;
//		c = getchar();
//	}while (c != '\n');//当只输入一行且每个元素用空格分隔时候可使用该方法读入数组
//	int sz = i;
//	long long sum = 0;
//	long long mult = 1ll << (sz - 1);//规律：每个元素在所有子集中出现的总次数为2^(n-1)。这里是求2^n-1。1ll是因为被赋值的变量是long long 类型的。
//	for (int j = 0; j < sz; j++)
//	{
//		sum += s[j] * mult;
//	}
//	printf("%lld", sum);
//	return 0;
//}

//列出[a,b](5<=a<=b<=10^8)中所有的回文质数（从左往右读和从右往左读都是一样的数）。洛谷题源：https://www.luogu.com.cn/problem/P1217
//规律：1.偶数位的回文数不是质数。2.正偶数都不是质数。
//#include <stdio.h>
//#include <math.h>
//
//int is_prime(int n) {
//    if (n < 2) return 0;
//    if (n == 2) return 1;
//    if (n % 2 == 0) return 0;
//    for (int j = 3; j * j <= n; j += 2) {
//        if (n % j == 0) {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int is_palindrome(int num) {
//    int reversed = 0, original = num;
//    while (num > 0) {
//        reversed = reversed * 10 + num % 10;//逆序数
//        num /= 10;//去掉最后一位
//    }
//    return original == reversed;//通过比较original和reversed来判断这个数字是否是回文数。如果相等，则返回1，否则返回0。
//}
//
//int main() {
//    int a, b;
//    scanf("%d %d", &a, &b);
//    if (a % 2 == 0)a++;//保证循环从奇数开始
//    if (b >= 9999999) b = 9999999;//再大的数都不可能是回文数
//    for (int i = a; i <= b; i++) {
//        if (is_palindrome(i)) {
//            int len = log10(i) + 1;
//            if (len % 2 == 1 && is_prime(i)) {
//                printf("%d\n", i);
//            }
//        }
//        if (i == 11)//上面那条筛掉了11，这里补上
//        {
//            printf("11\n");
//        }
//    }
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//
//struct stu {
//    char name[9];
//    int chinese, math, english;
//    int sum;
//};
//
//int cmp(const void* a, const void* b) {
//    return strcmp(((struct stu*)a)->name, ((struct stu*)b)->name);
//}
//
//int main() {
//    int N;
//    scanf("%d", &N);
//    struct stu* students = (struct stu*)malloc(N * sizeof(struct stu));
//    if (students == NULL) {
//        printf("Memory Error!\n");
//        return 0;
//    }
//
//    for (int i = 0; i < N; i++) {
//        scanf("%s %d %d %d", students[i].name, &students[i].chinese, &students[i].math, &students[i].english);
//        students[i].sum = students[i].chinese + students[i].math + students[i].english;
//    }
//
//    qsort(students, N, sizeof(struct stu), cmp);
//
//    for (int i = 0; i < N - 1; i++) {
//        for (int j = i + 1; j < N; j++) {
//            if (abs(students[i].chinese - students[j].chinese) <= 5 &&
//                abs(students[i].math - students[j].math) <= 5 &&
//                abs(students[i].english - students[j].english) <= 5 &&
//                abs(students[i].sum - students[j].sum) <= 10) {
//                printf("%s %s\n", students[i].name, students[j].name);
//            }
//        }
//    }
//
//    free(students);
//    return 0;
//}
//另解:直接生成回文数
#/*include <stdio.h>
#include <math.h>
int is_prime(int n)
{
    for (int j = 3; j <= sqrt(n); j++)
    {
        if (0 == n % j)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a % 2 == 0)a++;
    for (int i = a; i <= 11; i+=2)
    {
        if (i == 5)
        {
            printf("%d\n", i);
            continue;
        }
        else if (i == 7)
        {
            printf("%d\n", i);
            continue;
        }
        else if (i == 11)
        {
            printf("%d\n", i);
            continue;
        }
    }
    int d1, d2, d3, palindrome;
    if (b > 100)
    {
        for (d1 = 1; d1 <= 9; d1 += 2)
        {
            for (d2 = 0; d2 <= 9; d2++)
            {
                palindrome = 100 * d1 + 10 * d2 + d1;
                if (is_prime(palindrome) && palindrome <= b && palindrome >= a)
                {
                    printf("%d\n", palindrome);
                }
                else if (palindrome > b)
                {
                    break;
                }
            }
            if (palindrome > b)
            {
                break;
            }
        }
    }
    else if (b <= 100)
    {
        return 0;
    }

    if (b > 10000)
    {
        for (d1 = 1; d1 <= 9; d1 += 2)
        {
            for (d2 = 0; d2 <= 9; d2++)
            {
                for (d3 = 0; d3 <= 9; d3++)
                {
                    palindrome = 10000 * d1 + 1000 * d2 + 100 * d3 + 10 * d2 + d1;
                    if (is_prime(palindrome) && palindrome <= b && palindrome >= a)
                    {
                        printf("%d\n", palindrome);
                    }
                    else if (palindrome > b)
                    {
                        goto end;
                    }
                }
            }
        }
    }
    else if (b <= 10000)
    {
        return 0;
    }

    if (b > 1000000)
    {
        for (d1 = 1; d1 <= 9; d1 += 2)
        {
            for (d2 = 0; d2 <= 9; d2++)
            {
                for (d3 = 0; d3 <= 9; d3++)
                {
                    for (int d4 = 0; d4 <= 9; d4++)
                    {
                        palindrome = 1000000 * d1 + 100000 * d2 + 10000 * d3 + 1000 * d4 + 100 * d3 + 10 * d2 + d1;
                        if (is_prime(palindrome) && palindrome <= b && palindrome >= a)
                        {
                            printf("%d\n", palindrome);
                        }
                        else if (palindrome > b)
                        {
                            goto end;
                        }
                    }
                }
            }
        }
    }
    else if (b <= 1000000)
    {
        return 0;
    }
    end:
    return 0;
}*/

//快速幂：指数折半法。源地址：https://blog.csdn.net/m0_52072919/article/details/116400820
//long long int quik_power(int base, int power)
//{
//	long long int result = 1;
//	while (power > 0)           //指数大于0进行指数折半，底数变其平方的操作
//	{
//		if (power % 2 == 1)     //指数为奇数
//		{
//			power -= 1;         //指数减一
//			power /= 2;         //指数折半
//			result *= base;     //分离出当前项并累乘后保存
//			base *= base;       //底数变其平方
//		}
//		else                    //指数为偶数
//		{
//			power /= 2;         //指数折半
//			base *= base;       //底数变其平方
//		}
//	}
//	return result;              //返回最终结果
//}
//
//int main()
//{
//	int a = 4, n = 12;
//	long long int result = quik_power(a, n);
//	printf("%lld", result);
//	return 0;
//}
//优化：
/*1.不管指数是否为奇数偶数，指数折半和底数变其平方是都需要进行的必要操作我们可以直接写在判断语句外面。
2.如果指数是奇数的话有个减一操作，但在代码中我们可以省略这个，因为代码中指数是整数int类型，当power是奇数时小数点会被舍弃，这相当于power减一后再除二的操作。例如：power= 3的时候power / 2 = 相当于power-1后power=2后power / 2 = 1。
3.我们可以发现一个规律，奇数的二进制位末尾是1，偶数的二进制位是0。
4.位运算要比取余运算要快。指数折半操作也可以使用位运算的左移运算来完成。*/
//优化后的代码与“快速幂：二进制法”别无二致，只是理解的角度不同罢了。

//人见人爱A^B。题源：https://acm.hdu.edu.cn/showproblem.php?pid=2035
//#include<stdio.h>
//long long int quik_power(int base, int power, int p);
//int main(void)
//{
//	int n, m;
//	long long int ans;
//	while (scanf("%d %d", &n, &m) && (n || m))//当输入为0 0时结束循环。因为||的逻辑是或，即左右两边只要有一个为真，则表达式为真。
//	{
//		ans = quik_power(n, m, 1000);//模上1000，表示取出该数的最后三位。
//		printf("%lld\n", ans);
//	}
//	return 0;
//}
//
//long long int quik_power(int base, int power, int p)
//{
//	long long int result = 1;
//	while (power > 0)
//	{
//		if (power & 1)//检查是否为奇数
//			result = result * base % p;
//		base = base * base % p;
//		power >>= 1;
//	}
//	return result % p;
//}

/*给定每个起火部分的起点和终点，请你求出燃烧位置的长度之和。
输入格式
第一行一个整数，表示起火的信息条数 n。接下来 n 行，每行两个整数 a,b，表示一个着火位置的起点和终点（注意：左闭右开）。
输出格式:输出一行一个整数表示答案。
数据保证：1 <= n <= 2*10^4，-2^31 <= a<b <= 2^31,且答案小于2^31。*/
//#include<stdio.h>
//#include<stdlib.h>
//
//long long int cmp(const void* a, const void* b)
//{
//	return *(long long*)a - *(long long*)b;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	long long a[20001], b[20001], len = 0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%lld %lld", &a[i], &b[i]);
//	}
//	qsort(a, n, sizeof(long long), cmp);
//	qsort(b, n, sizeof(long long), cmp);
//	for (int i = 0; i < n; i++)
//	{
//		len += b[i] - a[i];
//		if (i + 1 < n)
//		{
//			if (b[i] > a[i + 1])
//			{
//				len -= b[i] - a[i + 1];
//			}
//		}
//	}
//	printf("%lld", len);
//	return 0;
//}

