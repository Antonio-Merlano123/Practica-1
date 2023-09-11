/*Problema 13. Escriba un programa que reciba un número y calcule la suma de todos los primos
menores que el número ingresado.*/


#include <iostream>

using namespace std;

int main()
{
    int numero,sum=0;
    cout<<"Ingrese numero: ";cin>>numero;

    while(numero<0){                                                             //Transforma el numero en un postivo
        cout<<"El numero debe ser positivo, intente otra vez: ";cin>>numero;
    }

    while(numero>1){
        if(numero%2!=0 && numero%3!=0 && numero%5!=0 && numero%7!=0){         //la condicion de los numeros primos
            sum=sum+numero;                                                  //suma los numeros primos menores que n
        }
        else if(numero==2 || numero==3 || numero==5 || numero==7){         //pregunta por los primeros numeros primos
            sum=sum+numero;
        }

        numero-=1;
        }
    if(numero<0){sum=sum*-1;}                     //si el valor inicial era negativo, lo convierte nuevamente a negativo

    cout<<"El resultado de la suma es: "<<sum<<endl;

    return 0;
}
