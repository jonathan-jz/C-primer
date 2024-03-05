a）是非法的，它的原意是希望在 while 语句的控制结构当中定义一个 string::iterator 类型的变量 iter，然后判断 iter 是否到达了 s 的末尾，只要还没有到达末尾就执行循环体的内容。但是该式把变量的定义和关系判断混合在了一起，如果要使用 iter 与其他值比较，必须首先为 iter 赋初值。修改后的程序应该是：

string::iterator iter = s.begin();
while (iter != s.end()) {
  ++iter;
  /* ... */
}



（b）是非法的，变量 status 定义在 while 循环控制结构的内部，其作用域仅限于 while 循环。if 语句已经位于 while 循环的作用域之外，status 在 if 语句内是一个未命名的无效变量。要想在 if 语句中继续使用 status，需要把它定义在 while 循环之前。修改后的程序应该是：

bool status;
while (status = find(word)) { /* ... */}
if (!status) { /* ... */ }