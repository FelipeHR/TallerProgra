#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
  long long n;
  cin>>n;
  long long c[n],r[n];
  vector<long long> divisores;
  for(long long i=0;i<n;i++){
    cin>>c[i]>>r[i];
  }
  for(long long i=0;i<n;i++){
    cout<<"Case #"<<i+1<<": ";
    if(c[i]>2*r[i]){
      for(long long j=1;j<=sqrt((c[i]-r[i]))+1;j++){
        if((c[i]-r[i])%j==0){
          divisores.push_back(j);
          divisores.push_back((c[i]-r[i])/j);
        }
      }
      sort(divisores.begin(),divisores.end());
      for(long long j=0;j<divisores.size();j++){
        if(divisores[j]>r[i] && j<divisores.size())
          cout<<divisores[j]<<" ";
      }
    }
    else if(r[i]==c[i]){
      cout<<"0";
    }
    cout<<endl;
    divisores.clear();
  }
  return 0;
}
