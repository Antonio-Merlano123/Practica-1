/*Ejercicio 27. Escriba un programa que actúe como una calculadora con operaciones de suma,
resta, multiplicación y división, el usuario debe ingresar los operandos y la operación a realizar.*/

#include <iostream>


using namespace std;

int main()
{
    cout << "Este programa funciona como una calculadora con las operaciones de suma(+), resta(-), "
            "multiplicacion(*) y division(/) para 2 numeros ingresados" <<endl<< endl;

    double num1,num2,resultado;
    char operador;

    cout<<"Ingrese primer numero: ";cin>>num1;

    cout<<"Ingrese operaccion(+,-,*,/): ";cin>>operador;

    cout<<"Ingrese segundo numero: ";cin>>num2;



    switch (operador) {
    case '+':
        resultado=num1+num2;
        cout<<num1<<"+"<<num2<<"="<<resultado<<endl;
        break;
    case '-':
        resultado=num1-num2;
        cout<<num1<<"-"<<num2<<"="<<resultado<<endl;
        break;
    case '*':
        resultado=num1*num2;
        cout<<num1<<"*"<<num2<<"="<<resultado<<endl;
        break;
    case '/':
        if(num2==0.0){
            cout<<"La divicion por 0 no existe!"<<endl;;
        }
        else{resultado=num1/num2;
        cout<<num1<<"/"<<num2<<"="<<resultado<<endl;
        }
        break;

    default:
        cout<<"El signo no es valido."<<endl;
        break;
    }

    return 0;
}