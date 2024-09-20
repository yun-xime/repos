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

int txet() {
	int a = 1;
	a++;
	printf("%d ", a);
}
int main() {
	int i = 0;
	for (i = 0; i < 10; i++) {
		txet();
	}
	txet();
	return 0;
}
//以上体现了函数的作用域，函数内的变量a的生命周期只在函数内有效，txet()函数执行完毕后，变量a的生命周期结束并被销毁，再次调用txet()函数时，变量a的生命周期又重新开始。