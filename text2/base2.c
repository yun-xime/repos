#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//二分法查找（必须是有序数组，即数按大小顺序排列）
int main()
{
	int arr[10]= {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	scanf("%d", &i);
	printf("请输入要查找的值");
	int sz = sizeof(arr)/sizeof(arr[0]);//获取数组的元素个数
	int left = 0;//左边界
	int right = sz - 1;//右边界
	
	while (left <= right)
	{
		//int mid = (left + right) / 2;//计算中间位置;必须放在while函数内，因为每次迭代中left和right的值会变化，mid的值也需要随着实时更新
		int mid = left + (right - left) / 2;//避免溢出
		if (arr[mid] == i)
		{
			printf("找到了，下标为%d", mid);
			break;
		}
		else if (arr[mid] < i)
		{
			left = mid + 1;//如果mid小于i，说明i在右半部分，更新左边界为mid+1（左边界前进）
		}
		else
		{
			right = mid - 1;//如果mid大于i，说明i在左半部分，更新右边界为mid-1（右边界后退）
		}
		mid = (left + right) / 2;
	}
	if (left > right)
	{
		printf("没有找到");
	}
	return 0;
}