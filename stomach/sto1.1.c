#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*����һ������N������K�����²����������������������N��200�ı����������200�����򣬽�N��Ϊ�ַ�����������ĩβ���200��
Լ��������1 <= N <=10^5;1 <= K <= 20�����룺N��K���ÿո����*/
//int main()
//{
//	long long N;
//	int K;
//	scanf("%lld %d", &N, &K);
//	for (int i = 0; i < K; i++)
//	{
//		if (N % 200 == 0)
//		{
//			N /= 200;
//		}
//		else
//		{
//			N = N * 1000 + 200;
//		}
//	}
//	printf("%lld", N);
//	return 0;
//}

//��û�п��ܣ���Ȼ�����뵽����Ŀ��ai������Ϊʲô�벻���أ���aiд�����ĸ���ĶԱ�һ�£����أ���֪������û����ai�ˡ���Ȼ����������Լ�д�Ĳ�࣬����ai�ģ����ܿ�������

/*һ��10 * 10�İ�����5����������ɣ�ÿ�����в�ͬ�ķ�ֵ�������1�֣���һ��2�֣�...�����Ļ�5�֡�Vlad��������˼�֧��������ȷ�������˶��ٷ�
���룺���������������������ĵ�һ�а���һ������t��1 <= t <= 1000,��ʾ������������������ÿ������������10���ַ���ɣ�ÿ�а���10���ַ����ַ������е�ÿ���ַ�Ҫô��.����ʾû�м�����Ҫô��X(��ʾ�м�����
�磺
X.........
..........
.......X..
.....X....
......X...
..........
.........X
..X.......
..........
.........X */
//#include <stdio.h>
//void OVO(char QAQ[10][10], int a, int b, int* S, int num)
//{
//    if (QAQ[a][b] == 'X') 
//    {
//        *S += num;
//    }
//}
//
//int main()
//{
//    char QAQ[10][10];
//    int t;
//    scanf("%d", &t);
//    getchar();
//
//    for (int j = 0; j < t; j++)
//    {
//        int score = 0, num = 1;
//
//        for (int x = 0; x < 10; x++)
//        {
//            for (int y = 0; y < 10; y++)
//            {
//                scanf(" %c", &QAQ[x][y]);
//            }
//        }
//
//        for (int i = 0; i < 5; i++)//һ����5���������������ҡ�
//        {
//            for (int x = i; x < 10 - i; x++)
//            {
//                for (int y = i; y < 10 - i; y++)//�����⻷��ʼ��x��y��λ�����⣬ֻ������д������ϰ�ߡ�
//                {
//                    if (x == i || x == 9 - i || y == i || y == 9 - i)//ͬ�������ұ߿���������һ��˵���ڼ�����λ��x,y)��Ŀ�껷�ϡ�(����ֱ������ϵ�ͺ������ˣ�
//                    {
//                        OVO(QAQ, x, y, &score, num);
//                    }
//                }
//            }
//            num++;
//        }
//        printf("%d\n", score);
//    }
//    return 0;
//}

//����ĳ�������Ķ�����λ��1�ĸ�����
//int number_of_1(int m)
//{
//	int count = 0;
//	while (m)
//	{
//		m = m & (m - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m;
//	scanf("%d", &m);
//	printf("%d", number_of_1(m));
//	return 0;
//}

//�����˵Ľ�������Դ��https://www.luogu.com.cn/problem/P1085
//int unhappy(int S1, int S2, int i, int* max)
//{
//	int n = S1 + S2;
//	static int I = 0;//�þ�̬������ֹÿ�ν��뺯��ʱ������I����ֻ֤�����һ�γ��ֵ����ֵ��
//	if (n > *max)//�����ǰֵ�������ֵ����������ֵ�͵�ǰֵ��
//	{
//		*max = n;
//		I = i;
//	}
//	return I;
//}
//
//int main()
//{
//	int S1, S2;
//	int OVO = 0;
//	int max = 0;
//	for (int i = 1; i < 8; i++)
//	{
//		scanf("%d %d", &S1, &S2);
//		if (S1 + S2 > 8)
//		{
//			OVO = unhappy(S1, S2, i, &max);
//		}
//	}
//	printf("%d", OVO);
//	return 0;
//}

