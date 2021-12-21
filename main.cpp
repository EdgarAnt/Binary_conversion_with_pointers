#include <iostream>
#include <cstdlib>
using namespace std;

void *binario(int*);

int *puntero=NULL, a=0, num[10], i ;



int main(int argc, char** argv) {
    system("cls");
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"|                       Convertidor numeros binarios                           |"<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"ingrese un numero: ";
    cin>>a;
    puntero=&a;
    cout<<"\n\nSu numero Binario es: ";
    binario(puntero);
    cout<<endl<<endl<<endl<<endl;
    return 0;
}

void *binario(int*numero){
    int cociente=0;
    int residuo=0;

    while(*numero/2>0){

    residuo=*numero%2;
    cociente=*numero/2;
    *numero=cociente;
    num[i]=residuo;
    i++;
}
    num[i]=cociente;

  if(*numero/2 == 0){
    for(i; i>=0; i--){
     cout<<num[i];
    }
  }else{
    for(i; i>=0; i++){
     cout<<num[i];
    }
  }

}


