#include <iostream>

int main() {
    // Variables
    unsigned short int mDivisor, mdbuscador = 0;
    unsigned int ntriangular;

    std::cout << "Ingresa el número de divisores que necesita: ";
    std::cin >> mDivisor;

    for (unsigned int posicion = 1; mDivisor > mdbuscador; posicion++) {
        mdbuscador = 0;
        ntriangular = posicion * (posicion + 1) / 2;
        for (unsigned int i = 1; i <= ntriangular; i++) {
            if (ntriangular % i == 0)
                mdbuscador++;
        }
    }

    std::cout << "El número es: " << ntriangular << " que tiene " << mdbuscador << " divisores." << std::endl;
}
