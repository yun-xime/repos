#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
/*˹��ά������Ϊ���ѵ�����׼��һ���������һ����n��������ɵ�����a��������ｫ��������Щ���ֵĳ˻�����Ϊ˹��ά����һ����Ҫ�������˻��ĺú��ӣ�����������һ�������ϼ�1��˹��ά���ܹ����������˻��Ƕ��٣�
���룺ÿ�����������ĵ�һ�а���һ������t��1 <= t <= 10^4) - ����������������ÿ�����������ĵ�һ�а���һ������n��1 <= n <= 9) ���ֵ�������ÿ�����������ĵڶ��а���n���Կո�ָ��ĵ�����ai��0 <= ai <= 9) - �����е�����
���������ÿ���������������һ������ - ˹��ά�˿���ͨ����һ�������ϼ�1����õ����˻�*/
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

/*����N������A1, A2, A3...AN��ͬʱ������Bi = Ai * Ai+1��1 <= i <= N - 1)��Լ��������2 < N < 100,1 < Ai < 100��
���룺��һ������N���ڶ�������A1 A2 ... AN;�������˳���ӡB1,B2,...,BN-1�����ÿո�ָ���*/
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

/*Naohiro��N+1������������ÿ������������ͬ��������ʧ������һ����ʣ�µ�N������������˳�������ΪA1,��,AN���ҳ���ʧ�����������������뱣֤��ʧ��������Ψһȷ���ġ�
Լ��������2 < N < 100,1 < Ai < 1000��
���룺��һ������N���ڶ�������A1 A2 ... AN;
���������𰸡�*/
//void o_O(int A[],int N)//ð������
//{
//	for (int i = 0; i < N - 1; i++)
//	{
//		for (int j = 0; j < N - 1 - i;j++)//j < N - 1 - i���������������������бȽ�
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

/*����һ����СдӢ����ĸ��ɵ��ַ��� S���ַ��� S �ĳ����� 3 �� 100֮�䣬�������ˡ�����ĳһ���ַ���S �������ַ�����ͬ���ҵ� x ��ʹ�� S �ĵ� x ���ַ������������ַ�����ͬ��int sz = sizeof(S); ���д���᷵����������Ĵ�С�����ֽ�Ϊ��λ�����������ַ�����ʵ�ʳ��ȡ�Ӧ��ʹ�� strlen(S) ����ȡ�ַ������ַ�����*/
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

/*������������A1,A2,A3������Բ���K�Σ�ÿ�δ���������������ѡ��һ�������������һ������ʹ�ã�A1-A2���ľ���ֵ���ڣ�A2-A3���ľ���ֵ���ҳ�K����Сֵ��Լ��������1<=A1,A2,A3<=10^15*/


/*��Ҫһ�ִ��A��һ��С��B��������ʳC��ֻ�е���ҵļ�ֵ��С�ҵļ�ֵ������ʳ�۸�ʱ�����ܹ�����ʳ������������ֵ��Χ��L��R�Ĵ�Һ�С�����ɸ�������Ҫ�ҳ�����L��R��Χ�ڵĴ���������ϸ�����
������ T �����������ÿһ��������Լ��������1 <= T <= 2 * 10^4,0 <= L,R <= 10^6������Ķ���������*/
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

/*�����ֵ�Լ�����档���ǽ��ֵܱ�����£�����Ǳ�� 1���м���ֵ��Ǳ�� 2����С���ֵ��Ǳ�� 3��
������ʱ�䵽ʱ������һ���ֵܳٵ��ˡ����ڸ�������ʱ����������ֵܵı�ţ�����Ҫȷ���ٵ����ֵܵı�š�*/
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
//��֤��°ͺղ��벢���n = j + h�������j��С�����
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
//					for (int h = n - j; h >= n / 2; h--)//h = n - j��Ϊ�˹��˵� j + h > n �����
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

//������n�����������ĳ˻�����n����������ӡ�
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
//	printf("%d", n / m);//���ѷ��֣�����С����Ҫѭ���Ĵ��������������Ҫ�ٵöࡣ��n = min * max, ����n/min = max��
//	return 0;
//}
//���ǣ��Ѿ���ȷ������n�����������ĳ˻�������ζ��n����������������������if(is_prime(i))��һ����ȫ�Ƕ���ġ�ע�����Ⱑ��

//����n��������10^5��������Ҫ��ȫ�������������У�ȥ�����������������֣��������ʣ������������ݱ�֤��1 <= n <= 100��1 <= a[i] <= 10^5��
//int is_prime(int n)
//{
//	if (n < 2)
//	{
//		return 0;//0��1������������Ŀ��ȷn>=2ʱ����Ҫ����䣬��ʡ�������Ч�ʡ�
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

//��������ѧ���������Դ��https://www.luogu.com.cn/problem/P5740
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
//			max_index = i;//ֻ���
//		}
//	}
//	printf("%s %d %d %d", stu[max_index].name,stu[max_index].a,stu[max_index].b,stu[max_index].c);
//	free(stu);
//	return 0;
//}

