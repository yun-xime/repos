#define _CRT_SECURE_NO_WARNINGS
//恶作剧：关机程序
//int main()
//{
//	char input[100];
//	system("shutdown -s -t 60 -f");
//
//	while (1)
//	{
//		printf("你的电脑将在60秒后关机，若输入：我是猪，则取消关机。\n");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			printf("关机取消\n");
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}


//猜数字游戏
//#include <stdlib.h> //for RAND_MAX
//#include <time.h>//for time()
//void menu()
//{
//	printf("*********************************************************\n");
//	printf("*********************    1. p l a y    ******************\n");
//	printf("*********************    0. e x i t    ******************\n");
//	printf("*********************************************************\n");
//}
//
//void game()
//{
//	RAND_MAX;//最大值为32767
//	int ret = rand()%100+1;//rand()函数用来生成一个随机整数。rand() % 100 的作用是将 rand() 生成的随机数对100取余。取余操作会返回一个范围在 0 到 9100之间的整数。这是因为 a % b 会返回a除以b的余数，而余数总是小于b
//	/*printf("%d",ret);*/
//	int guess = 0;
//	
//	while(1)
//	{
//		printf("猜数字：>");
//		scanf("%d", &guess);
//		if(guess < ret)
//	    {
//		   printf("猜小了\n");
//	    }
//	    else if (guess > ret)
//	    {
//		   printf("猜大了\n");
//	    }
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	} 
//}
////int *P =NULL;//定义了一个指针变量P，初始值为NULL，表示一个空指针。
//int main()
//{
//	int choice = 0;
//	srand((unsigned int)time(NULL));//scrand()函数用来设置随机数种子;time(NULL)返回当前时间的秒数。使用 unsigned int 可以确保传递给 srand 的值是正整数，从而避免负数导致的潜在问题（虽然在大多数情况下，time(NULL) 返回的值是非负的）。
//	//scand只需要设置一次种子，后续调用rand()函数时，会根据之前设置的种子产生随机数，因此把srand函数放在main函数的开头是比较合适的。
//	do
//	{
//		menu();
//		printf("输入你的选择");
//		//scanf("%d", &choice);//在 scanf 函数读取用户输入时，如果输入的内容无法转换为整数，scanf 将不会修改 choice 的值，导致循环条件始终为真，从而造成死循环。
//		if (scanf("%d", &choice)!= 1)
//		{
//			while(getchar()!='\n')
//			printf("错误，请重新输入");
//			continue;
//		}
//		switch (choice)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("已退出");
//			break;
//		default:
//			printf("错误，请重新输入");
//			break;
//		}
//	} while (choice != 0);//当choice不等于0时执行循环
//    return 0;
//}

/*大小写转换*/
//int main()
//{
//	int ch;
//	printf("请输入一个字符：");
//	ch = getchar();
//	if (ch >= 'a' && ch <= 'z')
//	{
//		ch = ch - 32;
//	}
//	else if (ch >= 'A' && ch <= 'Z')
//	{
//		ch = ch + 32;
//	}
//	printf("输出的字符：%c\n", ch);
//	return 0;	
//}

//打印图案
//int main() {
//    printf("                ********\n");
//    printf("               ************\n");
//    printf("               ####....#.\n");
//    printf("             #..###.....##....\n");
//    printf("             ###.......######              ###            ###\n");
//    printf("                ...........               #...#          #...#\n");
//    printf("               ##*#######                 #.#.#          #.#.#\n");
//    printf("            ####*******######             #.#.#          #.#.#\n");
//    printf("           ...#***.****.*###....          #...#          #...#\n");
//    printf("           ....**********##.....           ###            ###\n");
//    printf("           ....****    *****....\n");
//    printf("             ####        ####\n");
//    printf("           ######        ######\n");
//    printf("##############################################################\n");
//    printf("#...#......#.##...#......#.##...#......#.##------------------#\n");
//    printf("###########################################------------------#\n");
//    printf("#..#....#....##..#....#....##..#....#....#####################\n");
//    printf("##########################################    #----------#\n");
//    printf("#.....#......##.....#......##.....#......#    #----------#\n");
//    printf("##########################################    #----------#\n");
//    printf("#.#..#....#..##.#..#....#..##.#..#....#..#    #----------#\n");
//    printf("##########################################    ############\n");
//
//    return 0;
//}

