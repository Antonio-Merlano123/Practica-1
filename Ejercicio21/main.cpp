/*Ejercicio 21. Escriba un programa que pida un carácter C, si es una letra la debe convertir de
mayúscula a minúscula y viceversa e imprimirla.*/


#include <iostream>
using namespace std;

int main()
{
    char letra;

    cout<<"Ingrese una letra: ";cin>>letra;

     if(letra>=65&&letra<=90){

         for(int i=65;i<=90;i++){
             if(i==letra){
                 letra=letra+32;
                 break;
             }
         }

       cout<<"Letra convertida: "<<letra<<endl;
     }



     else{
         if(letra>=97&&letra<=122){

             for(int i=97;i<=122;i++){
                 if(i==letra){
                     letra=letra-32;
                     break;
                 }
             }
         }

        cout<<"Letra convertida: "<<letra<<endl;
     }



    return 0;
}