//�������Ӽ�֮�͡������Դ��https://www.luogu.com.cn/problem/P2415
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
//	}while (c != '\n');//��ֻ����һ����ÿ��Ԫ���ÿո�ָ�ʱ���ʹ�ø÷�����������
//	int sz = i;
//	long long sum = 0;
//	long long mult = 1ll << (sz - 1);//���ɣ�ÿ��Ԫ���������Ӽ��г��ֵ��ܴ���Ϊ2^(n-1)����������2^n-1��1ll����Ϊ����ֵ�ı�����long long ���͵ġ�
//	for (int j = 0; j < sz; j++)
//	{
//		sum += s[j] * mult;
//	}
//	printf("%lld", sum);
//	return 0;
//}

//�г�[a,b](5<=a<=b<=10^8)�����еĻ����������������Ҷ��ʹ������������һ���������������Դ��https://www.luogu.com.cn/problem/P1217
//���ɣ�1.ż��λ�Ļ���������������2.��ż��������������
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
//        reversed = reversed * 10 + num % 10;//������
//        num /= 10;//ȥ�����һλ
//    }
//    return original == reversed;//ͨ���Ƚ�original��reversed���ж���������Ƿ��ǻ������������ȣ��򷵻�1�����򷵻�0��
//}
//
//int main() {
//    int a, b;
//    scanf("%d %d", &a, &b);
//    if (a % 2 == 0)a++;//��֤ѭ����������ʼ
//    if (b >= 9999999) b = 9999999;//�ٴ�������������ǻ�����
//    for (int i = a; i <= b; i++) {
//        if (is_palindrome(i)) {
//            int len = log10(i) + 1;
//            if (len % 2 == 1 && is_prime(i)) {
//                printf("%d\n", i);
//            }
//        }
//        if (i == 11)//��������ɸ����11�����ﲹ��
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
//���:ֱ�����ɻ�����
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

//�����ݣ�ָ���۰뷨��Դ��ַ��https://blog.csdn.net/m0_52072919/article/details/116400820
//long long int quik_power(int base, int power)
//{
//	long long int result = 1;
//	while (power > 0)           //ָ������0����ָ���۰룬��������ƽ���Ĳ���
//	{
//		if (power % 2 == 1)     //ָ��Ϊ����
//		{
//			power -= 1;         //ָ����һ
//			power /= 2;         //ָ���۰�
//			result *= base;     //�������ǰ��۳˺󱣴�
//			base *= base;       //��������ƽ��
//		}
//		else                    //ָ��Ϊż��
//		{
//			power /= 2;         //ָ���۰�
//			base *= base;       //��������ƽ��
//		}
//	}
//	return result;              //�������ս��
//}
//
//int main()
//{
//	int a = 4, n = 12;
//	long long int result = quik_power(a, n);
//	printf("%lld", result);
//	return 0;
//}
//�Ż���
/*1.����ָ���Ƿ�Ϊ����ż����ָ���۰�͵�������ƽ���Ƕ���Ҫ���еı�Ҫ�������ǿ���ֱ��д���ж�������档
2.���ָ���������Ļ��и���һ���������ڴ��������ǿ���ʡ���������Ϊ������ָ��������int���ͣ���power������ʱС����ᱻ���������൱��power��һ���ٳ����Ĳ��������磺power= 3��ʱ��power / 2 = �൱��power-1��power=2��power / 2 = 1��
3.���ǿ��Է���һ�����ɣ������Ķ�����λĩβ��1��ż���Ķ�����λ��0��
4.λ����Ҫ��ȡ������Ҫ�졣ָ���۰����Ҳ����ʹ��λ�����������������ɡ�*/
//�Ż���Ĵ����롰�����ݣ������Ʒ������޶��£�ֻ�����ĽǶȲ�ͬ���ˡ�

//�˼��˰�A^B����Դ��https://acm.hdu.edu.cn/showproblem.php?pid=2035
//#include<stdio.h>
//long long int quik_power(int base, int power, int p);
//int main(void)
//{
//	int n, m;
//	long long int ans;
//	while (scanf("%d %d", &n, &m) && (n || m))//������Ϊ0 0ʱ����ѭ������Ϊ||���߼��ǻ򣬼���������ֻҪ��һ��Ϊ�棬����ʽΪ�档
//	{
//		ans = quik_power(n, m, 1000);//ģ��1000����ʾȡ�������������λ��
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
//		if (power & 1)//����Ƿ�Ϊ����
//			result = result * base % p;
//		base = base * base % p;
//		power >>= 1;
//	}
//	return result % p;
//}

/*����ÿ����𲿷ֵ������յ㣬�������ȼ��λ�õĳ���֮�͡�
�����ʽ
��һ��һ����������ʾ������Ϣ���� n�������� n �У�ÿ���������� a,b����ʾһ���Ż�λ�õ������յ㣨ע�⣺����ҿ�����
�����ʽ:���һ��һ��������ʾ�𰸡�
���ݱ�֤��1 <= n <= 2*10^4��-2^31 <= a<b <= 2^31,�Ҵ�С��2^31��*/
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