//判断素数（即质数）
//int prime(int n)
//{
//	for (int j = 2; j <= sqrt(n); j++)
//	{
//		if (0 == n % j)
//		{
//			return 0;//如果是合数则返回0以结束函数而不是跳出当前循环
//		}
//	}
//	return 1;//在循环结束之后，即只有当遍历完所有可能的因子后，如果没有找到因子时才返回1。
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//		if (prime(i))
//		{
//			printf("It is a prime number");
//		}
//		else
//			printf("It is not a prime number");
//     return 0;
//}
/*为什么要使用根号（sqrt):如果输入的是一个合数，如 16 ，则有 16 = 2 * 8 或 16 = 4 * 4，又 8 = 2 * 4 = 2 * 2 * 2（根据算术基本原理，任何一个大于1的自然数，如果它不是质数，那么必定可分解为数个质数的乘积）
那么 16 / 8 就相当于 16 与 2 相除了 3 次。在寻找素数的时候，就没必要再拿 16 除以 8 了。
可以注意到，m = a * b 中必定有一个 质因子（比如上面的 2） 小于或等于 m 的平方根（ 9 的时候等于)，又根据算术基本原理，大于 m 的平方根的因子（比如上面的8）必定可以分解为 质因子 ，故寻找素数的时候拿 2 到 m 的平方根
的数相除就可以了*/

//判断一个数是不是闰年
//int is_leap_year(int y)
//{
//	if((0 == y % 4 && 0 != y % 100) || (0 == y % 400))
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (is_leap_year(year))
//	{
//		printf("YES");
//	}
//	else
//		printf("NO");
//    return 0;
//}

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

//#include <windows.h>//for Sleep()
//动态字符显示（逐字出现）
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

//冒泡排序
//void o_O(int A[],int N)
//{
//	for (int i = 0; i < N - 1; i++)
//	{
//		for (int j = 0; j < N - 1 - i;j++)//j < N - 1 - i作用是让相邻两个数进行比较
//		{
//			int temp;
//			if (A[j] > A[j + 1])
//			{
//				temp = A[j];
//				A[j] = A[j + 1];
//				A[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int A[3];
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", &A[i]);
//	}
//	o_O(A, 3);
//	printf("%d %d %d", A[0], A[1], A[2]);
//	return 0;
//}

//数字反转
//输入一个不小于 100 且小于1000的浮点数，同时包括小数点后一位的一个浮点数，例如123.4 ，要求把这个数字翻转过来，变成浮点数4.321 并输出。
//double reverse(double num)
//{
//	double N = 0, num_int = 0;
//	for (int i = 1000; i > 1; i /= 10)
//	{
//
//		if (i > 10)
//		{
//			int j = i / 10;
//			num_int = (int)(num / j);
//			N += num_int / i;
//			num -= num_int * j;
//		}
//		else
//		{
//			num_int = (int)(num);
//			N += num_int / i;
//		}
//	}
//	return N;
//}
//
//int main()
//{
//	double num = 0;
//	scanf("%lf", &num);
//	double num_int = (int)num;
//	double num_dec = (num - num_int) * 10;
//	double N = reverse(num);
//	double new_num = num_dec + N;
//	printf("%.3lf", new_num);
//	return 0;
//}
//简化（整数适用）
// int reversed = 0, original = num;
//while (num > 0) {
//    reversed = reversed * 10 + num % 10;//逆序数
//    num /= 10;//去掉最后一位
//}

