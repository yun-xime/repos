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