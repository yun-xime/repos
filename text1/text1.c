#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//请你打印一个九九乘法表
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


//读输入
//给你一个3字符的字符串S，它是由[1,9]内的整数a，b及字符x按照axb顺序排列得到的。请你计算a和b的乘积。
// int main()
//{
//    int a, b;
//    scanf("%d x %d", &a, &b);//确保输入符合“axb”的格式
//    printf("%d\n", a * b);
//    return 0;
//}


//计算n的阶乘：1 * 2 * 3 * 4 *... * n = n!
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;//与ret = ret * i 等价；把每次执行得到的i的值放到ret变量中，并累乘起来。
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//运算过程：1.ret 与 i 相乘得1*1=1，并赋值给 ret存储起来，i++；2.ret 与 i 相乘得1*2=2，，i++；3.ret 与 i 相乘得1*2*3=6，i++；...；最后得到n的阶乘。
//递归算法可以更简洁地处理这个过程。
//int Fact(int n)
//{
//	int ret = n;
//	if (n > 1)
//	{
//		ret*=Fact(n - 1);
//	}
//	return ret;
//}//递归函数不能定义为内联函数。复杂函数：如果函数里有很多复杂的代码和逻辑，定义成内联函数会导致代码变得很长，增加可执行文件的大小，并且可能降低执行效率。 递归函数：递归函数是自己调用自己，定义成内联函数会导致无限展开，编译器无法正确处理。
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Fact(n));
//	return 0;
//}

// //计算1！+ 2！+ 3！+ ... + 10!
//int main()
//{
//	int i = 1;
//	int ret = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		int j = 1;
//		int f = 1;
//		for (j = 1; j <= i; j++)
//		{
//			f *= j;
//		}
//		ret += f;//把得到的阶乘放到ret变量中，并累加起来。
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//计算1！+ 2！+ 3！+ ... + n!
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
//	printf("请输入一个整数n：");
//	scanf("%d", &n);
//	if (n < 0)
//	{
//		printf("输入的整数不能为负数！\n");
//		return 0;
//	}
//	for ( i = 1; i <= n; i++)
//	{
//		ret += Fact(i);
//	}
//	printf("%lld\n", ret);
//	return 0;
//}

//也可以嵌套递归函数：
//long long Fact(int n)
//{
//	if (n == 0)
//	{
//		return 1;
//	}
//	return n * Fact(n - 1);
//}
//long long SumFact(int n)
//{
//	if (n == 0)
//	{
//		return 0;
//	}
//	return SumFact(n - 1) + Fact(n);
//}
//int main()
//{
//	int n = 0;
//	int i = 0;
//	long long ret = 0;
//	printf("请输入一个整数\n：");
//	scanf("%d", &n);
//	if (n < 0)
//	{
//		printf("输入的整数不能为负数！\n");
//		return 0;
//	}
//	long long result = SumFact(n);//把SumFact函数的返回值放到result存储起来
//	printf("%lld\n", result);
//	return 0;
//}

//循环
//地震的震级是地震释放的能量的对数比。已知每次震级增加1，能量就会增加大约32倍。在这里，我们假设每次震级增加1时，能量会准确地增加32倍。在这种情况下，震级为A的地震的能量是震级为B的地震的多少倍？
//约束条件：3<=B<=A<=9,且A和B均为整数,使用scanf函数和循环语句。
//int main()
//{
//	int A, B;
//	scanf("%d %d", &A, &B);
//	long long energy = 1;
//	int i;
//	for (i = B; i <A; i++)//循环变量 i 从 B 开始，每次循环 i 增加 1，直到 i 不再小于 A。这个循环的作用是计算从震级 B 到震级 A - 1 每增加一个震级，能量都要乘以 32。
//
//	{
//		energy *= 32;
//	}
//	printf("%lld\n",energy);
//	return 0;
//}
//不能使用（A-B)*32，因为题目所需要的是一个等比数列，而不是等差数列。

//在 C 语言中可以使用 long long 类型以避免溢出
// 现在需要采购一些苹果，每名同学都可以分到固定数量的苹果，并且已经知道了同学的数量，请问需要采购多少个苹果？
//
//输入格式
//输入两个不超过10^9的正整数，分别表示每人分到的数量和同学的人数。
//
//输出格式
//一个整数，表示答案。保证输入和答案都在 int 范围内的非负整数。
//int main()
//{
//	long long a = 0;
//	long long  b = 0;
//	scanf("%lld %lld", &a, &b);
//	printf("%lld\n", a * b);
//	return 0;
//}

//多组样例
//给你N对整数，(A1,B1),(A2,B2),...,(AN,BN)。对于每个i=1,2,...,N，输出Ai+Bi。
//约束条件：输出N行。对于i=1,2,...,N，第N行应包含Ai+Bi。1<=N<=1000,Ai大于等于-10^9,Bi小于等于10^9。
//#define MAX_N 1000//定义了一个常量MAX_N，其值为1000。这个常量用于限制数组的大小，即可以输入的整数对的最大数量为1000。
//int main()
//{
//    int N;
//    long long A[MAX_N], B[MAX_N];//声明了两个数组A和B，每个数组最大可存储MAX_N（即1000）个long long类型的数字。这两数组分别用于保存输入的两个整数。
//    scanf("%d", &N);//使用scanf函数从标准输入中读取一个整数，并将其存入变量N。这个值表示后续将要输入的整数对的数量。
//    for (int i = 0; i < N; i++)//循环变量i从0开始，每次循环i增加1，直到i不再小于N。这个循环的作用是读取N个整数对，并将其存入数组A和B。
//    {
//        scanf("%lld %lld", &A[i], &B[i]);//使用scanf函数从标准输入中读取两个整数，并将其存入数组A和B的第i个元素。
//    }
//    for (int i = 0; i < N; i++)//循环变量i从0开始，每次循环i增加1，直到i不再小于N。这个循环的作用是输出数组A和B的第i个元素之和。
//    {
//        printf("%lld\n", A[i] + B[i]);
//    }
//    return 0;
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

//猜数字游戏
//#include <stdlib.h> //for RAND_MAX
//#include <time.h>//for time()
//void menu()
//{
//	printf("*********************************************************\n");
//	printf("*********************    1. p l a y    ******************\n");
//	printf("*********************    2. e x i t    ******************\n");
//	printf("*********************************************************\n");
//}
//
//void game()
//{
//	RAND_MAX;//最大值为32767
//	int ret = rand()%100+1;//rand()函数用来生成一个随机整数。rand() % 100 的作用是将 rand() 生成的随机数对100取余。取余操作会返回一个范围在 0 到 9100之间的整数。这是因为 a % b 会返回 a 除以 b 的余数，而余数总是小于 b
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
//		case 2:
//			printf("已退出");
//			break;
//		default:
//			printf("错误，请重新输入");
//			break;
//		}
//	} while (choice != 2);//当choice不等于2时执行循环
//    return 0;
//}

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