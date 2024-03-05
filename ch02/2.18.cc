#include <iostream>

int main () {
    int ival = 23, *ip = &ival;
    std::cout << "ival = " << ival << " " << "*ip = " << *ip << std::endl;
    *ip = 24;
    std::cout << "ival = " << ival << " " << "*ip = " << *ip << std::endl;
    ival = 25;
    std::cout << "ival = " << ival << " " << "*ip = " << *ip << std::endl;

    return 0;
}



ival = 23 *ip = 23
ival = 24 *ip = 24
ival = 25 *ip = 25

