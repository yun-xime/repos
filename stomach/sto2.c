#define _CRT_SECURE_NO_WARNINGS
//前缀和：
//https://blog.csdn.net/m0_69323023/article/details/135789840
// 摘要：
//1.由递推公式S[i]=S[i-1]+A[i]得A[i]=S[i]-S[i-1]，进而得到sum=S[r]+S[l-1]
//2.为使公式具有普适性，需要令S[0] = 0。
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