/*Ejercicio 9. Escriba un programa que pida un número N e imprima el perímetro y área de un
círculo con radio N. Nota: use 3.14.*/

#include <iostream>
using namespace std;

int main()
{
    double perimetro,area,radio,pi=3.1416;


    cout <<"Ingrese El radio del circulo: ";cin>>radio;

    perimetro=2*pi*radio;
        cout <<"El Perimetro del ciruclo con radio "<<radio<<" es: "<<perimetro<<endl;
    area=pi*(radio*radio);
        cout <<"El Area del ciruclo con radio "<<radio<<" es: "<<area<<endl;



    return 0;
}