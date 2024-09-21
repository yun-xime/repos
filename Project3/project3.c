#include <stdio.h>
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

int main() {
	int a = 10;
	printf("%p\n",&a);//打印变量a的地址。
	int* p = &a;//声明指针变量p，并将a的地址赋值给p；int说明p指向的对象是整型变量，*说明p是一个指针。
	printf("%p\n",p);//打印指针变量p的地址。
	*p = 20;//通过指针p修改a的值。
	printf("%d\n",a);//打印a的值。
	return 0;
}//输出结果a=20(指针变量的作用是存放地址。可以通过指针变量找到对应的内存单元，从而对其进行操作。)
//内存单元地址又称为指针
