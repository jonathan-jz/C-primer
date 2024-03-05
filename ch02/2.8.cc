#include <iostream>

int main() {
    std::cout << "-------- Oct --------" << std::endl;
    std::cout << "\62\115\12";
    std::cout << "---------------------" << std::endl;
    std::cout << "\62";
    std::cout << "\11";
    std::cout << "\115";
    std::cout << "\12";

    std::cout << "-------- Hx ---------" << std::endl;
    std::cout << "\x32\x4d\xa";
    std::cout << "---------------------" << std::endl;
    std::cout << "\x32";
    std::cout << "\x9";
    std::cout << "\x4d";
    std::cout << "\xa";

    return 0;
}

