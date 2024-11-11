﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>//stdio.h是一个标准输入输出头文件 #include用于引入头文件
#include <stddef.h>
/*提供了常用类型：
size_t：这是一个无符号整数类型，通常用于表示对象的大小（如数组的大小或内存分配的字节数）。许多标准库函数（如 malloc、strlen）的参数或返回值使用 size_t。
ptrdiff_t：这是一个带符号整数类型，用于表示两个指针之间的差值，通常用于循环和指针运算的场景。
提供了两个宏：
NULL：它是一个常量，用于表示空指针，虽然在 <stdio.h> 中也可以找到，但将其定义在 <stddef.h> 中是为了提高代码的可读性。
offsetof：宏函数，用于确定结构的某个成员到起始位置的偏移字节*/

//标准输入输出函数
//int main()//int 表示函数的返回值类型；所有的c语言程序都要包括main（）函数；c语言规定main函数是程序的入口,表示执行的起点。
//{
	//打印字符串
	//printf("Hello Zejun\n");//字符串面值或常量是括在双引号""中，而字符常量是括在单引号''中;特别的，空格也是字符
	//字符串的结束标志是空字符'\0'(一个转义字符），它不占用内存空间，一般隐藏在字符串的末尾，无需特别处理。

	//计算字数据类型的字节数
	//printf("%zu\n", sizeof(char)); //printf()函数是一个库函数，用于输出字符串到控制台；库函数的使用必须引入头文件。
	//printf("%zu\n", sizeof(int));//sizeof()函数用于计算变量或数据类型的字节数,返回值类型为size_t,打印时应该使用%zu。32位系统中size_t是unsigned int,64位系统中size_t是unsigned long long。
	//printf("%zu\n", sizeof(short));
	//printf("%zu\n", sizeof(float));
	//printf("%zu\n", sizeof(double));
	//printf("%zu\n", sizeof(long));
	//printf("%zu\n", sizeof(long long));

	//system("pause"); //system()用于运行系统命令，但仅限于Windows系统。pause函数表示让进程暂停直到信号出现
	//return 0;//return 0 可表示执行成功
//}

/*转义字符：将打印字符变为特殊含义的字符，如\n表示换行符、\t表示制表符、\b表示退格符、\r表示回车符等。如果要打印真正的反斜杠字符，则需要用两个反斜杠表示，如\\表示一个反斜杠。此外，转义字符算作一个字符，如\t的长度为1。*/

/*数据类型包括：
1整型类:
char字符数据型(以ASCII码存储,本质上是整型类)
int整型数据型
short短整型数据型
long长整型数据类型
long long更长的长整型数据型
2.浮点型类:
float浮点型数据型
double双精度浮点型数据型
long double长双精度浮点型数据型
浮点数在计算机中仍以二进制表示，但由于其表示方式，导致其精度受限。
3.指针型类:
int*
char*
float*
double*
void*
*/

//运算符演示
//int main()
//{
//	float a = 7 / 2.0;//除号两端都是整数，结果为整数;需要加.0来表示浮点数: 7 / 2 --> 3; 7 / 2.0 --> 3.5
//	printf("%.2f\n", a);//保留两位小数; .0f可以输出一个整数。
//	int b = 10 % 3;//取模操作符的两端都必须是整数
//	printf("%d\n", b);
//	return 0;
//}

//运算符
//int main()//算术运算符（+、-、*、/、%）与赋值运算符（=、+=、-=、*=、/=、%=、>>=、<<=、&=、^=、|=）
//{ 
	//int a = 0;//初始化
	//a = 10;//赋值
	//a += 10;//a = a + 10;
	//a -= 5;//a = a - 5;以此类推
	//printf("%d\n", a);
	
	//int b = 3 
	//int c = 0;
	//c = ++b;//先运算，再赋值。注意，这里b的值被改变了。
	//printf("%d\n", b);
	//printf("%d\n", c);
	
	//int c = (int) 3.14;//强制类型转换
	//printf("%d\n", c);//输出结果为3
//}
//应该尽量避免过于复杂的表达式，可以用括号来表明优先级或者进行拆分/简化。比如：
//a*b + c*d +e*f 和 c + --c * c 都是存在问题的表达式。像第二种表达式更甚，连编译器都很难理解（也即运算路径不唯一/不确定）（可以看到在不同的编译环境下输出结的结果也会不同），毫无可移植性可言

//关系运算符包括==、!=、<=、>=、<、>。
//逻辑运算符包括&&（与）、||（或）、!（非）
//单目运算符包括++（自增）、--（自减）、+（正号）、-（负号）、*（指针）、&（取地址）、sizeof（取字节数）、(type)（强制类型转换）、！（取反）、~（按位取反）
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