//归并排序递归版本（从小到大排序）
//#include<stdio.h>
//#include<stdlib.h>
//void Print(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
////单趟归并排序
//void MergeArr(int* arr, int* tmp, int left, int mid, int right)
//{
//	int begin1 = left;
//	int end1 = mid;
//	int begin2 = mid + 1;
//	int end2 = right;
//
//	int i = begin1;
//
//	while (begin1 <= end1 && begin2 <= end2)
//	{
//		if (arr[begin1] < arr[begin2])
//		{
//			tmp[i] = arr[begin1];
//			i++;
//			begin1++;
//		}
//		else
//		{
//			tmp[i] = arr[begin2];
//			i++;
//			begin2++;
//		}
//	}
//
//	while (begin1 <= end1)
//	{
//		tmp[i] = arr[begin1];
//		i++;
//		begin1++;
//	}
//
//	while (begin2 <= end2)
//	{
//		tmp[i] = arr[begin2];
//		i++;
//		begin2++;
//	}
//
//	for (int i = left; i <= right; i++)
//	{
//		arr[i] = tmp[i];
//	}
//}
//
//void MergePartSort(int* arr, int* tmp, int begin, int end)//归并排序分区间和归并
//{
//
//	if (begin >= end)
//	{
//		return;
//	}
//
//	//分区间
//	int mid = (begin + end) / 2;
//
//	MergePartSort(arr, tmp, begin, mid);
//	MergePartSort(arr, tmp, mid + 1, end);
//
//	//归并
//
//	MergeArr(arr, tmp, begin, mid, end);
//}
//
//void MergeSort(int* arr, int begin, int end)//归并排序
//{
//	int* tmp = (int*)malloc(sizeof(int) * (end - begin + 1));
//	if (tmp == NULL)
//	{
//		printf("malloc false\n");
//		exit(-1);
//	}
//
//	MergePartSort(arr, tmp, begin, end);
//
//	free(tmp);
//}
//
//int main()
//{
//	int arr1[] = { 1,5,2,10,3,4,8,9,5,3,1,5 };
//	Print(arr1, sizeof(arr1) / sizeof(int));
//	MergeSort(arr1, 0, sizeof(arr1) / sizeof(int) - 1);
//	Print(arr1, sizeof(arr1) / sizeof(int));
//	return 0;
//}

//归并排序非递归版本（从小到大排序）
//#include <stdio.h>
//#include <stdlib.h>
//void Print(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void MergeArr(int* arr, int* tmp, int left, int mid, int right)
//{
//	int begin1 = left;
//	int end1 = mid;
//	int begin2 = mid + 1;
//	int end2 = right;
//
//	int i = begin1;
//
//	while (begin1 <= end1 && begin2 <= end2)
//	{
//		if (arr[begin1] < arr[begin2])
//		{
//			tmp[i] = arr[begin1];
//			i++;
//			begin1++;
//		}
//		else
//		{
//			tmp[i] = arr[begin2];
//			i++;
//			begin2++;
//		}
//	}
//
//	while (begin1 <= end1)
//	{
//		tmp[i] = arr[begin1];
//		i++;
//		begin1++;
//	}
//
//	while (begin2 <= end2)
//	{
//		tmp[i] = arr[begin2];
//		i++;
//		begin2++;
//	}
//
//	for (int i = left; i <= right; i++)
//	{
//		arr[i] = tmp[i];
//	}
//}
//
//
//void MergeSortNonR(int* arr, int begin, int end)//归并排序非递归实现
//{
//	int* tmp = (int*)malloc(sizeof(int) * (end - begin + 1));
//	if (tmp == NULL)
//	{
//		printf("malloc false\n");
//		exit(-1);
//	}
//
//	int gap = 1;
//
//	while (gap < (end - begin + 1))
//	{
//		for (int i = 0; i <= end; i = i + 2 * gap)
//		{
//			int left = i;
//			int right = i + 2 * gap - 1;
//			int mid = (right + left) / 2;
//			if (right > end)
//			{
//				right = end;
//			}
//
//			MergeArr(arr, tmp, left, mid, right);
//		}
//
//		gap = gap * 2;
//	}
//
//}
//
//int main()
//{
//	int arr2[] = { 1,5,2,10,3,4,8,9,5,3,1,5 };
//
//	Print(arr2, sizeof(arr2) / sizeof(int));
//	MergeSortNonR(arr2, 0, sizeof(arr2) / sizeof(int) - 1);
//	Print(arr2, sizeof(arr2) / sizeof(int));
//
//	return 0;
//}
