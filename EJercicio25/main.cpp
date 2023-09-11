
/*Ejercicio 25. Escriba un programa que pida un número N e imprima en pantalla la cantidad de
dígitos de N.*/

#include <iostream>
using namespace std;

int main()
{
    int num,aux,mod,num2,contador=0;
    cout << "Ingrese un numero: ";cin>>num;
    num2=num;
    while(num!=0){
        mod=num%10;
        aux=num/10;
        contador++;
        num=aux;
    }

    cout<<"El numero "<<num2<<" tiene "<<contador<<" digitos!"<<endl;

    return 0;
}