#include <stdio.h>
int main() {
  int n,i,suma=0;
  scanf("%d",&n);
  if(n<0){
    for (i=n; i<=1; i++) {
      suma=suma+i;
    }
    printf("%d\n",suma);
  }
  if(n>0){
    for (i=n;i>=1; i--){
      suma=suma+i;
    }
    printf("%d\n",suma);
  }
  if(n==0)
    printf("1\n");
  return 0;
}
