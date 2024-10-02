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

// 打印字符串的逆序
#include <string.h>//for strlen()
//#include <stdlib.h>//for system()
//#include <windows.h>//for Sleep()and strcmp()
//int main()
//{
//	char arr1[12] = { "hello world" };
//	char arr2[12] = { "           " };//初始化为空格，用于存储当前逆序字符串的部分内容
//	int left = 0; //left指向字符串的开头（第一个字符）
//	int right = strlen(arr1) - 1;//right指向字符串的结尾（最后一个字符）
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];//将arr1的left位置的字符复制到arr2的对应位置
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//暂停程序执行1000毫秒（1秒）。
//		system("cls");//清屏
//		left++;
//		right--;//更新left和right，left指向下一个字符，right指向上一个字符
//	}
//	return 0;
//}

//模拟用户登录
//int main()
//{
//	int i = 0;
//	char password[10];
//	for (i = 1; i <= 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//strcmp()函数用于比较两个字符串是否相等,返回0表示相等
//		{
//			printf("密码正确，欢迎进入系统！\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入！\n");
//		}
//	    if (3 == i)
//	    {
//		    printf("多次错误，请稍后重试！");
//	    }
//	}
//return 0;	
//}

//统计字符串中小写字母的个数
//int main()
//{
//    int count = 0;
//    char text[] = "Scan the QR code to sign in now";
//    int length = strlen(text);
//    for (int i = 0; i < length; i++)
//    {
//        if (text[i] >= 'a' && text[i] <= 'z')
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}

