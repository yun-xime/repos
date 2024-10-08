#define _CRT_SECURE_NO_WARNINGS //取消安全警告
// 变量和常量
/*变量分为：局部变量——在函数内部定义的变量，函数调用结束后自动释放；
全局变量——在函数外部定义的变量，在整个程序中都可以访问；
静态变量——在函数内部定义的变量，在函数调用结束后依然存在，直到程序结束；
外部变量——在函数外部定义的变量，在整个程序中都可以访问，但只能在函数内部使用。*/
//局部变量和全局变量的名称相同时，局部变量会覆盖全局变量，但不建议这么做。

#include <stdio.h>
#include <string.h>

//int add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{   //初始化
//	int a = 0;
//	int b = 0;
//	//输入两个整数
//	scanf("%d %d", &a, &b);//scanf用于从用于从标准输入（通常是键盘）读取数据;&是取地址符，这里表示将输入的数值赋给变量a和b
//	//求和
//	int sum = add(a, b);//调用函数add，并将a和b作为参数传入
//	//输出结果
//	printf("%d\n", sum);//"%d"是一个格式说明符(又称占位符)，这里表示输出整数；参数sum的值将被插入到%d中
//	/*printf(test());*/
//	return 0;
//}
////scanf_s,能防止缓冲区溢出攻击，但该函数是vs编译器自己提供的函数，非标准c语言函数，其他编译器可能不支持。
////scanf虽然存在安全隐患，但在可移植性上更胜一筹。
//
//extern char ch;声明外部变量ch
//int test()
//{
//	printf("%c\n", ch);//"%c"是一个格式说明符，表示输出字符；使用外部变量ch
//}

/*变量的生命周期
局部变量——在函数调用结束后自动释放；
全局变量——在程序结束后自动释放；
即变量的作用域决定了变量的生命周期。*/
/*常量：
字面常量：在程序中直接写的值，如int a = 10;
符号常量：即由程序员定义的常量，如#define PI 3.14159265358979323846或const int MAX_SIZE = 100;*/
//const修饰的变量被保护，不能二次赋值，但可以被指针修改，因此被称为常变量（即只读变量）（不等于常量！）。
//define定义的是标识符常量，如上面的PI就被定义为标识符（标识一个符号，相当于名字）

//#define www "www.baidu.com" 
//int main()
//{
//	printf("%s\n", www);//
//	return 0;
//}

//枚举常量是一组可以列举的常量==>枚举类型
//枚举类型是一种数据类型，它定义了一组命名的整型常量，如：
//enum Color { RED, GREEN, BLUE };//定义了三个枚举常量RED、GREEN、BLUE
//int main()
//{
//	enum Color c = RED;
//	printf("%d\n", c);
//	return 0;
//}
//创建变量的本质是申请内存空间，因此变量的声明和定义是分开的，声明只声明变量的类型和名字，而定义则是申请内存空间并赋初值。
//而创建常量不会开辟空间；当使用某类型的常量创建变量时才会申请内存空间，如上面的c即存放了RED的值。
//
//char bbb[] = "abc";
//int main()
//{
//    size_t len = strlen(bbb);
//    printf("%zu\n",len);
//    printf(' ');
//    return 0;
//}

//if分支语句
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

//奇数数学表达式为2k+1;下面演示如何判断一个数是否为奇数：
//int main() {
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1) {
//		printf("%d 是奇数\n", a);
//	}
//	else {
//		printf("%d 是偶数\n", a);
//	}
//	return 0;
//}//if语句括号内是表达式，其值为1时执行该语句块，值为0时跳过该语句块。

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
//上面两个switch语句告诉我们：1.switch语句的执行顺序是从上到下，遇到第一个匹配项就执行该项，直到遇到break语句。
//2.如果逻辑需要，可以不写break，使多个case语句执行同一块代码。
//3.如果所有case都不能匹配，则执行default语句块。

//while循环语句
//int main()
//{
//    int i = 0;
//    while (i < 10)
//    {        if (7 == i)
//        {
//            continue;
//        }
//        printf("%d ", i);
//        i++;
//        if (5 == i)
//        {
//            break;
//        }
//        
//    }
//    return 0; 
//}
//brea是永久地终止当前循环，continue立即结束本次循环并判断是否进行下一次循环。
//int main()
//{
//    int i = 0;
//    while (i <=10)
//    {
//        i++;
//        if (5 == i) {
//            continue;
//        }
//        printf("%d ", i);
//    }
//}
//输出1 2 3 4 6 7 8 9 10 11，即跳过5。

//getchar函数和清空输入缓冲区
//int main()
//{
//	char password[20];
//	printf("请输入密码：");
//	scanf("%s", password);
//	int abc = 0;
//	while ((abc = getchar()) != '\n') {
//	}//getchar()函数从标准输入（通常是键盘）读取“一个”字符，并将其存储在变量abc中，直到遇到换行符为止。该处的while循环用于清空输入缓冲区。
//	printf("请确认密码(Y/N):>");
//	int ret = getchar();
//	if ('Y' == ret)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}

//打印奇偶数
//int main() {
//	int num = 0;
//	while(num < 100) 
//	{
//		if(num % 2 == 0)
//			printf("%d ", num);
//		num++;
//	}
//	
//   	int i = 1;
//		while (i <= 100)
//		{
//			printf("%d ", i);
//			i += 2;
//	     }
//}
//两种写法都可以，而第二种则更巧妙且简洁。

//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)//在终端输入任意字符，按下Ctrl+Z结束输入，EOF表示文件结束符。
//	{
//		if (ch < '0' || ch>'9') //判断输入的字符是否为数字
//		{
//			continue;
//
//		}
//		putchar(ch);
//	}
//	return 0;
//}

//for循环语句 for(初始化表达式; 循环条件表达式; 调整表达式)
//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//for循环语句的初始化表达式只执行一次，循环条件表达式用于判断循环是否继续，调整表达式用于更新循环变量的值。
//for的嵌套：
//int main()
//{
//    int i=0,
//    int j=0;
//	for (; i < 3; i++)
//	{
//		for (; j <3; j++)
//		{
//			printf("he\n");
//		}//输出三个he
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("he\n");
//		}//输出六个he
//	}
//	return 0;
//}
//如果for循环的初始化表达式省略，当这个函数执行完毕并再次被调用，变量的值会自动恢复到上一次循环的终止值而不会初始化。即该变量变成了静态变量。（静态变量的值存储在静态数据区，即使函数返回，它的值也保持不变）

//for语句支持两个循环变量，如：
//int main()
//{
//	for (int i = 1, j = 10; i <= 10 && j >= 1; i++, j--)//i++和j--同时执行
//	{
//		printf("%2d %2d\n", i, j);
//	}
//	return 0;
//}

//do-while循环语句 do{循环体}while(循环条件表达式),该语句至少执行一次循环体。
//do-while可以用实现多次输入，如：
//int main()
//{
//	int num = 0;
//	char choise = 'y';
//	do
//	{
//		printf("请输入一个数字：");
//		scanf("%d", &num);
//		printf("你输入的数字是：%d\n", num);
//		printf("是否继续输入(Y/N)：");
//		scanf(" %c", &choise);
//	} while (choise == 'Y' || choise == 'y');
//	return 0;
//}

//goto语句可以跳转到程序中的任意位置，但不建议使用，因为它容易造成程序的混乱。但某些场景还是需要用到goto语句，如深度嵌套循环中需要跳出循环的情况。
//int main()
//for()
//{
//   for()
//   {
//      if()
//      {
//         goto out;
//      }
//   }
// ...
//   out:
// ...
//}

