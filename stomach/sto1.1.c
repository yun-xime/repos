#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*给定一个整数N。对其K次以下操作，并输出整数结果：如果N是200的倍数，则除以200；否则，将N视为字符串，并在其末尾添加200。
约束条件：1 <= N <=10^5;1 <= K <= 20。输入：N和K，用空格隔开*/
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

//有没有可能，既然你能想到拿题目问ai，别人为什么想不到呢？拿ai写出来的跟你的对比一下，查重，就知道你有没有问ai了。当然，你可以先自己写的差不多，再让ai改，可能看不出。

/*有一场考试包含3个问题，分别值1、2和4分。高桥、青木和Snuke参加了这场考试，高桥得了A分，而青木得了B分。
Snuke解决了高桥和青木至少有一个人解决的所有问题，且没有解决高桥和青木都没有解决的任何问题。找出Snuke的得分*/
//用笨方法，每个可能性都一一列举出来。
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

/*一个10 * 10的靶子由5个“环”组成，每个环有不同的分值：最外层1分，下一环2分，...，中心环5分。Vlad向靶子射了几支箭。帮他确定他得了多少分
输入：包含多个测试样例，输入的第一行包括一个整数t（1 <= t <= 1000,表示测试样例的数量）；每个测试样例由10行字符组成，每行包含10个字符，字符网络中的每个字符要么是.（表示没有箭），要么是X(表示有箭）。
如：
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
//        for (int i = 0; i < 5; i++)//一共有5个环，从外往内找。
//        {
//            for (int x = i; x < 10 - i; x++)
//            {
//                for (int y = i; y < 10 - i; y++)//从最外环开始。x和y的位置任意，只是这样写更符合习惯。
//                {
//                    if (x == i || x == 9 - i || y == i || y == 9 - i)//同级从左到右边看，满足其一就说明在检索点位（x,y)在目标环上。(画个直角坐标系就很明了了）
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

//计算某个整数的二进制位中1的个数。
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

//不高兴的津津。洛谷题源：https://www.luogu.com.cn/problem/P1085
//int unhappy(int S1, int S2, int i, int* max)
//{
//	int n = S1 + S2;
//	static int I = 0;//用静态变量防止每次进入函数时都重置I，保证只输出第一次出现的最大值。
//	if (n > *max)//如果当前值大于最大值，则更新最大值和当前值。
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

//MC生存。洛谷题源：https://www.luogu.com.cn/problem/P1789
//void Fire(char matix[104][104], int n, int x, int y)
//{
//	for (int i = 0; i <= 2; i++)//上部
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
//	for (int i = 1; i <= 2; i++)//下部
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
//	//形成一个菱形
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
//	char matix[104][104] = { 0 };//火光可以照亮5x5范围内的一定空间，为防止火把插在边缘导致的数组越界，多加2个单位。
//	int n, m, k, x, y;
//	scanf("%d %d %d", &n, &m, &k);
//	int i = 0, j = 0;
//	for (i = 2; i < n + 2; i++)
//	{
//		for (j = 2; j < n + 2; j++)
//		{
//			matix[i][j] = '*';//初始化为全黑
//		}
//	}
//	for (int i = 2; i <= m + 1; i++)
//	{
//		scanf("%d %d", &x, &y);
//		matix[x + 1][y + 1] = '!';//标记火把
//		Fire(matix, n, x + 1, y + 1);
//	}
//	if (k != 0)
//	{
//		for (int i = m + 2; i <= m + k + 1; i++)
//		{
//			scanf("%d %d", &x, &y);
//			matix[x + 1][y + 1] = '!';//标记萤石
//			Fluorite(matix, n, x + 1, y + 1);
//		}
//	}
//	int count = 0;//不在每次标记亮部时计数，避免最终表达式过于复杂而不知道到底那一步出错。在数据较小时不用担心用for统计暗部带来的额外开销
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

//评等级。洛谷题源：https://www.luogu.com.cn/problem/P5742
//#include <stdio.h>
//#include <stdlib.h>
//struct stu
//{
//	int id;
//	double a;
//	double b;
//	double (*sum)(struct stu s);// 因为结构体里面不能定义函数，所以定义了一个指向函数的指针，该函数接受一个stu类型的结构体，并返回一个double类型的值
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
//	struct stu *s = (struct stu*)malloc(N * sizeof(struct stu));//由于结构体的特性*1)，直接定义 struct stu s[a](a为一个很大的常数）会导致栈占用非常严重，这时候应该用动态分配。
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
//	free(s);//每次使用动态分配都不能忘了释放内存。
//	return 0;
//}
/*1)结构体的大小: 结构体的大小是其所有成员大小的总和。如果结构体包含多个较大的数据类型（如浮点数、数组等），那么每个结构体实例都可能占用大量内存。而数组通常只是一个相同类型的数据集合，其大小是可以通过一个简单的乘法计算得出的。

结构体对齐: 为了提高效率，编译器通常会对结构体中的数据进行对齐。在结构体中，成员之间可能会插入填充字节，这样会使得结构体的实际占用内存比简单地将其所有成员的大小相加更大。这种对齐可能会增加结构体的大小。

多维数组: 如果你使用的是多维数组，它的内存布局相对紧凑，与其他类型的数组相比，多维数组的行为可以更节省内存空间。在某些情况下，即使声明的元素数量相同，多维数组可能比每个元素都是结构体的数组占用的内存更少。

局部变量的数量: 如果你在函数中声明多个结构体的实例，特别是在递归函数中，每个函数调用都需要在堆栈上分配相应的空间，这会迅速消耗堆栈空间。而对于数组，只需要一次性分配所有元素的内存，通常情况下不会像结构体实例那样快速增长。

数据的管理: 在代码设计中，使用结构体意味着你可能创建了一个复杂的数据结构，而数组通常是简单的数据集合。这种复杂性可能导致你在函数中处理和管理数据时需要更大的堆栈空间*/

//猴子吃桃，每天吃掉总数的一半并再吃一个，第n天只剩下1个，问最开始
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

//唱歌比赛。洛谷题源：https://www.luogu.com.cn/problem/P5738
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
//    double temp[100];//要输入最多100个同学的成绩然后比较啊喂！还有，这次runtime error是因为数组大小不够。
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