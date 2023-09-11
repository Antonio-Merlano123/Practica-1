//Ejercicio 19. Escriba un programa que pida un número N e imprima si es o no un número primo

#include <iostream>
using namespace std;

int main()
{
    short int num,modulo=0,contador=0;

    cout<<"Ingrese el numero a evaluar: ";cin>>num;

    for(int i=1;i<=num;i++){

        modulo=num%i;
        if(modulo==0){
            contador++;
        }
    }
    if(contador==2)cout<<"El numero "<<num<<" ES primo!"<<endl;
    else cout<<"El numero "<<num<<" NO es primo!"<<endl;

    return 0;
}
