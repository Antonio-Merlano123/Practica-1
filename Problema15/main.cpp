    //LO QUE HACE EL PROGRAMA
    //el cuadro crece apartir del los numero impares, por ende usamos la formula de los inpares que seria "2*x+1"
    // asi que cada que necesitemos hacer un cuadro mas grande multiplicamos por dos la formular y asi vamos consiguiendo
    //el cuadro, y despues lo unico que se hace es sumar


    //VARIABLES
    //tamano = en principio guarda la longitud de los lados
    //aumento= es una variable que se encarga de ir aumento de dos en dos para in encontrando las esquinas del cuadrado
    //unsigned int tamano,aumento=2;
    //numeros= es la variable que encuentra  de la esquina el cual es el que necesitamos para la suma
    //suma= es la suma de todas las esquias y es el que esta en la pantalla final
    //unsigned long numeros=1,suma=0;
    //cuatro= va contando las esquinas y cuando llega a 4 se reinicia para contar el siguiente cuadro
    //unsigned short cuatro = 0;


#include <iostream>

int main() {
    // Variables
    unsigned int tamano, aumento = 2;
    unsigned long numeros = 1, suma = 0;
    unsigned short cuatro = 0;

    // Explicación del programa
    std::cout << "Ingresa tamaño impar del lado del cuadrado: ";
    std::cin >> tamano;

    for (; numeros <= tamano * tamano; numeros = numeros + aumento, cuatro++) {
        suma = suma + numeros;
        if (cuatro == 4) {
            aumento = aumento + 2;
            cuatro = 0;
        }
    }

    std::cout << "La suma de las esquinas del cuadrado es " << suma << std::endl;

    // Dibujo del cuadro
    for (unsigned int fila = 0; fila < tamano; fila++) {
        if (fila == 0) {
            if (numeros == 1) {
                std::cout << "1 ";
            } else {
                for (unsigned int i = 0; i < tamano; i++) {
                    std::cout << numeros - tamano + i << " ";
                }
            }
        } else if (fila < tamano - 1) {
            std::cout << numeros - fila << " ";
            for (unsigned int i = 0; i < tamano - 2; i++) {
                std::cout << "  ";
            }
            std::cout << numeros - 3 * tamano + fila + 3 << " ";
        } else {
            for (unsigned int i = 0; i < tamano; i++) {
                std::cout << numeros - tamano + i << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
