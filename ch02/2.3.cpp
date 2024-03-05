#include <iostream>

int main()
{
    std::cout << sizeof(unsigned) << std::endl;
    std::cout << sizeof(int) << std::endl;
    std::cout << "**************************" << std::endl;

    unsigned u = 10, u2 = 42;
    std::cout << u2 - u << std::endl;
    std::cout << u - u2 << std::endl;
    std::cout << "**************************" << std::endl;

    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;
    std::cout << i - u << std::endl;
    std::cout << u - i << std::endl;

    return 0;
}

//
//
//4
//4
//**************************
//32
//4294967264
//**************************
//32
//-32
//0
//0
//
//Process finished with exit code 0
//
//[200~unsigned int 占 4 字节
//int 占 4 字节
//**************************
//u2 - u = 42 - 10 = 32
//u - u2 = 10 - 42 = unsigned(-32) = 4294967264
//分析一：
//32 的二进制表示为 0000 0000 0000 0000 0000 0000 0010 0000
//-32 的二进制补码表示为 1111 1111 1111 1111 1111 1111 1110 0000
//也就是说 -32 的十六进制表示为 FFFF FFE0
//若将 FFFF FFE0 转换为 unsigned int 类型，则高位的符号位全部成为了数值位，FFFF FFE0 按无符号数转换成十进制数为 4294967264。
//分析二：
//把负数转换成无符号数类似于直接给无符号数赋一个负值，结果等于这个负数加上无符号数的模。
//unsigned int 占 4 字节，4 字节的无符号数模为 4294967296。
//-32 + 4294967296 = 4294967264
//**************************
//i2 - i = 42 - 10 = 32
//i - i2 = 10 - 42 = -32
//当一个算术表达式中既有无符号数又有 int 值时，那个 int 值就会转换成无符号数。
//i - u = unsigned(10) - 10 = 0
//u - i = 10 - unsigned(10) = 0
//分析：
//有符号数 10 转换成无符号数 10，因为 10 是正数，符号位为 0，故转换成无符号数时，符号位不会对对应无符号数产生副作用。
//
//Process finished with exit code 0
//程序中 return 0 语句的副作用
//]
