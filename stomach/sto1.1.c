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

/*现有 N 名同学，每名同学需要设计一个结构体记录以下信息：学号、学业成绩和素质拓展成绩、综合分数（实数）。
每行读入同学的学号、学业成绩和素质拓展成绩,并且计算综合分数（分别按照 70% 和 30% 权重累加），存入结构体中。还需要在结构体中定义一个成员函数，返回该结构体对象的学业成绩和素质拓展成绩的总分。
然后需要设计一个函数，其参数是一个学生结构体对象，判断该学生是否“优秀”。
优秀的定义是学业和素质拓展成绩总分大于 140 分，且综合分数不小于 80 分。
本题存在精度误差问题，请将 a * 0.7 + b * 0.3 与 80 比较 转化为 a * 7 + b * 3 与 800 比较。
输入：第一个输入一个整数N；接下来N行，每行输入一个学生的学号、学业成绩和素质拓展成绩，用空格隔开。
输出：N行，如果第i名学生是优秀的，则输出“Excellent”，否则输出“Not excellent”。
数据保证：1 <= N <= 1000,学号为不超过100000整数，学业成绩和素质拓展成绩为不超过100的正整数*/
