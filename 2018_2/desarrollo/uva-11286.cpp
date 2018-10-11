#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[]) {
  int n,posicion,mayor=0;
  int precios[5];
  vector<int> resultados;
  do {
    cin>>n;
    if(n>0){
      int sumas[n];
      for(int i=0;i<n;i++){
        sumas[i]=0;
      }
      for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
          cin>>precios[j];
          sumas[i]+=precios[j];
        }
      }
      for(int i=0;i<n;i++){
        if(mayor<sumas[i])
          posicion=i;
      }
      mayor=0;
      resultados.push_back(posicion+1);
    }
  } while(n!=0);
  for(int i=0; i<resultados.size();i++){
    cout<<resultados[i]<<endl;
  }

  return 0;
}
