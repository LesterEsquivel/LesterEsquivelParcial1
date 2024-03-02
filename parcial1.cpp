#include <iostream>

int main() {
    int a = 0;
    int b = 0;

    for (int i = 0; i <= 50; i++) {

        if (i % 2 != 0) {
            a += i;
        } else {
            b += i;
        }
    }

    std::cout << "La suma de los numeros impares es: " << a << std::endl;
    std::cout << "La suma de los numeros pares es: " << b << std::endl;

    return 0;
}
