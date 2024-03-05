#include <iostream>
#include <cstring>
#include <string>

using namespace std;

const char cstr1[] = "Hello";
const char cstr2[] = "World!";

int main() {
    constexpr size_t new_size = strlen(cstr1) + strlen(" ") + strlen(cstr2) + 1;

    char cstr3[new_size];
    strcpy(cstr3, cstr1);
    strcat(cstr3, " ");  // 使用 strcat 拼接空格
    strcat(cstr3, cstr2);  // 使用 strcat 拼接 cstr2

    cout << cstr3 << endl;

    return 0;
}