/*3) 条件运算符的嵌套：
int max = (a > b ? a : (b > c ? b : c));在这个例子中，条件运算符的嵌套从右到左进行评估。首先评估 b > c，如果这个条件为真，则返回 b，否则返回 c。然后再将得到的结果与 a 进行比较，最终得到 max 的值。即先运算最里层的条件表达式。*/

//&&运算符：左右两边的表达式都为真，则结果为真；否则结果为假。即布尔逻辑中的and运算。
//||运算符：左右两边的表达式有一个为真，则结果为真；否则结果为假。即布尔逻辑中的or运算。
//!运算符：取反，即表达式为真则结果为假，表达式为假则结果为真。即布尔逻辑中的not运算。
//? : 条件运算符：即if-else语句的简化形式。

//int main()
//{
//	int a = 0, b = 3, c = 4;
//	int i = a++ && ++b && c++;
//	printf("%d %d %d\n", a, b, c);//输出结果为1 3 4；先使用a，其值为0，假，不执行后面的表达式，即认为整个语句为假。称之为逻辑短路。
//	//也可以这么想：&&运算符必须要两边都为真才返回真，否则返回假。所以，当a为假时，后面的表达式不执行，直接返回假。
//
//	return 0;
//}

/*函数：
1.维基百科的定义为：子程序，是一个大型程序中的某部分代码，由一个或者多个语句块组成。它负责完成特定的功能，而且相较于其他代码，具备独立性
2.一般会有输入参数并有返回值，提高对过程的封装的细节的隐藏，这些代码通常被集成软件库
3.函数分为库函数和自定义函数
4.函数的实参（实际参数）是指在函数调用时传递给函数的具体值或变量。实参可以是常量、变量、表达式或其他函数的返回值。当函数被调用时，实参的值会被传递给相应的形参（形式参数），帮助函数完成其任务
5.形参只有在函数调用时才实例化（分配内存单元），当函数结束之后就自动销毁了。因此形参只在函数内有效。*/
//因为数组的不可复制性，所以无法编写数组类型的形参；数组名会自动转化为指针。

//设计的函数尽量单一，不与其他函数产生太多联系，即遵循“高内聚，低耦合”原则。如上面的判断函数，只执行判断功能，要使用的时候调用就可以了，打印的工作放在main函数里。
//如果耦合度过高（产生了太多关联），意味着一个函数出错就会牵连到其他更多的函数，需要排错修改的时间成本大大增加（除非你能确定写完之后绝对不用修改了）

//函数的返回值需要根据实际情况决定，如用二分法寻找有序数组中某个数时，若“找到了”就返回数的下标，则“找不到”的返回值不能设置为0，因为数组中第一个数的下标就是0。这时可以把“找不到”的返回值设置成 -1。

//数组传参实际上传的是一个指针变量（首个元素的地址），外部函数调用该数组的数时通过这个指针来访问。

// n++ 是后置++，如果写return n++，则先返回n的值再给n+1。

//使用指针可以在函数中修改实参的值。如：
//void swap(int *x, int *y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main()
//{
//	int a = 10, b = 20;
//	printf("Before swap: a = %d, b = %d\n", a, b);
//	swap(&a, &b);//调用时要用&传递地址，告诉外部函数要访问哪里。
//	printf("After swap: a = %d, b = %d\n", a, b);
//	return 0;
//}

/*函数调用分为两种
1.传值调用：在传值调用的过程中，形参只是局部变量，其初值直接使用函数括号内实参的值，运行时占另外的空间，不对实参造成影响
2.传址调用：在传址调用的过程中，形参和实参占用同一内存单元，因此在函数内对形参的修改会影响实参的值，使得函数内部可以直接操作函数外部的变量*/

#include <string.h>//string.h中提供了一些字符串处理函数，如strcpy()，strcmp(),strlen()等。
//不使用临时变量，计算字符长度。解释：
//int my_strlen(const char *str)//用指针接收地址；也可以写成数组的形式，如str[]。因为该函数只需要读取字符串，不需要修改字符串，所以用const修饰以保护str指针。
//{
//	int count = 0;//为了实现某个功能（比如这里的计数）而创建，用完就销毁的变量（局部变量），称为临时变量
//	assert(str!= NULL);//检查参数是否为空指针
//	while (*str != '\0')
//	{
//		count++;
//		str++;//直接使用++找下一个字符。注意，是str而不是*str。
//	}
//	return count;
//}
//实现：
//int my_strlen(const char *str)
//{
//	assert(str!= NULL);
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);//参数里不能写str++。使用str + 1是正确的做法，因为它只是计算出下一个字符的地址，而不改变str指针本身。这样，str在每次递归调用中仍然指向原始字符串的起始地址。
//	}
//	else
//		return 0;
//}
//int main()
//{
//  //printf("%d\n", my_strlen("abc"));
//	char arr[4] = "abc";
//	printf("%d\n", my_strlen(arr));//字符串和数组的元素都是连续存放的，因此它们传参都是传首元素的地址，通过这个地址就可以访问到首元素及其后面的各个元素。
//	return 0;
//}

