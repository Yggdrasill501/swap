#include <iostream>

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swap2(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 1;
    int b = 2;
    swap(a, b);
    std::cout << a << " " << b << std::endl;

    swap2(&a, &b);
    std::cout << a << " " << b << std::endl;

    return 0;
}
