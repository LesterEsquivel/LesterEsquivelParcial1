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

    //usando la estructura de control "while" has un ciclo iniciando en 0, que incremente de 3 en 3 hasta llegar al primer impar despues de 30 usando c++
    //ejercicio 2.2
        int i = 0;

        while (i <= 30 || (i + 3) % 2 != 0) {
            i += 3;
        }

        std::cout << "El primer numero impar despues de 30 es: " << i << std::endl;

        return 0;

}

