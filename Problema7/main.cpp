/*Problema 7. En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con 1 y
1.*/

#include<iostream>
using namespace std;

int main()
{
    int i,num=0,sum=0;
    cout<<"Ingrese un numero: ";cin>>num;
    int serie[num]={1,1};                       //Es el encargado de formar la serie hasta el numero ingresado
    cout<<"{";
    for(i=2; i<=num; i++){
        serie[i]=serie[i-2]+serie[i-1];

    }

    for(i=0; i<num; i++){
        cout<<serie[i]<<" ";                    //Imprime la serie

        if(serie[i]%2==0 && serie[i]<num){      //identifica los pares y los suma
            sum+=serie[i];
        }
    }

    cout<<"}"<<endl;
    cout<<"El resultado de la suma es: "<<sum<<endl;

    return 0;
}
