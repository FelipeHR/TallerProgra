#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  do{
    cin>>n;
    int origenx,origeny;
    if(n>0)
      cin>>origenx>>origeny;
      int x[n],y[n];
      for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
      }
      for(int i=0;i<n;i++){
        if(x[i]==origenx or y[i]==origeny)
        cout<<"divisa"<<endl;
        else if(x[i]>origenx and y[i]>origeny)
        cout<<"NE"<<endl;
        else if(x[i]>origenx and y[i]<origeny)
        cout<<"SE"<<endl;
        else if(x[i]<origenx and y[i]<origeny)
        cout<<"SO"<<endl;
        else if(x[i]<origenx and y[i]>origeny)
        cout<<"NO"<<endl;
      }
    }while(n>0);
  return 0;
}
