#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main()
{
    int num1 = 0,limite_inferior=0,limite_superior=100;
    char opcion;
    bool aux=false;


    srand(time(NULL));



    cout<<"EL programa le dara un numero aleatorio y usted debe de decir si es mayor(>),menor(<) o igual(=)"
          " al numero que usted penso!"<<endl<<endl;

    while(aux==false){
        num1 = limite_inferior + rand() % ((limite_superior + 1) - limite_inferior);
        cout<<"EL numero "<<num1<<" es < , > , = : ";cin>>opcion;

        if (opcion=='<'){
            limite_inferior=num1+1;
        }
        if(opcion=='>'){
            limite_superior=num1-1;
        }
        if(opcion=='='){
            cout<<"El numero que usted tenia en mente era: "<<num1<<endl;
            aux=true;
        }

    }

    return 0;
}
