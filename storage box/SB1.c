#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//ģ��ѡ����
//int main()
//{
//	int input = 0;
//	printf("ѡ����ĳ�ʼ���\nС����\t��������\t�����\n");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("��ѡ����С����\n");
//	}
//	else if (input == 2)
//	{
//		printf("��ѡ������������\n");
//	}
//	else if (input == 3)
//	{
//		printf("��ѡ���˽����\n");
//	}
//	else
//	{
//		printf("��ѡ���������\n");
//	}
//	return 0;
//}

//�ж���ż��
//int main()
// {
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1) //������ѧ���ʽΪ2k+1
// {
//		printf("%d ������\n", a);
//	}
//	else 
// {
//		printf("%d ��ż��\n", a);
//	}
//	return 0;
//}

//switch��֧���
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");		
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//}
//����߼���Ҫ�����Բ�дbreak��ʹ���case���ִ��ͬһ����롣��
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��ĩ\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}

//goto���
//int main()
//for()
//{
//   for()
//   {
//      if()
//      {
//         goto out;//��ת����ǩout
//      }
//   }
// ...
//   out://��ǩ
// ...
//}

//�ж�������ַ��Ƿ�Ϊ����(Ҳ�����ж��Ƿ�Ϊ��д��Сд��ĸ)
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)//���ն����������ַ�������Ctrl+Z�������룬EOF��ʾ�ļ���������
//	{
//		if (ch < '0' || ch>'9')
//		{
//			continue;
//
//		}
//		putchar(ch);
//	}
//	return 0;
//}

//ָ��ļ�ʹ��
//int main() {
//	int a = 10;
//	printf("%p\n",&a);//��ӡ����a�ĵ�ַ��
//	int* p = &a;//����ָ�����p������a�ĵ�ַ��ֵ��p��int˵��pָ��Ķ��������ͱ�����*˵��p��һ��ָ�롣
//	printf("%p\n",p);//��ӡָ�����p�ĵ�ַ��
//	*p = 20;//ͨ��ָ��p�޸�a��ֵ��
//  printf("%d\n",a);
//	return 0;
//}

//С���ɣ�
//int main() {
//	int a = 10;
//	if (5 = a);//���� ���޷����С���ʱ����Է���¶©�˸��Ⱥš�
//	return 0;
//}
//int main() {
//	int a = 10;
//	if (a = 5);//vsû�б�����������
//	return 0;
//}
//��˿ɼ���һ��д����ϰ�߸��ã���ȻҪ��Ҫ�ѳ���������ߣ��ÿ��ұ߲��Ǳ���

//�����Լ��
//int gcd(int m, int n)
//{
//    return n > 0? gcd(n, m % n) : m;//�ݹ� + ��Ŀ�����
//}
//
//int main()
//{
//	int  m = 0, n = 0, r = 0;
//	printf("����������������");
//	scanf("%d %d", &m, &n);
//	r = m % n;
//	while (r!= 0) 
//	{
//		m = n;
//		n = r;
//		r = m % n;
//	}
//	printf("���Լ��Ϊ��%d", n);
// 
// 	printf("���Լ��Ϊ��%d", gcd(m, n));
//	return 0;
//}

//�ҳ�������������
//int main()
//{
//	int arr[6] = { 19,23,3,15,8,15};
//	int max = arr[0];
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)//strlen ����ֻ�����������ַ����ĳ���
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//	printf("\n�ξ�����ʵϰ  �ξ�����ʵϰ  �ξ�����ʵϰ  �ξ�����ʵϰ  �ξ�����ʵϰ  �ξ�����ʵϰ  �ξ�����ʵϰ  �ξ�����ʵϰ\n");
//	printf("\n�ξ�����ʵϰ  �ξ�����ʵϰ  �ξ�����ʵϰ  �ξ�����ʵϰ  �ξ�����ʵϰ  �ξ�����ʵϰ  �ξ�����ʵϰ  �ξ�����ʵϰ\n");
//	printf("\n�ξ�����ʵϰ  �ξ�����ʵϰ  �ξ�����ʵϰ  �ξ�����ʵϰ  �ξ�����ʵϰ  �ξ�����ʵϰ  �ξ�����ʵϰ  �ξ�����ʵϰ\n");
//	}
//	return 0;
//}

//����ĸ��������
//int main()
//{
//	//char arr1[13] = { 0 };
//	//char arr2[13] = "hello world";
//	//strcpy(arr1, arr2);
//	//printf("%s\n", arr1);
//	//return 0;
//
//	char arr[13] = "hello world";
//	memset(arr, '0', 12);
//	printf("%s\n", arr);
//	return 0;
//}
//strcpy ��һ�������ַ������Ƶı�׼�⺯�������д��뽫 arr2 �е��ַ������Ƶ� arr1 �С�ִ�д˲�����arr1 �����ݱ�Ϊ "hello world"��������Ϊ���㹻�����Բ���������
//memset ��һ�����ڽ��ڴ����ָ��ֵ��ʼ���ı�׼�⺯�������д��뽫 arr �е�ǰ 12 ���ַ��� '0' ��䡣ִ�д˲�����arr �����ݱ�Ϊ "00"��

//�žų˷���
//int main()
//{
//    int i, j;
//    for (i = 1; i <= 9; i++)
//    {
//        for (j = 1; j <= i; j++)
//        {
//            printf("%dx%d=%2d\t", j, i, i * j);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//��������1+2+3+...+n
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int num = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		num += i;
//	}
//	printf("%d", num);
//	return 0;
//}

//����n�Ľ׳ˣ�1 * 2 * 3 * 4 *... * n = n!
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;//��ret = ret * i �ȼۣ���ÿ��ִ�еõ���i��ֵ�ŵ�ret�����У����۳�������
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//������̣�1.ret �� i ��˵�1*1=1������ֵ�� ret�洢������i++��2.ret �� i ��˵�1*2=2����i++��3.ret �� i ��˵�1*2*3=6��i++��...�����õ�n�Ľ׳ˡ�

//����׳˵ĺͣ�n! = 1��+ 2��+ 3��+ ... + n!
//long long Fact(int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	long long ret = n;
//	if (n > 1)
//	{
//		ret *= Fact(n - 1);
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	long long ret = 0;
//	printf("������һ������n��");
//	scanf("%d", &n);
//	if (n < 0)
//	{
//		printf("�������������Ϊ������\n");
//		return 0;
//	}
//	for ( i = 1; i <= n; i++)
//	{
//		ret += Fact(i);
//	}
//	printf("%lld\n", ret);
//	return 0;
//}

//��������ʱ������ֱ�ӽ�������������ֵ
//int main()
//{
//  //�÷����漰������Ӽ�ʱ���������
//	int a = 10, b = 20;
//	a = a + b;//��a��b��ֵ�ŵ�һ��ȥ
//	b = a - b;//(a+b)-b,ʵ���˰�a��ֵ����b
//	a = a - b;//(a+b)-a
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 10, b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}

//쳲��������еĵ�N��
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	if (n == 0)
	{
		printf("0.00");
	}
	else if (n <= 2)
	{
		printf("1.00");
	}
	else
	{
		double a = 1, b = 1, c = 0;//��ʹ��int ת��Ϊdouble ֮��Ҳ���ܻᷢ�����ȶ�ʧ������Ҫ���ⲻͬ���͵ı����������㡣
		while (n > 2)
		{
			c = a + b;
			a = b;
			b = c;
			n--;
		}
		printf("%.2f", c);
	}
	return 0;
}