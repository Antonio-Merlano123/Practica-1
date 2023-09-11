//Ejercicio 13. Escriba un programa que pida un número N e imprima todos los divisores de N.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout <<"Ingrese el numero a evaluar: ";cin>>num;
    cout<<"Los divisores de "<<num<<" son: "<<endl;

    for(int i=1;i<=num;i++)
        if(num%i==0){
            cout<<i<<endl;
        }
    return 0;
}
