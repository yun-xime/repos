#define _CRT_SECURE_NO_WARNINGS
//前缀和：前缀和算法是一种用空间换时间的算法，常常用于解决某些题目或者作为某些高级算法的组成部分
//https://blog.csdn.net/m0_69323023/article/details/135789840，https://blog.csdn.net/to_mountain/article/details/136778362
// 摘要：
//1.由递推公式S[i]=S[i-1]+A[i]得A[i]=S[i]-S[i-1]，进而得到sum=S[r]+S[l-1]
//2.为使公式具有普适性，需要令S[0] = 0。
/*一维前缀和：*/
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int n, q;
//	scanf("%d %d", &n, &q);
//	int* a = (int*)malloc(n * sizeof(int));
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	int* s = (int*)malloc((n + 1) * sizeof(int));
//	s[0] = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		s[i] = s[i - 1] + a[i - 1];
//	}
//	for (int i = 0; i < q; i++)
//	{
//		int l, r;
//		scanf("%d %d", &l, &r);
//		int sum = s[r] - s[l - 1];
//		printf("%d\n", sum);
//	}
//	free(a);
//	free(s);
//	return 0;
//}
/*二维前缀和：sum[x][y]=sum[x−1][y]+sum[x][y−1]−sum[x−1][y−1]+arr[x−1][y−1]*/
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    int n, m, q;
//    scanf("%d %d %d", &n, &m, &q);
//    int** arr = (int**)malloc((n + 1) * sizeof(int*));
//    for (int i = 0; i <= n; i++)
//    {
//        arr[i] = (int*)malloc((m + 1) * sizeof(int));
//    }
//    for (int i = 1; i <= n; i++)//在为 arr 和 dp 分配内存时分配了n + 1行，但在 arr 的循环中，却从 0 到 n-1（即for语句的执行条件写成 i < n）进行了分配，因此 arr[i] 中将出现未定义的行为
//    {
//        for (int j = 1; j <= m; j++)//动态分配尤其要注意数组是否越界，for循环等的判断语句是否和你分配时的行数和列数相同，从而避免程序崩溃
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//
//    int** dp = (int**)calloc((n + 1) , sizeof(int*));
//    for (int i = 0; i <= n; i++)
//    {
//        dp[i] = (int*)calloc((m + 1) , sizeof(int));
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] + arr[i][j] - dp[i - 1][j - 1];
//        }
//    }
//
//    int x1, x2, y1, y2;
//    while (q--)
//    {
//        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//        printf("%d\n", dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1]);
//    }
//    for (int i = 0; i <= n; i++)
//    {
//        free(arr[i]);
//    }
//    free(arr);
//    for (int i = 0; i <= n; i++)
//    {
//        free(dp[i]);
//    }
//    free(dp);
//    return 0;
//}
/*求子矩阵：son=sum[x+1][y+1]+sum[x1][y1]−sum[x+1][y1]−sum[x1][y+1]
求子矩阵和是建立在已经求出所有前缀和基础上的，求子矩阵和的方法和求前缀和的方法相似*/
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int n, m, q;
//    scanf("%d %d %d", &n, &m, &q);
//    int** arr = (int**)malloc((n + 1) * sizeof(int*));
//    for (int i = 0; i <= n; i++) {
//        arr[i] = (int*)malloc((m + 1) * sizeof(int));
//    }
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//
//    int** dp = (int**)calloc((n + 2), sizeof(int*)); // 动态分配前缀和数组
//    for (int i = 0; i <= n + 1; i++) {
//        dp[i] = (int*)calloc((m + 2), sizeof(int));
//    }
//
//    // 计算前缀和
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + arr[i][j];
//        }
//    }
//
//    // 查询
//    while (q--) {
//        int x1, y1, x2, y2;
//        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//        printf("%d\n", dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1]);
//    }
//
//    // 为子矩阵和数组分配空间
//    int** son = (int**)calloc((n + 2), sizeof(int*));
//    for (int i = 0; i <= n + 1; i++) {
//        son[i] = (int*)calloc((m + 2), sizeof(int));
//    }
//
//    // 计算子矩阵和
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            son[i][j] = dp[i + 1][j + 1] - dp[i][j + 1] - dp[i + 1][j] + dp[i][j];
//        }
//    }
//
//    // 处理子矩阵和的查询次数
//    int p; // 设定用于查询子矩阵和的变量
//    scanf("%d", &p); // 输入子矩阵和查询的数量
//
//    // 查询子矩阵和
//    while (p--) {
//        int x11, y11, x22, y22;
//        scanf("%d %d %d %d", &x11, &y11, &x22, &y22);
//        printf("%d\n", son[x22][y22] - son[x11 - 1][y22] - son[x22][y11 - 1] + son[x11 - 1][y11 - 1]);
//    }
//
//    // 释放内存
//    for (int i = 0; i <= n; i++) {
//        free(arr[i]);
//    }
//    free(arr);
//    for (int i = 0; i <= n + 1; i++) {
//        free(dp[i]);
//    }
//    free(dp);
//    for (int i = 0; i <= n + 1; i++) {
//        free(son[i]);
//    }
//    free(son);
//    return 0;
//}

