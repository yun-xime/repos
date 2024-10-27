#define _CRT_SECURE_NO_WARNINGS //取消安全警告
#include <stdio.h>
#include <string.h>

/* 变量和常量
变量分为：局部变量——在函数内部定义的变量，函数调用结束后自动释放；
全局变量——在函数外部定义的变量，在整个程序中都可以访问；
静态变量——在函数内部定义的变量，在函数调用结束后依然存在，直到程序结束；
外部变量——在函数外部定义的变量，在整个程序中都可以访问，但只能在函数内部使用。*/
//局部变量和全局变量的名称相同时，局部变量会覆盖全局变量

/*变量的生命周期
局部变量——在函数调用结束后自动释放；
全局变量——在程序结束后自动释放；
即变量的作用域决定了变量的生命周期。*/
//void声明的函数没有返回值
//void txet() {
//	int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main() {
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		txet();
//	}
//	txet();
//	return 0;
//}
//以上体现了函数的作用域。函数内的变量a的生命周期只在函数内有效，txet()函数执行完毕后，变量a的生命周期结束并被销毁，再次调用txet()函数时，变量a的生命周期又重新开始。
//static修饰的变量是静态变量。本质上static的修饰改变了变量的存储位置，使得变量的生命周期延长到程序结束。
//当static修饰全局变量时，全局变量的外部链接属性变为内部链接，外部文件无法通过extern关键字来访问该变量。
//函数也具有外部链接属性，且可以被static修饰。
/*变量的存储位置
变量的存储位置决定了变量的读写速度，变量的存储位置又决定了变量的生命周期。
栈：局部变量，形参和返回值的存储位置，由编译器自动分配和释放；
堆：动态分配的内存，由程序员使用malloc函数来申请，free函数来释放；
静态区：全局变量和static变量的存储位置，由编译器分配和释放。*/

//读写速度：磁盘<内存<高速缓存<寄存器；register修饰变量时会暗示编译器将变量存储在寄存器中，但这只是早期的优化手段，现代编译器会自动选择最适合的存储位置。（因此该修饰会被大多数编译程序自动忽略）

/*常量：
存储在常量区，在程序运行时不可修改。
字面常量：在程序中直接写的值，如int a = 10;
符号常量：即由程序员定义的常量，如#define PI 3.14159265358979323846或const int MAX_SIZE = 100;*/
//const修饰的变量可以被指针修改，因此被称为常变量（即只读变量）（不等于常量！）。
//define定义的是标识符常量，如上面的PI就被定义为标识符（标识一个符号，相当于名字）

//演示：
//#define www "www.baidu.com" 
//int main()
//{
//	printf("%s\n", www);//
//	return 0;
//}

//声明只声明变量的类型和名字，而定义则是申请内存空间并赋初值。
//创建常量不会开辟空间；当使用某类型的常量创建变量时才会申请内存空间，如上面的c就存放了RED的值。

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
//注意：循环语句中，break和continue后面的语句都不会被执行，而return语句会终止整个函数的执行。

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

//结构体是一种用户自定义的数据类型，它由若干个成员变量组成，每个成员变量都有自己的类型和名称。结构体可以包含标量、数组、指针甚至是其他结构体。
///*struct student
//{
//	char name[20];
//	int age;
//	char sex;
//}s1, s2;*///这里声明了两个全局结构体变量
//struct student
// {
//	char name[20];
//	int age;
//	char sex;
//	char address[50];//此处应改为char address[50];以存储字符串
//};
//
//void print(struct student* s1)
// {
//	printf("%s, %d, %c, %s\n", s1->name, s1->age, s1->sex, s1->address);//struct student* s1 是参数，其中 struct student* 表示这个参数是一个指向 student 结构体的指针。
//}//结构体指针变量->成员名表示通过指针访问结构体的成员变量。
// 
//int main() {
//	struct student s1 = {"Tom", 20, 'M', "Beijing"};//结构体变量s1的初始化。
//	printf("%s, %d, %c, %s\n", s1.name, s1.age, s1.sex, s1.address);
//	print(&s1);//调用print函数，传入结构体变量s1的地址。
//	printf("%p\n", &s1);//打印结构体变量s1的地址。
//	return 0;
//}

//结构体变量的声明和初始化：
//struct 结构体名 变量名;
//结构体变量的访问：变量名.成员名
//结构体变量的地址：&变量名
//结构体变量的赋值：变量名 = 结构体变量
//结构体变量的初始化：变量名 = {成员1值, 成员2值, ……};

/*指针：
1.为方便内存的管理和访问，将内存分为一个个最小单元（每个单元仅有一个字节大小），每个单元都有一个地址编号，称为指针（固定值）。
2.口头语说的指针通常是指针变量，是一个用于存放地址的变量（可变值）。*/

/*指针变量的大小由计算机的地址总线宽度决定。地址总线的宽度影响了计算机的寻址能力，即CPU可以直接访问的内存空间大小。
在32位系统中，地址总线宽度为32位，因此可以寻址的最大内存空间是4GB（2的32次方），所以一个指针变量需要4字节（32位）的空间来存储。
相应地，在64位系统中，地址总线宽度为64位，一个指针变量需要8字节的空间来存储。*/

//x86->32位系统，x64->64位系统。

//指针类型的意义：
//int main()
//{
//	int a = 0x11223344;//两个16进制位表示一个字节，故a的大小为4字节。
//	//如上，1 1 2转换为二进制就是0001 0001 0010。
//	
//	//int* pa = &a;
//	//*pa = 0;//可以在调试->窗口->内存中看到，a的地址被改为0x00000000。
//
//	char* pc = (char*)&a;
//	*pc = 0;//可以看到，a的地址只有两个数被改变了。因为char类型只占一个字节
//	return 0;
//}
//结论：指针类型决定了指针变量可以访问几个字节。
//显而易见的，指针类型也决定了指针+-1操作的时候，跳过几个字节。