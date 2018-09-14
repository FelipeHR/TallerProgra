#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int c,swap, suma;
  cin>>c;
  int arreglo[c];
  for(int i=0;i<c;i++){
    cin>>arreglo[i];
  }
  for(int i=0;i<c;i++){
    for(int j=i+1;j<c;j++){
      if(arreglo[i]>arreglo[j]){
        swap=arreglo[i];
        arreglo[i]=arreglo[j];
        arreglo[j]=swap;
      }
    }
  }
  suma=0;
  for(int i=0;i<(c/2)+1;i++){
    suma=suma+(arreglo[i]/2)+1;
  }
  cout<<suma;
  return 0;
}