//MC���档�����Դ��https://www.luogu.com.cn/problem/P1789
//void Fire(char matix[104][104], int n, int x, int y)
//{
//	for (int i = 0; i <= 2; i++)//�ϲ�
//	{
//		for (int j = y - i; j <= y + i; j++)
//		{
//			if (j >= 0 && j < 104 && x - 2 + i >= 0 && x - 2 + i < 104 && matix[x - 2 + i][j] == '*')
//			{
//				matix[x - 2 + i][j] = 'X';
//			}
//		}
//	}
//	int i, j = 1;
//	for (int i = 1; i <= 2; i++)//�²�
//	{
//		for (int h = y - j; h <= y + j; h++)
//		{
//			if (h >= 0 && h < 104 && x + i >= 0 && x + i < 104 && matix[x + i][h] == '*')
//			{
//				matix[x + i][h] = 'X';
//			}
//		}
//		j--;
//	}
//	//�γ�һ������
//}
//
//void Fluorite(char matix[104][104], int n, int x, int y)
//{
//	for (int i = x - 2; i <= x + 2; i++)
//	{
//		for (int j = y - 2; j <= y + 2; j++)
//		{
//			if (i >= 0 && i < 104 && j >= 0 && j < 104 && matix[i][j] == '*')
//			{
//				matix[i][j] = 'X';
//			}
//		}
//	}
//}
//
//int main()
//{
//	char matix[104][104] = { 0 };//����������5x5��Χ�ڵ�һ���ռ䣬Ϊ��ֹ��Ѳ��ڱ�Ե���µ�����Խ�磬���2����λ��
//	int n, m, k, x, y;
//	scanf("%d %d %d", &n, &m, &k);
//	int i = 0, j = 0;
//	for (i = 2; i < n + 2; i++)
//	{
//		for (j = 2; j < n + 2; j++)
//		{
//			matix[i][j] = '*';//��ʼ��Ϊȫ��
//		}
//	}
//	for (int i = 2; i <= m + 1; i++)
//	{
//		scanf("%d %d", &x, &y);
//		matix[x + 1][y + 1] = '!';//��ǻ��
//		Fire(matix, n, x + 1, y + 1);
//	}
//	if (k != 0)
//	{
//		for (int i = m + 2; i <= m + k + 1; i++)
//		{
//			scanf("%d %d", &x, &y);
//			matix[x + 1][y + 1] = '!';//���өʯ
//			Fluorite(matix, n, x + 1, y + 1);
//		}
//	}
//	int count = 0;//����ÿ�α������ʱ�������������ձ��ʽ���ڸ��Ӷ���֪��������һ�����������ݽ�Сʱ���õ�����forͳ�ư��������Ķ��⿪��
//	for (i = 2; i <= n + 1; i++)
//	{
//		for (j = 2; j <= n + 1; j++)
//		{
//			if (matix[i][j] == '*')
//			{
//				count++;
//			}
//		}
//	}
//	printf("%d", count);
//}