//最好能有一个自己的代码库，这样想要实现什么相似的功能直接复制粘贴就可以了。

//链式访问：把一个函数的返回值作为另一个函数的参数。


//递归函数：1.要有可以结束递归的限制条件 2.每次执行之后越来越接近这个限制条件
//int Fact(int n)
//{
//	int ret = n;
//	if (n > 1)
//	{
//		ret *= Fact(n - 1);
//	}
//	return ret;//执行完最后一个函数后会返回上一个函数（用调试可以看到ret的值并非直接返回main函数而是上一个Fact函数）。 即“从哪来从哪回去！”。
//}
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//    printf("%d\n", ret);
//    printf("%d\n", Fact(n));
//	return 0;
//}
//复杂函数：如果函数里有很多复杂的代码和逻辑，定义成内联函数会导致代码变得很长，增加可执行文件的大小，并且可能降低执行效率。 递归函数：递归函数是自己调用自己，定义成内联函数会导致无限展开，编译器无法正确处理。
//递归函数缺点：1.时间复杂度高 2.递归层数越深，栈内存占用越大，越容易发生栈溢出易。
/*当循环条件任意找到时，应该避免使用递归。
* 例如上述代码段，只需要新增一个变量i，将递归里需要栈区保存的数据交给程序自身来保存，就能完成递归向非递归的转化了
如果问题过于复杂，直接用非递归一时半会想不出来解决的算法，而且用递归解决要消耗过多的堆栈，或者问题规定了要用非递归来解决，那么可以先将问题用递归的大事化小的思维解出来递归算法，再然后将递归算法转化为非递归算法即可。*/

/*“递归里需要栈区保持的数据交给程序自身来保存”指的是将递归过程中需要存储的状态信息用变量在外层函数中保存，而不是利用系统的调用栈来维护这些状态。
在递归过程中，每次函数调用都会占用栈空间，用于保存局部变量和返回地址。*/

/*数组是 C 语言中一种用于存储多个同类型数据的集合。它可以看作是一个固定大小的连续内存区域，允许通过索引来访问和操作其中的元素。
数组传参可以写成指针传参和数组名传参两种形式。数组名传参本质上是传了首元素的地址（1），而地址要用指针来接收，所以看似写了个数组在括号里，实际上那是一个指针变量。
因而不可以在外部函数求出数组的长度，应该先求好再传给外部函数。（参考storage box中的冒泡排序）

（1）有两个例外：sizeof(arr)里的数组名表示整个数组的大小；&数组名，取出的是整个数组的地址*/

//逆序打印数组元素：
//int main()
//{
//	int are [] = {1,2,3,4,5,6,7,8,9,10};
//	int sz =sizeof(are)/sizeof(0);//总字节大小除以某一个元素字节大小，得到数组元素个数;sizeof是一个操作符，不需要引入头文件即可使用。这里的结果是sz = 10。
//	int i = 0;
//	for (i = sz - 1; i >= 0; i--)
//	{
//		printf("%d ", are[i]);//这里的[]是引用下标操作符
//	}
//	return 0;
//}

//下标的引用：
//int main()
//{
//	int arr[10] = { 0 };
//	arr[5] = 11;
//	5[arr] = 2;
//	printf("%d\n", arr[5]);//输出结果为2
//	return 0;
//}
//arr[5]-->*(arr+5)-->*(5+arr)-->5[arr];
//arr就是数组首元素的地址，arr+5就是跳过前5个元素，指向第6个元素。
//*（arr+5）就是第6个元素。

//二维数组的初始化：
//int main()
//{
//	int arr1[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };//两个[]分别表示行数和列数
//	int arr2[ ][4] = { 1,2,3,4,5,6,7,8 };//可以省略行数,但列不能省略
//	int arr3[3][4] = { {1,2},{3,4},{5,6} };//可以用花括号将各行元素括起来
//	//用调试->监视窗口可直接看到数组里存放的元素。
//	return 0;
//}
//二维数组每一行都可以看作是一个一维数组；二维数组的数组名也是首元素的地址，传参传的是第一行的地址。
//计算二维数组的行和列数：
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int rows = sizeof(arr) / sizeof(arr[0]);//行数
//	int cols = sizeof(arr[0]) / sizeof(arr[0][0]);//列数
//	printf("rows = %d, cols = %d\n", rows, cols);
//	return 0;
//}

