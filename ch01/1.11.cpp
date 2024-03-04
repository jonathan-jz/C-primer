#include <iostream>

int main() {
    int val1, val2, temp;
    std::cout << "Please input two integers\n";
    std::cin >> val1 >> val2;
    if (val1 > val2) {
        temp = val1;
        val1 = val2;
        val2 = temp;
    }
    ++val1;
    while (val1 < val2) {
        std::cout << val1 << " ";
        ++val1;
    }
    std::cout << std::endl;

    return 0;
}

