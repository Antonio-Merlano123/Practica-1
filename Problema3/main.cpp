/*Problema 3. Escriba un programa que debe leer un mes y un día de dicho mes para luego decir
si esa combinación de mes y día son válidos.*/
#include <iostream>
using namespace std;

int main()
{   cout << "Este programa dice si la fecha ingresada es valida o invalida."<< endl<<endl;


    int meses, dias;
    bool bandera=true;
    cout<<"Ingrese el mes: ";cin>>meses;
    cout<<"Ingrese el dia: ";cin>>dias;
    cout<<dias<<"/"<<meses;

    if((meses>0 && meses<=12) && (dias>0 && dias<=31)){     //miro que el valor ingresado este dentro del rango
        if(meses==2 && dias>29){cout<<" Es una fecha invalida."<<endl;bandera=false; }      //considero el caso especial de febrero
        if(meses==2 && dias==29){cout<<" Es valida en bisiesto."<<endl;bandera=false;}      //considero el año bisiesto
        if((meses==4||meses==6||meses==9||meses==11) && dias>30){cout<<" Es una fecha invalida."<<endl;bandera=false;}      //considero el caso de los meses que solo tienen 30 dias

        else if(bandera==true){cout<<" Es una fecha valida"<<endl;}
    }
    else {cout<<" Es una fecha invalida"<<endl;}
    return 0;
}
