#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

//�ж���������������
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (0 == n % j)
		{
			return 0;
		}
	}
	return 1;//��ѭ������֮�󣬼�ֻ�е����������п��ܵ����Ӻ����û���ҵ�����ʱ�ŷ���1��
}

int main()
{
	int i = 0;
	scanf("%d", &i);
		if (is_prime(i))
		{
			printf("It is a prime number");
		}
		else
			printf("It is not a prime number");
     return 0;
}