//���ȼ��������Դ��https://www.luogu.com.cn/problem/P5742
//#include <stdio.h>
//#include <stdlib.h>
//struct stu
//{
//	int id;
//	double a;
//	double b;
//	double (*sum)(struct stu s);// ��Ϊ�ṹ�����治�ܶ��庯�������Զ�����һ��ָ������ָ�룬�ú�������һ��stu���͵Ľṹ�壬������һ��double���͵�ֵ
//};
//double sum(struct stu s)
//{
//	return s.a * 7 + s.b * 3;
//}
//
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	struct stu *s = (struct stu*)malloc(N * sizeof(struct stu));//���ڽṹ�������*1)��ֱ�Ӷ��� struct stu s[a](aΪһ���ܴ�ĳ������ᵼ��ջռ�÷ǳ����أ���ʱ��Ӧ���ö�̬���䡣
//	if (s == NULL)
//	{
//		perror("malloc error");
//		return 1;
//	}
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d %lf %lf", &s[i].id, &s[i].a, &s[i].b);
//	}
//	for (int i = 0; i < N; i++)
//	{
//		s[i].sum = sum;
//		if (s[i].sum(s[i]) >= 800 && s[i].a + s[i].b > 140)
//		{
//			printf("Excellent\n");
//		}
//		else
//		{
//			printf("Not excellent\n");
//		}
//	}
//	free(s);//ÿ��ʹ�ö�̬���䶼���������ͷ��ڴ档
//	return 0;
//}
/*1)�ṹ��Ĵ�С: �ṹ��Ĵ�С�������г�Ա��С���ܺ͡�����ṹ���������ϴ���������ͣ��縡����������ȣ�����ôÿ���ṹ��ʵ��������ռ�ô����ڴ档������ͨ��ֻ��һ����ͬ���͵����ݼ��ϣ����С�ǿ���ͨ��һ���򵥵ĳ˷�����ó��ġ�

�ṹ�����: Ϊ�����Ч�ʣ�������ͨ����Խṹ���е����ݽ��ж��롣�ڽṹ���У���Ա֮����ܻ��������ֽڣ�������ʹ�ýṹ���ʵ��ռ���ڴ�ȼ򵥵ؽ������г�Ա�Ĵ�С��Ӹ������ֶ�����ܻ����ӽṹ��Ĵ�С��

��ά����: �����ʹ�õ��Ƕ�ά���飬�����ڴ沼����Խ��գ����������͵�������ȣ���ά�������Ϊ���Ը���ʡ�ڴ�ռ䡣��ĳЩ����£���ʹ������Ԫ��������ͬ����ά������ܱ�ÿ��Ԫ�ض��ǽṹ�������ռ�õ��ڴ���١�

�ֲ�����������: ������ں�������������ṹ���ʵ�����ر����ڵݹ麯���У�ÿ���������ö���Ҫ�ڶ�ջ�Ϸ�����Ӧ�Ŀռ䣬���Ѹ�����Ķ�ջ�ռ䡣���������飬ֻ��Ҫһ���Է�������Ԫ�ص��ڴ棬ͨ������²�����ṹ��ʵ����������������

���ݵĹ���: �ڴ�������У�ʹ�ýṹ����ζ������ܴ�����һ�����ӵ����ݽṹ��������ͨ���Ǽ򵥵����ݼ��ϡ����ָ����Կ��ܵ������ں����д���͹�������ʱ��Ҫ����Ķ�ջ�ռ�*/

//���ӳ��ң�ÿ��Ե�������һ�벢�ٳ�һ������n��ֻʣ��1�������ʼ�ж��ٸ����ӡ�
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int m = 1;
//	if (n > 1)
//	{
//		for (int i = 1; i < n ; i++)
//		{
//			m += 3 * pow(2, i - 1) ;
//		}
//	}
//	else if (n == 1)
//	{
//		m = 1;
//	}
//	printf("%d", m);
//	return 0;
//}

//��N��ѩ�������Ϊ1, 2, ��, N����ҪRiֻѱ¹����i��ѩ�������⣬ÿֻѱ¹���ֻ����һֻѩ�����ش�������ʽΪQ�Ĳ�ѯ����������X��ȷ������Xֻѱ¹ʱ�������������ѩ��������
//���ݱ�֤��1��N,Q��2��10^5,1��Ri��10^9,1��X��2��10^14���������������Ϊ������
//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp(const void* a, const void* b)
//{
//	return (*(long long*)a - *(long long*)b);
//}
//
//int main()
//{
//	int n, q;
//	scanf("%d %d", &n, &q);
//	long long* a = (long long*)malloc(n * sizeof(long long));
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%lld", &a[i]);
//	}
//	qsort(a, n, sizeof(long long), cmp);
//    while (q--)
//    {
//        long long x;
//        scanf("%lld", &x);
//        long long sum = 0;
//        int count = 0;
//
//        for (int i = 0; i < n; i++)
//        {
//            sum += a[i];
//            if (sum <= x)
//            {
//                count++;
//            }
//            else
//            {
//                break;
//            }
//        }
//        printf("%d\n", count);
//    }
//	free(a);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int cmp(const void* a, const void* b)
//{
//    return (*(long long*)a - *(long long*)b);
//}
//
//int binary_search(long long* arr, int size, long long x) {
//    long long sum = 0;
//    int left = 0, right = size - 1;
//
//    while (left <= right) {
//        int mid = left + (right - left) / 2;
//
//        sum += arr[mid];
//
//        if (sum <= x) {
//            left = mid + 1;
//        }
//        else {
//            right = mid - 1;
//        }
//    }
//
//    return right + 1;
//}
//
//int main()
//{
//    int n, q;
//    scanf("%d %d", &n, &q);
//    long long* a = (long long*)malloc(n * sizeof(long long));
//
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%lld", &a[i]);
//    }
//
//    qsort(a, n, sizeof(long long), cmp);
//
//    while (q--)
//    {
//        long long x;
//        scanf("%lld", &x);
//        int result = binary_search(a, n, x);
//        printf("%d\n", result);
//    }
//
//    free(a);
//    return 0;
//}

