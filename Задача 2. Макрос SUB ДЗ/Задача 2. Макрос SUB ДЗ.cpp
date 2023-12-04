#include <iostream>
#define SUB(a, b) (a) - (b)
#define SUB1(a, b, c) ((a) - (b)) * (c)
#define SUB2(a, b, c) ((a) - ((b) + (c))) * (c)


int main() {
    setlocale(LC_ALL, "rus");
    int a = 6;
    int b = 5;
    int c = 2;
    std::cout << SUB(a, b) << std::endl;
    std::cout << SUB1(a, b, c) << std::endl;
    std::cout << SUB2(a, b, c) << std::endl;

    return 0;
}
