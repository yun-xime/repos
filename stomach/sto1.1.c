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

//猴子吃桃，每天吃掉总数的一半并再吃一个，第n天只剩下1个，问最开始有多少个桃子。
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

//有N号雪橇，编号为1, 2, …, N。需要Ri只驯鹿来拉i号雪橇。此外，每只驯鹿最多只能拉一只雪橇。回答以下形式为Q的查询：给定整数X。确定当有X只驯鹿时可以拉动的最大雪橇数量。
//数据保证：1≤N,Q≤2×10^5,1≤Ri≤10^9,1≤X≤2×10^14，所有输入的数都为整数。
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

/*我们有一个正整数序列：N个正整数，A=(A1,…,AN)。让B是A的10^100个副本的连接(如，A={3.5,2}时，B={3,5,2,3,5,2...}。考虑从左到右求和B的项。第一次总和超过X是什么时候？
数据保证：1≤N≤10^5,1≤Ai≤10^9,1≤X≤10^18输入中的所有值都是整数。*/
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

//给定一个长度为N的字符串S，由A、C、G和T组成。回答以下Q个查询：查询i（1≤i≤Q）：给定整数li和ri（1≤li<ri≤N1≤li< ri≤N），考虑从索引li开始到索引ri结束（包括两端）的子字符串。在该字符串中，AC作为子字符串出现了多少次？
//数据保证：1≤N≤10^5,1≤Q≤10^5,S的长度为N,且只包含字符A、C、G、T。
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

//查询一个字符串数组中，l到r范围内AC出现的次数。
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
//        s[i] = s[i - 1];//统计s[i]之前AC出现的次数。
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
//

//后缀表达式,洛谷题源：https://www.luogu.com.cn/problem/P1996
//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
//
//#define MAX_SIZE 100
//
//typedef struct {
//    int data[MAX_SIZE];
//    int top;
//} Stack;
//
//void initStack(Stack *s) {
//    s->top = -1;
//}
//
//int isFull(Stack *s) {
//    return s->top == MAX_SIZE - 1;
//}
//
//int isEmpty(Stack *s) {
//    return s->top == -1;
//}
//
//void push(Stack *s, int value) {
//    if (!isFull(s)) {
//        s->data[++(s->top)] = value;
//    }
//}
//
//int pop(Stack *s) {
//    if (!isEmpty(s)) {
//        return s->data[(s->top)--];
//    }
//    return 0; // 这里简单处理，实际情况可以改为返回错误值
//}
//
//int evaluatePostfix(char *expression) {
//    Stack s;
//    initStack(&s);
//    int i = 0;
//
//    while (expression[i] != '@') {
//        if (isdigit(expression[i])) {
//            // 处理操作数
//            int num = 0;
//            while (isdigit(expression[i])) {
//                num = num * 10 + (expression[i] - '0');
//                i++;
//            }
//            push(&s, num);
//        } else if (expression[i] == '.') {
//            i++; // 跳过操作数结束符.
//        } else if (strchr("+-*/", expression[i])) {
//            // 遇到运算符
//            int b = pop(&s);
//            int a = pop(&s);
//            int result;
//            switch (expression[i]) {
//                case '+':
//                    result = a + b;
//                    break;
//                case '-':
//                    result = a - b;
//                    break;
//                case '*':
//                    result = a * b;
//                    break;
//                case '/':
//                    result = a / b; // 由于题目保证除数不为0，这里直接使用
//                    break;
//            }
//            push(&s, result);
//            i++;
//        }
//    }
//
//    return pop(&s); // 最后栈中应该只剩下一个结果
//}
//
//int main() {
//    char expression[MAX_SIZE];
//    scanf("%s", expression);
//    int result = evaluatePostfix(expression);
//    printf("%d\n", result);
//    return 0;
//}

//约瑟夫问题。
//#include <stdio.h>
//int main() {
//    int n, m;
//    int a[105] = { 0 };
//    scanf("%d %d", &n, &m);
//    int num = n, last = 0;
//
//    while (num) {
//        int cnt = 0;
//        for (int i = last; cnt != m; i++) {
//            if (i >= n) i %= n;//如果索引 i 超出了人数 n，则对 n 取模，以实现循环。
//            if (a[i] == -1) continue;
//            cnt++;
//            if (cnt == m) {
//                a[i] = -1;
//                num--;
//                last = i + 1;
//                printf("%d ", i + 1);
//                break;
//            }
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int a[105] = { 0 };
//    int m, n, i = 1, sum = 0, k = 0;
//    scanf("%d %d", &n, &m);
//    while (n != sum)
//    {
//        if (i > n)
//            i = 1;
//        if (a[i] == 0)
//        {
//            k++;
//            if (k == m)
//            {
//                sum++;
//                k = 0;
//                a[i] = 1;
//                printf("%d ", i);
//            }
//        }
//        i++;
//    }
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>
//struct meg {
//	int x, y;
//};
//int cmp(const void* a, const void* b)
//{
//	return ((struct meg*)a)->x - ((struct meg*)b)->x;
//}
//
//int main()
//{
//	int n,k; scanf("%d %d", &n, &k);
//	struct meg* a = (struct meg*)malloc(n * sizeof(struct meg));
//	for (int i = 0; i < n; i++)
//	{
//		a[i].y = i + 1;
//		scanf("%d", &a[i].x);
//	}
//	qsort(a, n, sizeof(struct meg), cmp);
//	int min = 1000;
//	for(int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			int t = abs(a[i].y - a[j].y);
//			if (t == k)
//			{
//
//				int temp = abs(a[i].x - a[j].x);
//				min = min > temp ? temp : min;
//			}
//		}
//	}
//	printf("%d\n", min);
//	free(a);
//	return 0;
//}


//int main() {
//	int k;
//	scanf("%d", &k);
//	int cnt = 0;
//	for (int i = 22555; i <= 30000; i++) {
//		int sub1 = i / 100;
//		int sub2 = (i % 10000) / 10;
//		int sub3 = i % 1000;
//		if ( sub1 % k == 0 && sub2 % k == 0 && sub3 % k == 0) {
//			printf("%d ", i);
//			cnt = 1;
//			continue;
//		}
//	}
//	if (cnt == 0) {
//		printf("No\n");
//	}
//	return 0;
//}

