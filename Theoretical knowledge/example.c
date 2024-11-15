#define _CRT_SECURE_NO_WARNINGS
/*1.在动手写代码之前，在草纸上尽可能地写好要实现的流程。
认真仔细的读懂题目,如果篇幅比较长，应该边阅读边将有关的条件一条条地记录下来，阅读完成后要反复核对，绝对不能有错漏。
建立各个条件之间的关系，最好用一些简明的表格列出
认真分析这些关系，并建立这些关系的数学模型。
规划各个模块的结构，用相应的语言、逐步求精的方法描述具体的算法。
2.在代码中，尽量把每个部分模块化，写成函数、结构体或类。
3.对于一些可能重复用到的概念，可以统一转化，方便处理：如，某题给你 "YY-MM-DD 时：分" 把它抽取到一个函数，处理成秒，会减少概念混淆。
4.调试时分块调试。模块化的好处就是可以方便的单独调某一部分。
5.写代码的时候一定要思路清晰，不要想到什么写什么，要按照落在纸上的步骤写。*/

char ch = 65;


//fgets(S, sizeof(S), stdin);
//要将一个英文句子一次性输入到数组里，可以使用 C 语言中的 fgets 函数。这种方法可以有效地读取一行文本，直到遇到换行符或到达指定的字符数限制。（注意，fgets 也会包括输入末尾的换行符。）

// strtok() 函数用于分割字符串。

//strcpy() 函数用于复制字符串

//strcmp() 函数用于比较两个字符串是否相同。基本形式为strcmp(str1,str2)，若str1=str2，则返回零；若str1<str2，则返回负数；若str1>str2，则返回正数。

//pow(x, y) 函数用于计算 x 的 y 次方。

//puts() 函数会输出一个字符串，并在字符串后自动添加一个换行符。当传入空字符串 "" 时，puts("") 的输出结果就是一个换行。

//1 << 3 == 1 * 2^3, 2 << 3 == 2 * 2^3,3 << 3 == 3 * 2^3...不难发现，一个数左移 n 位等于将该数乘以 2^n。
//1 >> 2 == 1 / 2^2, 2 >> 2 == 2 / 2^2, 3 >> 2 == 3 / 2^2...同理，一个数右移 n 位等于将该数除以 2^n。
//位操作符能操作的数的最大值取决于操作对象的数据类型，比如int（一般为32位）最大为 2^31-1。
//不过，除了特殊情况，几乎不会用直接用位操作符来计算次幂（别人很难读懂）（开发是一个团队的事，必须考虑可维护性和可读性），且编译优化能比位操作符更好地优化代码。

/*取模和取余：都是取出除法运算结果的余数。（余数指除法中不能被除尽的部分）（不能简单理解为取出出发运算结果小数点后面的数）
1.主要的区别在于对负整数进行除法运算时操作不同，但对正整数是一样的。
2.取模主要是用于计算机术语中。取余则更多是数学概念。
3.不同的编程语言可能对取余和取模的定义有所不同。例如，在 C/C++, C#, Java, 和 PHP 中，% 运算符执行的是取余运算，而在 Python 中，% 是执行取模运算。因此，在进行跨语言编程时，需要特别注意这一点*/
//熟悉取余：
//int main()
//{
//	int n, m;
//	do
//	{
//		scanf("%d %d", &n, &m);
//		int a = 1;
//		a = n % m;
//		printf("%d\n", a);
//	}while (n || m);
//	return 0;
//}

//assert宏的原型定义在<assert.h>中，如果计算表达式结果为假，那么它先向stderr打印一条出错信息，然后通过调用 abort 来终止程序运行

/*字典序：英文字母在字典上的先后顺序。
默认a<b<c...<z。而在c语言中，字符串的字典序是根据ASCII码的大小来决定的，可以根据这一特点进行比较、排序。
对于两个字符串，从左到右依次比较每个字符：
1.在比较之前，将两个字符串中较小的字符放在前面，较大的字符放在后面。
2.短字符串排在长字符串前面。
3.如果两个字符串相同，则认为它们的字典序相同。*/

//数组动态内存分配：
//int* p = (int*)malloc(sizeof(int) * n); //分配n个int类型的内存空间
//free(p); //释放内存空间
//p=NULL; //释放指针p指向的内存空间
//二维数组（使用二级指针）：
//int** p = (int**)malloc(sizeof(int*) * m); //分配m个指针的内存空间
//for (int i = 0; i < m; i++)
//{
//	p[i] = (int*)malloc(sizeof(int) * n); //为每个指针分配n个int类型的内存空间
//}
//for (int i = 0; i < m; i++)
//{
//	free(p[i]); //释放第i个指针所指向的内存空间
//}
//free(p); //释放m个指针所指向的内存空间
//p=NULL; //释放指针p指向的内存空间
//注意：使用后该指针变量一定要重新指向NULL，防止悬空指针（失效指针）出现，有效规避错误操作。

/*void *malloc(size_t size) 分配所需的内存空间，并返回一个指向它的指针。因为该函数的返回的是无类型指针，在使用时一定要强制转换为所需要的类型。
**（敲黑板）重点：在使用malloc开辟空间时，使用完成一定要释放空间，如果不释放会造内存泄漏。
在使用malloc函数开辟的空间中，不要进行指针的移动，因为一旦移动之后可能出现申请的空间和释放空间大小的不匹配*/

/* void *calloc(size_t nitems, size_t size) 分配所需的内存空间，并返回一个指向它的指针。malloc 和 calloc 之间的不同点是，malloc 不会设置内存为零，而 calloc 会设置分配的内存为零。
注意：calloc() 函数将分配的内存全部初始化为零。如果不需要初始化，可以使用 malloc() 函数代替。另外，使用 calloc() 函数时需要注意，如果分配的内存块过大，可能会导致内存不足的问题。*/

