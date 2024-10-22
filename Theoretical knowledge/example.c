#define _CRT_SECURE_NO_WARNINGS

char ch = 65;

//char S[201];
//fgets(S, sizeof(S), stdin);
//要将一个英文句子一次性输入到数组里，可以使用 C 语言中的 fgets 函数。这种方法可以有效地读取一行文本，直到遇到换行符或到达指定的字符数限制。（注意，fgets 也会包括输入末尾的换行符。）

#include <stdio.h>
#include <string.h>

// strtok() 函数用于分割字符串，并返回指向下一个令牌的指针。
// strtok() 函数的第一个参数是要分割的字符串，第二个参数是分隔符。
// strtok() 函数会在字符串中搜索第一个分隔符，并返回指向第一个令牌的指针。
// 然后，它会搜索第二个分隔符，并返回指向第二个令牌的指针，依此类推。
// 如果字符串中没有找到分隔符，则 strtok() 函数会返回 NULL。
// 最后，调用 strtok() 函数的次数与字符串中令牌的数量相同。
//int main() {
//    char str[] = "Hello,World,This,Is,C";
//    char* token; // 指向令牌的指针
//
//    // 第一次调用，传入要分割的字符串和分隔符
//    token = strtok(str, ",");
//
//    // 循环获取所有的令牌
//    while (token != NULL) 
//    {
//        printf("%s\n", token);
//        // 后续调用只需传入 NULL
//        token = strtok(NULL, ",");
//    }
//
//    return 0;
//}
