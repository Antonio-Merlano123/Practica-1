/*Ejercicio 15. Escriba un programa que pida constantemente números hasta que se ingrese el nú-
mero cero e imprima en pantalla la suma de todos los números ingresados.*/

#include <iostream>
using namespace std;

int main()
{
    short int num,result=0;

    cout << "Ingrese un numero: ";cin>>num;
    while(num!=0){
        result+=num;
        cout << "Ingrese un numero: ";cin>>num;
    }

    cout << "El resultado de la sumatoria es: "<<result<<endl;


    return 0;
}
