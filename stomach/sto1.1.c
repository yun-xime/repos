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

/*��һ�����԰���3�����⣬�ֱ�ֵ1��2��4�֡����š���ľ��Snuke�μ����ⳡ���ԣ����ŵ���A�֣�����ľ����B�֡�
Snuke����˸��ź���ľ������һ���˽�����������⣬��û�н�����ź���ľ��û�н�����κ����⡣�ҳ�Snuke�ĵ÷�*/
//�ñ�������ÿ�������Զ�һһ�оٳ�����
//void amns(int wcla[], int N)
//{
//	if (N == 1)
//	{
//		wcla[0] = 1;
//	}
//	else if (N == 2)
//	{
//		wcla[1] = 2;
//	}
//	else if (N == 3)
//	{
//		wcla[0] = 1;
//		wcla[1] = 2;
//	}
//	else if (N == 4)
//	{
//		wcla[2] = 4;
//	}
//	else if (N == 5)
//	{
//		wcla[0] = 1;
//		wcla[2] = 4;
//	}
//	else if (N == 6)
//	{
//		wcla[1] = 2;
//		wcla[2] = 4;
//	}
//	else if (N == 7)
//	{
//		wcla[0] = 1;
//		wcla[1] = 2;
//		wcla[2] = 4;
//	}
//}
//
//int main()
//{
//	int A, B;
//	int Snuke = 0;
//	int wcla[3] = {0};
//	scanf("%d %d", &A, &B);
//	amns(wcla, A);
//	amns(wcla, B);
//	for (int i = 0; i < 3; i++)
//	{
//		Snuke += wcla[i];
//	}
//	printf("%d", Snuke);
//}

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

//���ӳ��ң�ÿ��Ե�������һ�벢�ٳ�һ������n��ֻʣ��1�������ʼ
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

//#include <stdio.h>
//#include <stdlib.h>
//void Print(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//
//void MergeArr(int* arr, int* tmp, int left, int mid, int right)
//{
//	int begin1 = left;
//	int end1 = mid;
//	int begin2 = mid + 1;
//	int end2 = right;
//
//	int i = begin1;
//
//	while (begin1 <= end1 && begin2 <= end2)
//	{
//		if (arr[begin1] < arr[begin2])
//		{
//			tmp[i] = arr[begin1];
//			i++;
//			begin1++;
//		}
//		else
//		{
//			tmp[i] = arr[begin2];
//			i++;
//			begin2++;
//		}
//	}
//
//	while (begin1 <= end1)
//	{
//		tmp[i] = arr[begin1];
//		i++;
//		begin1++;
//	}
//
//	while (begin2 <= end2)
//	{
//		tmp[i] = arr[begin2];
//		i++;
//		begin2++;
//	}
//
//	for (int i = left; i <= right; i++)
//	{
//		arr[i] = tmp[i];
//	}
//}
//
//
//void MergeSortNonR(int* arr, int begin, int end)
//{
//	int* tmp = (int*)malloc(sizeof(int) * (end - begin + 1));
//	if (tmp == NULL)
//	{
//		printf("malloc false\n");
//		exit(-1);
//	}
//
//	int gap = 1;
//
//	while (gap < (end - begin + 1))
//	{
//		for (int i = 0; i <= end; i = i + 2 * gap)
//		{
//			int left = i;
//			int right = i + 2 * gap - 1;
//			int mid = (right + left) / 2;
//			if (right > end)
//			{
//				right = end;
//			}
//
//			MergeArr(arr, tmp, left, mid, right);
//		}
//
//		gap = gap * 2;
//	}
//	free(tmp);
//}
//
//int main()
//{
//	int n,m;
//	scanf("%d %d", &n, &m);
//	int score[20];
//	int sum = 0;
//	int average = 0;
//	int temp[20];
//	while (n--)
//	{
//		for (int i = 0; i < m; i++)
//		{
//			scanf("%d", &score[i]);
//		}
//		MergeSortNonR(score, 0, m - 1);
//		for (int i = 1; i < m - 1; i++)
//		{
//			sum += score[i];
//		}
//		average = sum / (m - 2);
//		temp[n] = average;
//		sum = 0;
//	}
//	MergeSortNonR(temp, 0, n - 1);
//	double temp2 = temp[n - 1];
//	printf("%.2lf", temp2);
//	return 0;
//}
//
//#include <stdio.h>
//void o_O(double A[],int N)
//{
//	for (int i = 0; i < N - 1; i++)
//	{
//		for (int j = 0; j < N - 1 - i;j++)
//		{
//			double temp;
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
//    int n, m;
//    scanf("%d %d", &n, &m);
//    double score[20];
//    double temp[20];
//    int count = 0;
//
//    while (n--) 
//    {
//        double sum = 0;
//        for (int i = 0; i < m; i++) 
//        {
//            scanf("%lf", &score[i]);
//        }
//
//        o_O(score, m);
//        for (int i = 1; i < m - 1; i++) 
//        {
//            sum += score[i];
//        }
//
//        if (m - 2 > 0) 
//        {
//            double average = (double)sum / (m - 2);
//            temp[count] = average;
//            count++;
//        }
//    }
//
//    o_O(temp, count);
//    double temp2 = (count > 0) ? temp[count - 1] : 0;
//    printf("%.2lf", temp2);
//    return 0;
//}

//��������������Դ��https://www.luogu.com.cn/problem/P5738
#include <stdio.h>
void o_O(double A[], int N)
{
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - 1 - i; j++)
        {
            double temp;
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//
//    double score[20];
//    double temp[100];//Ҫ�������100��ͬѧ�ĳɼ�Ȼ��Ƚϰ�ι�����У����runtime error����Ϊ�����С������
//    int count = 0;
//
//    while (n--)
//    {
//        double sum = 0;
//        for (int i = 0; i < m; i++)
//        {
//            scanf("%lf", &score[i]);
//        }
//
//        o_O(score, m);
//        for (int i = 1; i < m - 1; i++)
//        {
//            sum += score[i];
//        }
//
//        if (m - 2 > 0)
//        {
//            double average = (double)sum / (m - 2);
//            temp[count] = average;
//            count++;
//        }
//    }
//    if (count > 0) {
//        o_O(temp, count);
//        double temp2 = temp[count - 1];
//        printf("%.2lf\n", temp2);
//    }
//    return 0;
//}