/*������һ�����������У�N����������A=(A1,��,AN)����B��A��10^100������������(�磬A={3.5,2}ʱ��B={3,5,2,3,5,2...}�����Ǵ��������B�����һ���ܺͳ���X��ʲôʱ��
���ݱ�֤��1��N��10^5,1��Ai��10^9,1��X��10^18�����е�����ֵ����������*/
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int* a = (int*)malloc(n * sizeof(int));
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	long long x;
//	scanf("%lld", &x);
//	long long all_sum = 0;
//	for (int i = 0; i < n; i++) {
//		all_sum += a[i];
//	}
//
//	long long QAQ = x / all_sum;
//	long long curr_sum = QAQ * all_sum;
//
//	long long count = QAQ * n;
//	for (int i = 0; i < n; i++) {
//		curr_sum += a[i];
//		count++;
//		if (curr_sum >= x) {
//			printf("%lld\n", count);
//			break;
//		}
//	}
//
//	free(a);
//	return 0;
//}

//����һ������ΪN���ַ���S����A��C��G��T��ɡ��ش�����Q����ѯ����ѯi��1��i��Q������������li��ri��1��li<ri��N1��li< ri��N�������Ǵ�����li��ʼ������ri�������������ˣ������ַ������ڸ��ַ����У�AC��Ϊ���ַ��������˶��ٴΣ�
//���ݱ�֤��1��N��10^5,1��Q��10^5,S�ĳ���ΪN,��ֻ�����ַ�A��C��G��T��
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int n, q;
//    scanf("%d %d", &n, &q);
//    char* s = (char*)malloc(n + 1 * sizeof(char));
//    scanf("%s", s);
//    for (int i = 0; i < q; i++)
//    {
//        int l, r;
//        scanf("%d %d", &l, &r);
//        int count = 0;
//        for (int j = l; j < r; j++)
//        {
//            if (s[j - 1] == 'A' && s[j] == 'C')
//            {
//                count++;
//            }
//        }
//        printf("%d\n", count);
//    }
//    free(s);
//    return 0;
//}

//��ѯһ���ַ��������У�l��r��Χ��AC���ֵĴ�����
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    int n, q;
//    scanf("%d %d", &n, &q);
//    char* a = (char*)malloc((n + 1) * sizeof(char));
//    scanf("%s", a);
//
//    int* s = (int*)malloc((n + 1) * sizeof(int));
//    s[0] = 0;
//    for (int i = 1; i < n; i++)
//    {
//        s[i] = s[i - 1];//ͳ��s[i]֮ǰAC���ֵĴ�����
//        if (a[i - 1] == 'A' && a[i] == 'C') 
//        {
//            s[i]++;
//        }
//    }
//
//    for (int i = 0; i < q; i++)
//    {
//        int l, r;
//        scanf("%d %d", &l, &r);
//        int count = s[r - 1] - s[l - 1];
//        printf("%d\n", count);
//    }
//
//    free(a);
//    free(s);
//    return 0;
//}

//��ָ������ģ���ά���顣
//int main()
//{
//	int arr1[3] = { 1,2,3 };
//	int arr2[3] = { 4,5,6 };
//	int* arr[2] = { arr1,arr2 };//ͨ������������������Ԫ�صĵ�ַ�����Բ���Ҫȡ��ַ����
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		puts("");
//	}
//	return 0;
//}