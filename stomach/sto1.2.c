#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>
#include <string.h>

//���һ����λ��������������������λ�þ����Ի�����Ϊ���������Ϊ�������������� 13.��������ڵ��� aС�ڵ���b �����о���������
//#include <stdio.h>
//int main() {
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int arr[9] = { 11,13,17,31,37,71,73,79,97 };
//	for (int i = a; i <= b; i++) {
//		for (int j = 0; j < 9; j++) {
//			if (arr[j] == i) {
//				printf("%d]\n", i);
//			}
//		}
//	}
//	return 0;
//}

//���P1029 [NOIP2001 �ռ���] ���Լ������С���������⡣
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//long long gcd(long long x, long long y) {
//    return y ? gcd(y, x % y) : x;
//}
//
//int main() {
//    long long x, y, cnt = 0;
//    scanf("%lld %lld", &x, &y);
//
//    for (long long p = x; p <= y; p += x) {
//        long long q = x * y / p;
//        if (gcd(p, q) == x && (p * q) / gcd(p, q) == y) {
//            cnt++;
//        }
//    }
//    printf("%lld\n", cnt);
//    return 0;
//}

