#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//模拟strcpy函数
//void mystrcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = '\0';
//}
////
//void mystrcat(char x[], char y[])
//{
//	int i = 0;
//	while (x[i] != '\0')
//	{
//		y[i] = x[i];
//		i++;
//	}
//	y[i] = '\0';
//}
////
//void mystrcpy(char* dest, char* src)
//{
//	while(*dest++ = *src++)//\0的ASCII码为0，所以循环到字符串末尾时，*dest为0，循环结束。
//	{
//		;
//	}
//}
//char* mystrcpy(char* dest, char* src)
//{
//	char* p = dest;//保存 dest 的地址。这是为了在函数执行完后返回原始的目标地址，以便调用者能够知道字符串复制的开始位置。
//	assert(dest != NULL && src != NULL);//检查参数是否为空。
//	while(*dest++ = *src++)
//	{
//		;
//	}
//	return p;//返回原始的目标地址。方便实现链式访问。
//}

//模拟选择题
//int main()
//{
//	int input = 0;
//	printf("选择你的初始伙伴\n小火龙\t妙蛙种子\t杰尼龟\n");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("你选择了小火龙\n");
//	}
//	else if (input == 2)
//	{
//		printf("你选择了妙蛙种子\n");
//	}
//	else if (input == 3)
//	{
//		printf("你选择了杰尼龟\n");
//	}
//	else
//	{
//		printf("你选择独自旅行\n");
//	}
//	return 0;
//}

//判断奇偶数
//int main()
// {
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1) //奇数数学表达式为2k+1
// {
//		printf("%d 是奇数\n", a);
//	}
//	else 
// {
//		printf("%d 是偶数\n", a);
//	}
//	return 0;
//}

//switch分支语句
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");		
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//}
//如果逻辑需要，可以不写break，使多个case语句执行同一块代码。。
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
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("周末\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}

//goto语句
//int main()
//for()
//{
//   for()
//   {
//      if()
//      {
//         goto out;//跳转到标签out
//      }
//   }
// ...
//   out://标签
// ...
//}

//判断输入的字符是否为数字(也可以判断是否为大写或小写字母)
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)//在终端输入任意字符，按下Ctrl+Z结束输入，EOF表示文件结束符。
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

//指针的简单使用
//int main() {
//	int a = 10;
//	printf("%p\n",&a);//打印变量a的地址。
//	int* p = &a;//声明指针变量p，并将a的地址赋值给p；int说明p指向的对象是整型变量，*说明p是一个指针。
//	printf("%p\n",p);//打印指针变量p的地址。
//	*p = 20;//通过指针p修改a的值。
//  printf("%d\n",a);
//	return 0;
//}

//小技巧：
//int main() {
//	int a = 10;
//	if (5 = a);//错误 ，无法运行。这时候可以发现露漏了个等号。
//	return 0;
//}
//int main() {
//	int a = 10;
//	if (a = 5);//vs没有报错，仍能运行
//	return 0;
//}
//因此可见第一种写代码习惯更好；当然要不要把常量放在左边，得看右边不是变量

//求最大公约数
//int gcd(int m, int n)
//{
//    return n > 0? gcd(n, m % n) : m;//递归 + 三目运算符
//}
//
//int main()
//{
//	int  m = 0, n = 0, r = 0;
//	printf("请输入两个整数：");
//	scanf("%d %d", &m, &n);
//	r = m % n;
//	while (r!= 0) 
//	{
//		m = n;
//		n = r;
//		r = m % n;
//	}
//	printf("最大公约数为：%d", n);
// 
// 	printf("最大公约数为：%d", gcd(m, n));
//	return 0;
//}

//找出数组中最大的数
//int main()
//{
//	int arr[6] = { 19,23,3,15,8,15};
//	int max = arr[0];
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)//strlen 函数只能用来计算字符串的长度
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
//	printf("\n参竞赛拿实习  参竞赛拿实习  参竞赛拿实习  参竞赛拿实习  参竞赛拿实习  参竞赛拿实习  参竞赛拿实习  参竞赛拿实习\n");
//	printf("\n参竞赛拿实习  参竞赛拿实习  参竞赛拿实习  参竞赛拿实习  参竞赛拿实习  参竞赛拿实习  参竞赛拿实习  参竞赛拿实习\n");
//	printf("\n参竞赛拿实习  参竞赛拿实习  参竞赛拿实习  参竞赛拿实习  参竞赛拿实习  参竞赛拿实习  参竞赛拿实习  参竞赛拿实习\n");
//	}
//	return 0;
//}

//数组的复制与填充
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
//strcpy 是一个用于字符串复制的标准库函数。此行代码将 arr2 中的字符串复制到 arr1 中。执行此操作后，arr1 的内容变为 "hello world"，并且因为它足够大，所以不会出现溢出
//memset 是一个用于将内存块用指定值初始化的标准库函数。此行代码将 arr 中的前 12 个字符用 '0' 填充。执行此操作后，arr 的内容变为 "00"。

//九九乘法表
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

//计算数列1+2+3+...+n
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

//计算阶乘的和：n! = 1！+ 2！+ 3！+ ... + n!
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

//不创建临时变量，直接交换两个变量的值
//int main()
//{
//  //该方法涉及大数相加减时有溢出风险
//	int a = 10, b = 20;
//	a = a + b;//把a和b的值放到一块去
//	b = a - b;//(a+b)-b,实现了把a的值赋给b
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
//}//运算速度比常规方法慢，且不易理解。

//斐波那契数列的第N项
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n == 0)
//	{
//		printf("0.00");
//	}
//	else if (n <= 2)
//	{
//		printf("1.00");
//	}
//	else
//	{
//		double a = 1, b = 1, c = 0;//即使是int 转换为double 之类也可能会发生精度丢失；尤其要避免不同类型的变量参与运算。
//		while (n > 2)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			n--;
//		}
//		printf("%.2f", c);
//	}
//	return 0;
//}

//字典序排列
//这里我们引用了string.h库里的比较函数strcmp()和复制函数strpy()
//char a[201][201];//使用二维数组，每行单独存放一个字符串（在一维数组会导致字符串拆解，即abc和bac会被拆解为a,b,c,a,b,c然后再存放，a[0]索引的会是'a'而不是"abc"。）
//由于二维数组比一维数组结构更复杂，占用的栈空间也更大，所以尽量使用动态分配内存。
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main() {
//    int n;
//    scanf("%d", &n);
//
//    char (*a)[100] = malloc(n * sizeof(*a));
//    if (a == NULL)
//    {
//        perror("malloc error");
//        return 1;
//    }
//
//    char b[100]; // 临时数组
//
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%s", a[i]);
//    }
//
//    // 排序字符串
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = i + 1; j < n; j++)
//        {
//            if (strcmp(a[i], a[j]) > 0)
//            {
//                strcpy(b, a[i]);
//                strcpy(a[i], a[j]);
//                strcpy(a[j], b);
//            }
//        }
//    }
//
//    free(a); // 释放内存
//    return 0;
//}

//快速幂：二进制法
//long long quickPower(long long base, long long exponent)
//{
//	long long result = 1;
//	while (exponent > 0)
//	{
//		if (exponent & 1)
//		{
//			result *= base;
//		}
//		base *= base;
//		exponent >>= 1;
//	}
//	return result;
//}

//取余公式
//(a + b) % p = (a % p + b % p) % p
//(a - b) % p = (a % p - b % p) % p
//(a * b) % p = (a % p * b % p) % p	