//出现乱码（昆拷斤烫烫烫）的原因：编码格式不同。电脑根据标识符的二进制编号来查找并显示字符的，同一个编号在不同编码方式里代表的字符不同，造成了乱码。
//比如编译器用的是UTF-8，而记事本默认的编码方式是GBK，用编译器编完然后用记事本打开，就会出现昆拷斤烫烫烫的情况。

/*整数的二进制表示有三种：原码，补码，反码。
正数的原码、补码、反码相同，负数的原码、补码、反码需要计算。
举例：
7（整型，占4个字节）
原码：00000000|00000000|00000111
反码：00000000|00000000|00000111
补码：00000000|00000000|00000111
-7
原码：10000000|00000000|00000111
反码：11111111|11111111|11111000（负数的反码是原码取反（最高位保持1）
补码：11111111|11111111|11111001（负数的补码是反码加1）
整数在内存中以补码形式存储。原因在于，使用补码可以将符号位和数值域统一处理，加法和减法运算也可以统一处理（CPU只有加法器）。
此外，补码与原码相互转换，其运算过程是相同的，不需要额外的硬件电路。
符号位：在处理二进制数据时用来确定数据的正负的一位
*/

/*位移操作符
左移操作符：<<，是将一个数的各二进位全部左移若干位，移出位丢弃，空缺位补0。
右移操作符：>>，是将一个数的各二进位全部右移若干位，移出位丢弃，空缺位或一律补0（逻辑右移），或保持符号位（正数依然为正数，负数依然为负数）（算术右移）。实际情况依据编译器决定。*/

//int main()
//{
//	int a = -7;
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}
//vs采取的是算术右移。

//位运算符：
//&：按位与，两个位都为1时，结果才为1，否则为0。
//|：按位或，两个位有一个为1时，结果为1，否则为0。
//^：按位异或，两个位不同时为1时，结果为1，否则为0。特殊：a ^ a = 0，a ^ 0 = a.
//~：按位取反，反转所有位，即0变1，1变0。

//int main()
//{
//	int a = 5;
//	int b = 3;
//	int c = a & b;
//	printf("%d\n", c);
//	return 0;
//}
//这里的结果是1，因为5的二进制表示为101，3的二进制表示为011，按位与后得到1，即101 & 011 = 001。

//注意：1.上面说的位都是指二进制位
//2.位移操作符和位运算符操作对象都是整数，且位移操作符右侧不能是负数。

//整型提升：
//在表达式计算时，各种整形首先要提升为int类型，这是因为CPU内整型运算器(ALU)的操作数的字节长度一般就是int的字节长度，同时也是CPU的通用寄存器的长度。

//例如，3个char类型的变量 a = 3,b = 127，c =a + b,结果为c = -126。这种现象出现的原因是发生了整型提升与截断。
//解析：3的补码00000000000000000000000000000011，把数字3交给a时，因为a的类型是char（即只有一个字节），只能存储8个比特位，于是只截取后8位，得到00000011。
//127同理，截断后得到01111111，再把它和00000011相加。
// 在执行运算时进行了整型提升，由于都位char类型所以有符号位，提升时补最高位数字。（a和b最高位都是0，所以一直补零直到补够32位）
//运算得到00000000 00000000 00000000 10000010。
//又因为c是char类型，存储时发生截断，得到10000010。
//但在打印时是以int类型输出，再次进行整型提升（c最高位是1，所以补1直到补够32位）（得到的是补码）
//把补码转化为原码进行打印。转化得到的原码为：10000000 0 0000000 00000000 01111110。

//c语言中规定：char的长度<= short的长度<= int的长度,这意味着short和int可能长度相等，这种情况下short只能提升为unsign int。
//有符号数的范围（32位）：-2147483648~2147483647，无符号数的范围（32位）：0~4294967295。%u表示无符号数。

//c语言的 + 作为单目操作符时，一个主要的作用是进行整型提升。例如:
//char a = 3;
//sizeof(a) 得 1;
//sizeof(+ a) 得 4。-a 也一样。

//算术转换：
//在表达式中，不同类型的数据进行运算时，会自动进行类型转换，且是向上转换，即小类型向大类型转换。
//例如：int a = 10;
//float b = 3.14;
//double c = a + b;
//c的值为13.14，因为a是int，b是float，所以a向上转换为float，然后进行运算。

