#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���ַ����ң��������������飬��������С˳�����У�
int main()
{
	int arr[10]= {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	scanf("%d", &i);
	printf("������Ҫ���ҵ�ֵ");
	int sz = sizeof(arr)/sizeof(arr[0]);//��ȡ�����Ԫ�ظ���
	int left = 0;//��߽�
	int right = sz - 1;//�ұ߽�
	
	while (left <= right)
	{
		//int mid = (left + right) / 2;//�����м�λ��;�������while�����ڣ���Ϊÿ�ε�����left��right��ֵ��仯��mid��ֵҲ��Ҫ����ʵʱ����
		int mid = left + (right - left) / 2;//�������
		if (arr[mid] == i)
		{
			printf("�ҵ��ˣ��±�Ϊ%d", mid);
			break;
		}
		else if (arr[mid] < i)
		{
			left = mid + 1;//���midС��i��˵��i���Ұ벿�֣�������߽�Ϊmid+1����߽�ǰ����
		}
		else
		{
			right = mid - 1;//���mid����i��˵��i����벿�֣������ұ߽�Ϊmid-1���ұ߽���ˣ�
		}
		mid = (left + right) / 2;
	}
	if (left > right)
	{
		printf("û���ҵ�");
	}
	return 0;
}