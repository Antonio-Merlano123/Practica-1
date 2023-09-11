/*Ejercicio 7. Escriba un programa que pida un número N e imprima en pantalla la suma de todos
los números entre 0 y N (incluyéndose el mismo).*/

#include <iostream>
using namespace std;

int main()
{
    int num1,i=0,result=0;

    cout <<"Ingrese un numero: ";cin>>num1;

    while(i<=num1){
        result=result+i;
        i++;

    }
    cout<<"La sumatoria desde 0 hasta "<<num1<<" es: "<<result<<endl;

    return 0;
}