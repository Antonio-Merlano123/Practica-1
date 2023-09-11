/*Ejercicio 3. Escriba un programa que pida dos números A y B e imprima en pantalla el mayor.*/


#include <iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"Ingrese el primer numero: ";cin>>a;
    cout<<"Ingrese el segundo numero: ";cin>>b;

    if(a>b){
        cout<<a<<" es mayor que "<<b<<endl;
    }
    else{
        cout<<b<<" es mayor que "<<a<<endl;
    }

    return 0;
}