#include <stdio.h>
//typedef unsigned int uint;//typedef�÷�Ϊ��typedef ԭ�� �����������typedef unsigned int uint��ʾ��unsigned int������������Ϊuint��
//typedef struct node {
//	int data;
//	struct node* next;//����һ���ڵ㣬����������data��ָ����next��
//}node;
////struct�������Ƕ���һ���ṹ��
//int main() {
//	node n;//����һ���ڵ����n.
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
//���������˺����������򣬺����ڵı���a����������ֻ�ں�������Ч��txet()����ִ����Ϻ󣬱���a���������ڽ����������٣��ٴε���txet()����ʱ������a���������������¿�ʼ��