#include <iostream>

using namespace std;

int main()
{
    int num,fila,colum;
    cout<<"Ingrese un numero impar: ";cin>>num;
    while(num%2==0){
        cout<<"El numero ingresado es par, intente otra vez!"<<endl;
        cout<<"Ingrese un numero impar: ";cin>>num;
    }

    for(fila=1;fila<=num;fila=fila+2){
     for(colum=1;colum<=num-fila;colum=colum+2)
            cout<<" ";
            for(colum=1;colum<=fila;colum++)
                cout<<"*";
                cout<<endl;


    }
    for(fila=num-2;fila>=0;fila=fila-2){
        for(colum=1;colum<=num-fila;colum=colum+2)
            cout<<" ";
            for(colum=1;colum<=fila;colum++)
                cout<<"*";
                cout<<endl;


    }
    return 0;
}
