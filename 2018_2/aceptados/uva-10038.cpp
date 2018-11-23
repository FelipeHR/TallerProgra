#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main(int argc, char const *argv[]) {
  int n,aux;
  vector<string> result;
  vector<int> diferencias;
  volver:
  while(scanf("%d",&n) != EOF){
    vector<int> array;
    for(int i=0;i<n;i++){
      cin>>aux;
      array.push_back(aux);
    }
    for(int i=0,j=i+1;i<n-1 and j<n;i++,j++){
      diferencias.push_back(abs(array[i]-array[j]));
    }
    sort(diferencias.begin(),diferencias.end());
    for(int i=0;i<n-1;i++){
      if(diferencias[i]!=i+1){
        result.push_back("Not jolly");
        diferencias.clear();
        array.clear();
        goto volver;
      }
    }
    array.clear();
    diferencias.clear();
    result.push_back("Jolly");
  }
  for(int i=0;i<result.size();i++){
    cout<<result[i]<<endl;
  }
  return 0;
}
