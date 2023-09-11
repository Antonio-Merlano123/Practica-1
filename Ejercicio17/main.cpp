/*Ejercicio 17. Escriba un programa que pida constantemente numeros hasta que se ingrese el numero
cero e imprima en pantalla el mayor de todos los numero ingresados.*/

#include <iostream>
using namespace std;

int main(){

    int num1,num2=0;

    cout<<"Ingrese un numero: "; cin>>num1;

    while(num1!=0){
        if(num1>num2){
            num2=num1;
            cout<<"Ingrese otro numero: "; cin>>num1;
        }
        else{
            cout<<"Ingrese otro numero: "; cin>>num1;
        }
    }

    if(num1>num2){
        cout<<"El numero mayor fue: "<<num1<<endl;
    }
    else{
        cout<<"El numero mayor fue: "<<num2<<endl;
    }
    return 0;
}