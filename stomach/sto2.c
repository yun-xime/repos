#define _CRT_SECURE_NO_WARNINGS
//ǰ׺�ͣ�
//https://blog.csdn.net/m0_69323023/article/details/135789840
// ժҪ��
//1.�ɵ��ƹ�ʽS[i]=S[i-1]+A[i]��A[i]=S[i]-S[i-1]�������õ�sum=S[r]+S[l-1]
//2.Ϊʹ��ʽ���������ԣ���Ҫ��S[0] = 0��
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

//��֣�https://blog.csdn.net/Cooperia/article/details/118864683
//ժҪ��
//һ��أ������ҪӦ������һ�����е�ĳһ���ض���Χ�ڵ�����ֵ�����ϻ��ȥһ��������
//���壺��ֿ��Լ򵥵Ŀ���ÿ��Ԫ������ǰһ��Ԫ�صĲ�ֿ������Ϊǰ׺�͵������㡣
//��ǰ׺�͵Ĺ�ʽ�Ƶ��ã�b[i] = a[i] - a[i-1]������aΪԭʼ���У�bΪ������С�
/*һά��֣�
һά�����ָ����һ������Ϊn������a��Ҫ��֧�ֲ���pro(l,r,c)��ʾ��a[l]~a[r]�����ϵ�ÿһ��ֵ�����ϻ��ȥ����c�������޸ĺ������a��*/
//��a��������[l,r]ͬʱ����c�Ĳ�����ת��Ϊ��b[l] += c;b[r+1] -= c;
//#include <stdio.h>
//#include <stdlib.h>
//#define N 100010
//int n, m;
//int a[N], b[N];
//
//void insert(int l, int r, int c)
//{
//    b[l] += c;
//    if (r + 1 <= n)//��ֹԽ��
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
//    //����
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