//差分：https://blog.csdn.net/Cooperia/article/details/118864683
//摘要：
//一般地，差分主要应用于让一个序列的某一个特定范围内的所有值都加上或减去一个常数。
//定义：差分可以简单的看成每个元素与其前一个元素的差，又可以理解为前缀和的逆运算。
//由前缀和的公式推导得：b[i] = a[i] - a[i-1]，其中a为原始序列，b为差分序列。
/*一维差分：
一维差分是指给定一个长度为n的序列a，要求支持操作pro(l,r,c)表示对a[l]~a[r]区间上的每一个值都加上或减去常数c，并求修改后的序列a。*/
//对a数组区间[l,r]同时加上c的操作可转化为：b[l] += c;b[r+1] -= c;
//#include <stdio.h>
//#include <stdlib.h>
//#define N 100010
//int n, m;
//int a[N], b[N];
//
//void insert(int l, int r, int c)
//{
//    b[l] += c;
//    if (r + 1 <= n)//防止越界
//    {
//        b[r + 1] -= c;
//    }
//}
//
//int main()
//{
//    scanf("%d%d", &n, &m);
//    for (int i = 1; i <= n; i++)
//    {
//        scanf("%d", &a[i]);
//    }
//    //插入
//    for (int i = 1; i <= n; i++)
//    {
//        insert(i, i, a[i]);
//    }
//    while (m--)
//    {
//        int l, r, c;
//        scanf("%d%d%d", &l, &r, &c);
//        insert(l, r, c);
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        b[i] += b[i - 1];
//        printf("%d ", b[i]);
//    }
//    return 0;
//}
/*二维差分：二维差分是指对于一个n*m的矩阵a，要求支持操作pro(x1,y1,x2,y2,a)，表示对于以(x1,y1)为左上角，(x2,y2)为右下角的矩形区域，每个元素都加上常数a。求修改后的矩阵a。*/
//类似于一维差分：b[x1][y1] += c，b[x2 + 1][y1] -= c，b[x1][y2 + 1] -= c，b[x2 + 1][y2 + 1] += c;//puts 函数会输出一个字符串，并在字符串后自动添加一个换行符。当传入空字符串 "" 时，puts("") 的输出结果就是一个换行。
//#include <stdio.h>
//#include <stdlib.h>
//#define N 1010
//int n, m;
//int a[N][N], b[N][N];
//
//void insert(int x1, int y1, int x2, int y2, int c)
//{
//    b[x1][y1] += c;
//    b[x2 + 1][y1] -= c;
//    b[x1][y2 + 1] -= c;
//    b[x2 + 1][y2 + 1] += c;
//}
//
//int main()
//{
//    scanf("%d %d", &n, &m);
//
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= n; j++)
//        {
//            a[i][j] = 0;
//        }
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= n; j++)
//        {
//            insert(i, j, i, j, a[i][j]);
//        }
//    }
//    while (m--)
//    {
//        int x1, y1, x2, y2, c = 1;
//        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//        insert(x1, y1, x2, y2, c);
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= n; j++)
//        {
//            b[i][j] += b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];
//        }
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= n; j++)
//        {
//            printf("%d ", b[i][j]);
//        }
//        puts("");
//    }
//
//    return 0;
//}

