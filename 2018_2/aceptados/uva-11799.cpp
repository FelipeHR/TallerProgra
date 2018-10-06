#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  int casos, aux=0;
  cin>>casos;
  int n[casos];
  int mayor[casos];

  for(int i=0;i<casos;i++){
    cin>>n[i];
    mayor[i]=0;
    int a[n[i]];
    for(int j=0;j<n[i];j++){
      cin>>a[j];
      if(a[j]>=mayor[i])
        mayor[i]=a[j];
    }
  }
  for(int i=0;i<casos;i++){
    cout<<"Case "<<i+1<<": "<< mayor[i]<<endl;
  }
  return 0;
}
