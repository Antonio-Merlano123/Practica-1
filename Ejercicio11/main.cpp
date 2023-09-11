//Ejercicio 11. Escriba un programa que pida un número N e imprima en pantalla su tabla de multiplicar hasta 10xN.

#include <iostream>
using namespace std;

int main()
{
   int num,i=1;

    cout <<"Ingrese el numero a evaluar: ";cin>>num;

    if(num==0){
        cout<<"Todo numero multiplicado por 0 es = 0"<<endl;
    }
    else{
        while(i<=10){
            cout<<i<<"x"<<num<<"= "<<num*i<<endl;
            i++;
        }
    }

    return 0;
}