char ch = 65;

//char S[201];
//fgets(S, sizeof(S), stdin);
//要将一个英文句子一次性输入到数组里，可以使用 C 语言中的 fgets 函数。这种方法可以有效地读取一行文本，直到遇到换行符或到达指定的字符数限制。（注意，fgets 也会包括输入末尾的换行符。）

// strtok() 函数用于分割字符串。

//strcpy() 函数用于复制字符串

//strcmp() 函数用于比较两个字符串是否相同。基本形式为strcmp(str1,str2)，若str1=str2，则返回零；若str1<str2，则返回负数；若str1>str2，则返回正数。

//pow(x, y) 函数用于计算 x 的 y 次方。

//1 << 3 == 1 * 2^3, 2 << 3 == 2 * 2^3,3 << 3 == 3 * 2^3...不难发现，一个数左移 n 位等于将该数乘以 2^n。
//1 >> 2 == 1 / 2^2, 2 >> 2 == 2 / 2^2, 3 >> 2 == 3 / 2^2...同理，一个数右移 n 位等于将该数除以 2^n。
//位操作符能操作的数的最大值取决于操作对象的数据类型，比如int（一般为32位）最大为 2^31-1。
//不过，除了特殊情况，几乎不会用位操作符来计算次幂（别人很难读懂），且编译优化能比位操作符更好地优化代码。