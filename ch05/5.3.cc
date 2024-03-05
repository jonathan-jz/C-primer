原文的 while 循环使用了块，其形式是：

while (val <= 10) {
    sum += val;
    ++val;
}
利用逗号运算符改写之后的形式如下所示：

while (val <= 10)
    sum += val, ++val;
很明显，改写之后的代码不够清晰，可读性降低了。