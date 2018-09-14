#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n,dif=0, mascara,pila1=0,pila2=0,suma=0;
  cin>>n;
  int piedras[n];
  for(int i=0;i<n;i++){
    cin>>piedras[i];
    suma=piedras[i]+suma;
  }
  for(int i=0; i<pow(2,n);i++){
    for(int j=0; j<n; j++){
      mascara=pow(2,j);
      if((i&mascara)==mascara){
        pila1=pila1+piedras[j];
      }
      else{
        pila2=pila2+piedras[j];
      }
    }

    if(i==0 or dif>abs(pila1-pila2))
      dif=abs(pila1-pila2);
    else if((dif==0 and suma%2==0) or (dif==1 and suma%2!=0))
      break;

    pila1=0;
    pila2=0;
  }

  cout<<dif<<endl;
  return 0;
}
