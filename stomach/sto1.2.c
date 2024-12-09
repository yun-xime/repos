#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <Windows.h>
#include <string.h>

//如果一个两位数是素数，且它的数字位置经过对换后仍为素数，则称为绝对素数，例如 13.请求出大于等于 a小于等于b 的所有绝对素数。
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

//洛谷P1029 [NOIP2001 普及组] 最大公约数和最小公倍数问题。
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

