#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//typedef unsigned int uint;//typedef用法为：typedef 原名 新名，在这里，typedef unsigned int uint表示将unsigned int类型重新命名为uint。
//typedef struct node {
//	int data;
//	struct node* next;//定义一个节点，包含数据域data和指针域next。
//}node;
////struct的作用是定义一个结构体
//int main() {
//	node n;//声明一个节点变量n.
//}

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
//以上体现了函数的作用域，函数内的变量a的生命周期只在函数内有效，txet()函数执行完毕后，变量a的生命周期结束并被销毁，再次调用txet()函数时，变量a的生命周期又重新开始。
//static修饰的变量是静态变量。本质上static的修饰改变了变量的存储位置，使得变量的生命周期延长到程序结束。
//当static修饰全局变量时，全局变量的外部链接属性变为内部链接，外部文件无法通过extern关键字来访问该变量。
//函数也具有外部链接属性，且可以被static修饰。

//读写速度：磁盘<内存<高速缓存<寄存器；register修饰变量时会暗示编译器将变量存储在寄存器中，但这只是早期的优化手段，现代编译器会自动选择最适合的存储位置。（因此该修饰会被大多数编译程序自动忽略）

//int main() {
//	int a = 10;
//	printf("%p\n",&a);//打印变量a的地址。
//	int* p = &a;//声明指针变量p，并将a的地址赋值给p；int说明p指向的对象是整型变量，*说明p是一个指针。
//	printf("%p\n",p);//打印指针变量p的地址。
//	*p = 20;//通过指针p修改a的值。
//	printf("%d\n",a);//打印a的值。
//	return 0;
//}//输出结果a=20(指针变量的作用是存放地址。可以通过指针变量找到对应的内存单元，从而对其进行操作。)
//内存单元地址又称为指针;指针变量的大小一般是机器相关的，一般为4字节或8字节。

//结构体是一种用户自定义的数据类型，它由若干个成员变量组成，每个成员变量都有自己的类型和名称。结构体可以包含其他结构体，甚至可以包含指针。
//struct student {
//	char name[20];
//	int age;
//	char sex;
//	char address[50];//此处应改为char address[50];以存储字符串
//};
//void print(struct student* s1) {
//	printf("%s, %d, %c, %s\n", s1->name, s1->age, s1->sex, s1->address);//struct student* s1 是参数，其中 struct student* 表示这个参数是一个指向 student 结构体的指针。通过指针来传递结构体变量，可以避免复制整个结构体，提高效率。
//}//结构体指针变量->成员名表示通过指针访问结构体的成员变量。
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

//&&运算符：左右两边的表达式都为真，则结果为真；否则结果为假。即布尔逻辑中的and运算。
//||运算符：左右两边的表达式有一个为真，则结果为真；否则结果为假。即布尔逻辑中的or运算。
//!运算符：取反，即表达式为真则结果为假，表达式为假则结果为真。即布尔逻辑中的not运算。
//?:运算符：条件运算符，即if-else语句的简化形式。
//int main() {
//	int age = 20;
//	if(age>18 && age<30)
//		printf("You are a teenager.\n");
//	else if(age>=30 && age<50)
//		printf("You are an adult.\n");
//	else
//		printf("You are a senior.\n");
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
//	return 0;
//}

//两个变量的值互换
//int main()
//{
//	int A=10, B=5, C=0;
//	C = A;
//	A = B;
//	B = C;
//	printf("A=%d, B=%d", A, B);
//	return 0;
//}
//形式参数
//void swap(int x,int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//void swap1(int* px, int* py);
//int main()
//{
//	int a = 10;
//	int b = 20;//实际参数
//	printf("交换前：a = %d,b = %d\n", a, b);
//	/*swap(a, b)*/;
//	swap1(&a, &b);
//	printf("交换后：a = %d,b = %d\n", a, b);
//}
////当实参传递给形参的时候，形参是实参的一份临时拷贝，对形参的修改不影响形参
////这时候可以通过指针来间接修改实参的值
//void swap1(int *px,int *py)
//{
//	int temp = 0;
//	temp = *px;
//	*px = *py;
//	*py = temp;
//}

//将三个数由小到大排序
//int main()
//{
//	int x = 10, y = 5, z = 16;
//	if (x > y)
//	{
//		if (y > z)
//		{
//			printf("%d %d %d", x, y, z);
//		}
//		else
//		{
//			if (x > z)
//			{
//				printf("%d %d %d", x, z, y);
//			}
//			else
//			{
//				printf("%d %d %d", z, x, y);
//			}
//		}
//	}
//	else
//	{
//		if (x > z)
//		{
//			printf("%d %d %d", y, x, z);
//		}
//		else
//		{
//			if (y > z)
//			{
//				printf("%d %d %d", y, z, x);
//			}
//			else
//			{
//				printf("%d %d %d", z, y, x);
//			}
//		}
//	}
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

//int main()
//{
//	//char arr1[13] = { 0 };
//	//char arr2[13] = "hello world";
//	//strcpy(arr1, arr2);//strcpy 是一个用于字符串复制的标准库函数。此行代码将 arr2 中的字符串复制到 arr1 中。执行此操作后，arr1 的内容变为 "hello world"，并且因为它足够大，所以不会出现溢出
//	//printf("%s\n", arr1);
//	//return 0;
//
//	char arr[13] = "hello world";
//	memset(arr, '0', 12);//memset 是一个用于将内存块用指定值初始化的标准库函数。此行代码将 arr 中的前 12 个字符用 '0' 填充。执行此操作后，arr 的内容变为 "00"。
//	printf("%s\n", arr);
//	return 0;
//}

//不使用临时变量，计算字符长度。解释：
//int my_strlen(char *str)//用指针接收地址；也可以写出数组的形式，如str[]。
//{
//	int count = 0;//为了实现某个功能（比如这里的计数）而创建，用完就销毁的变量（局部变量），称为临时变量
//	while (*str != '\0')
//	{
//		count++;
//		str++;//直接使用++找下一个字符。注意，是str而不是*str。
//	}
//	return count;
//}
//实现：
int my_strlen(char *str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);//参数里不能写str++。使用str + 1是正确的做法，因为它只是计算出下一个字符的地址，而不改变str指针本身。这样，str在每次递归调用中仍然指向原始字符串的起始地址。
	}
	else
		return 0;
}
int main()
{
	char arr[4] = "abc";
	printf("%d\n", my_strlen(arr));//字符串和数组的元素都是连续存放的，因此它们传参都是传首元素的地址，通过这个地址就可以访问到首元素及其后面的各个元素。
	return 0;
}