#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//二分法查找（必须是有序数组，即数按大小顺序排列）
//int main()
//{
//	int arr[10]= {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	scanf("%d", &i);
//	printf("请输入要查找的值");
//	int sz = sizeof(arr)/sizeof(arr[0]);//获取数组的元素个数
//	int left = 0;//左边界
//	int right = sz - 1;//右边界;因为数组下标从0开始（而不是从1开始），所以右边界为sz-1
//
//	while (left <= right)
//	{
//		//int mid = (left + right) / 2;//计算中间位置;必须放在while函数内，因为每次迭代中left和right的值会变化，mid的值也需要随着实时更新
//		int mid = left + (right - left) / 2;//避免溢出
//		if (arr[mid] == i)
//		{
//			printf("找到了，下标为%d", mid);
//			break;
//		}
//		else if (arr[mid] < i)
//		{
//			left = mid + 1;//如果mid小于i，说明i在右半部分，更新左边界为mid+1（左边界前进）
//		}
//		else
//		{
//			right = mid - 1;//如果mid大于i，说明i在左半部分，更新右边界为mid-1（右边界后退）
//		}
//		mid = (left + right) / 2;
//	}
//	if (left > right)
//	{
//		printf("没有找到");
//	}
//	return 0;
//}

// 改进版，增加了提示用户是否继续查找的功能
//int main() {
//    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    char choice;
//
//    do {
//        int i = 0;
//        printf("请输入要查找的值: ");
//        scanf("%d", &i);
//
//        int sz = sizeof(arr) / sizeof(arr[0]); // 获取数组的元素个数
//        int left = 0; // 左边界
//        int right = sz - 1; // 右边界
//        int found = 0; // 标记是否找到
//
//        while (left <= right) {
//            int mid = left + (right - left) / 2; // 计算中间位置
//            if (arr[mid] == i) {
//                printf("找到了，下标为%d\n", mid);
//                found = 1; // 找到时设置标记
//                break; // 找到后退出循环
//            }
//            else if (arr[mid] < i) {
//                left = mid + 1; // 更新左边界
//            }
//            else {
//                right = mid - 1; // 更新右边界
//            }
//        }
//
//        if (!found) {
//            printf("没有找到\n");
//        }
//
//        // 提示用户是否继续查找
//        printf("是否继续查找? (y/n): ");
//        scanf(" %c", &choice); // 注意前面的空格，避免读取到上一次输入的换行符
//
//    } while (choice == 'y' || choice == 'Y'); // 继续查找
//
//    return 0;
//}

