//#include <iostream>
//#include <vector>
//#include <iterator>
//using namespace std;
//
//int main()
//{
//    return 0;
//}
//
//
//
数组与 vector 的相似之处是都能存放类型相同的对象，且这些对象本身没有名字，需要通过其所在位置访问。

数组与 vector 的最大不同是，数组的大小固定不变，不能随意向数组中增加额外的元素，虽然在某些情境下运行时性能较好，但是与 vector 相比损失了灵活性。

具体来说，数组的维度在定义时已经确定，如果我们想更改数组的长度，只能创建一个更大的新数组，然后把原数组的所有元素复制到新数组中去。数组也无法像 vector 那样使用 size 函数直接获取数组的维度。如果是字符数组，可以调用 strlen 函数得到字符串的长度；如果是其他数组，只能使用 sizeof(array) / sizeof(array[0]) 的方式计算数组的维度。
