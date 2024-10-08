#define _CRT_SECURE_NO_WARNINGS
//所有的c语言程序都要包括main（）函数;c语言规定main函数是程序的入口,表示执行的起点。
//和/*...*都是注释符
//printf()函数是一个库函数，用于输出字符串到控制台；库函数的使用必须引入头文件。
//stdio.h是一个标准输入输出头文件 #include用于引入头文件
//return 0 可表示执行成功
//标准的函数写法
#include <stdio.h>
#include <stddef.h>
//int are [9] = {1,2,3,4,5,6,7,8,9};//数组是 C 语言中一种用于存储多个同类型数据的集合。它可以看作是一个固定大小的连续内存区域，允许通过索引来访问和操作其中的元素。
//int daying()//函数声明
//{
//	int i=0;
//	while (i < 9)
//	{
//		printf("%d ", are[i]);//输出数组元素
//		i++;
//	}
//  printf("%d\n",sizeof(are)/sizeof(0));//总字节大小除以某一个元素字节大小，得到数组元素个数
//}//函数定义
/*如果编译器在遇到 daying() 的调用时还没有看到该函数的定义，可能会导致未定义的行为。可以将函数定义放在调用之前，也可以在main（）前再次声明函数，但最好不要在程序中重复声明函数，因为这样会导致代码冗余。*/

//int main()//int 表示函数的返回值类型
//{
	//printf("Hello Zejun\n");//字符串面值或常量是括在双引号""中，而字符常量是括在单引号''中;特别的，空格也是字符
	//字符串的结束标志是空字符'\0'*1，它不占用内存空间，但一般隐藏在字符串的末尾，无需特别处理。
	//数据类型
	//printf("%zu\n", sizeof(char)); //zu表示输出siozef的返回值;char是字符型类型
	//printf("%zu\n", sizeof(int));//
	//printf("%zu\n", sizeof(short));
	//printf("%zu\n", sizeof(float));
	//printf("%zu\n", sizeof(double));
	//printf("%zu\n", sizeof(long));
	//printf("%zu\n", sizeof(long long));
	//daying(); //调用函数
	//system("pause"); pause函数表示让进程暂停直到信号出现
	/*return 0;
}*/
//sizeof()函数用于计算变量或数据类型的字节数，而strlen()函数用于计算字符串的长度。
//system()用于运行系统命令，但仅限于Windows系统。

/*数据类型包括
char字符数据型
int整型数据型。字符本质上也是整型
short短整型数据型
float浮点型数据型
double双精度浮点型数据型
long长整型数据类型
long long更长的长整型数据型*/

/*1. 转义字符：将打印字符变为特殊含义的字符，如\n表示换行符、\t表示制表符、\b表示退格符、\r表示回车符等。如果要打印真正的反斜杠字符，则需要用两个反斜杠表示，如\\表示一个反斜杠。此外，转义字符算作一个字符，如\t的长度为1。*/

//int main()
//{
//	float a = 7 / 2.0;//除号两端都是整数，结果为整数，需要加.0来表示浮点数
//	printf("%.2f\n", a);//保留两位小数
//	int b = 10 % 3;//取模操作符的两端都必须是整数
//	printf("%d\n", b);
//	return 0;
//}

//运算符
//int main()//算术运算符（+、-、*、/、%）与赋值运算符（=、+=、-=、*=、/=、%=）
//{ 
	//int a = 0;//初始化
	//a = 10;//赋值
	//a += 10;//a = a + 10;
	//a -= 5;//a = a - 5;以此类推
	//int b = 0;
	//b = a++;//先赋值，再运算
	//printf("%d\n", a);
	//输出结果为b=10，a=15；a--同理
	//b = ++a;//先运算，再赋值
	//printf("%d\n", b);
	//printf("%d\n", a);
	//输出结果为b=16，a=16；--a同理
	//int c = (int) 3.14;//强制类型转换
	//printf("%d\n", c);//输出结果为3
//}

//关系运算符包括==、!=、<、>、<=、>=
//逻辑运算符包括&&（与）、||（或）、!（非）
//单目运算符包括++（自增）、--（自减）、+（正号）、-（负号）、*（指针）、&（取地址）、sizeof（取字节数）
//条件运算符也称为三目运算符，即条件表达式 ?  : ，它根据条件表达式的值（真或假）来决定表达式的值。
/*int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d", &a, &b);
	c = a > b ? a : b;//按a和b的顺序填表达式就行了；可用于比较两个数的大小
	printf("%d\n", c);
	//逗号表达式，即将多个表达式用逗号隔开，特点是从左到右计算，并返回最后一个表达式的值。
	int d = (c = a + b, b = c + a, b + c);
	printf("%d\n", d);
}*/
/*3) 条件运算符的结合方向是自右至左。例如：
a > b ? a : c > d ? c : d;
应理解为：
a > b ? a : (c > d ? c : d);
这也就是条件表达式嵌套的情形，即其中的表达式又是一个条件表达式。*/


/*函数：
1.维基百科的定义为：子程序，是一个大型程序中的某部分代码，由一个或者多个语句块组成。它负责完成特定的功能，而且相较于其他代码，具备独立性
2.一般会有输入参数并有返回值，提高对过程的封装的细节的隐藏，这些代码通常被集成软件库
3.函数分为库函数和自定义函数
4.函数的实参（实际参数）是指在函数调用时传递给函数的具体值或变量。实参可以是常量、变量、表达式或其他函数的返回值。当函数被调用时，实参的值会被传递给相应的形参（形式参数），帮助函数完成其任务
5.形参只有在函数调用时才实例化（分配内存单元），当函数结束之后就自动销毁了。因此形参只在函数内有效*/

/*函数调用分为两种
1.传值调用：在传值调用的过程中，形参只是局部变量，其初值直接使用函数括号内实参的值，运行时占另外的空间，不对实参造成影响
2.传址调用：在传址调用的过程中，形参和实参占用同一内存单元，因此在函数内对形参的修改会影响实参的值，使得函数内部可以直接操作函数外部的变量*/

//最好能有一个自己的代码库，这样想要实现什么相似的功能直接复制粘贴就可以了。