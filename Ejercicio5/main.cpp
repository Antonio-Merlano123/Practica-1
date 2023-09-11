//Ejercicio 5. Escriba un programa que pida dos números A y B e imprima en pantalla la división A/B con redondeo.

#include <iostream>
using namespace std;

int main()
{
    int num1,num2;

    cout<<"Ingrese el primer numero: ";cin>>num1;
    cout<<"Ingrese el segundo numero: ";cin>>num2;

    if(num2==0)cout<<"La division por cero no esta definida!"<<endl;

    else cout<<num1<<"/"<<num2<<"= "<<num1/num2<<endl;

    return 0;
}
