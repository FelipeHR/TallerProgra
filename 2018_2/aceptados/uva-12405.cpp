#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  int casos[n];
  vector<int> solutions; // vector de soluciones
  vector<string> predio; // predio a revisar
  string s; // string que se ingresa
  for(int i=0;i<n;i++){
    cin>>casos[i];// escaneo del numero de caracteres del predio
    cin>>s; // escaneo del string de casos[i] caracteres
    solutions.push_back(0); // inicializamos el vector soluciones en 0
    int j=0;
    while(j<casos[i]){
      if(s[j]=='.'){
        solutions[i]++;
        j=j+3;
      }
      else
        j++;
    }
  }
  for(int i=0;i<n;i++){
    cout<<"Case "<<i+1<<": "<<solutions[i]<<endl;
  }
  return 0;
}
