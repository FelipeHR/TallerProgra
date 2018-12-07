#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main(int argc, char const *argv[]) {
  int t;
  bool bandera=true;
  vector<string> respuestas;
  cin>>t;
  for(int k=0;k<t;k++){
    int n, pila1=0,suma;
    long long mascara;
    cin>>suma;
    cin>>n;
    int piedras[n];
    for(int i=0;i<n;i++){
      cin>>piedras[i];
    }
    if(suma==0){
      respuestas.push_back("YES");
      continue;
    }
    for(int i=0; i<pow(2,n);i++){
      for(int j=0; j<n; j++){
        mascara=pow(2,j);
        if((i&mascara)==mascara){
          pila1=pila1+piedras[j];
        }
      }
      if(suma==pila1){
        respuestas.push_back("YES");
        bandera=false;
        break;
      }
      pila1=0;
    }
    if(!bandera){
      bandera=true;
      continue;
    }
    respuestas.push_back("NO");
  }
  for(int i=0;i<t;i++)
    cout<<respuestas[i]<<endl;
  return 0;
}
