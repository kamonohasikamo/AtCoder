#include <stdio.h>
int function(int n){
  if(n % 2 == 0){
    return n/2;
  }else{
    return ((3 * n) + 1);
  }
}

int main(){
  int s;
  scanf("%d",&s);
  int a[1000000];
  int i, j;
  a[0] = s;
  for(i=1;i<=100000;i++){
    a[i] = function(a[i-1]);
    for(j=0;j<i;j++){
      if(a[i] == a[j]){
        printf("%d\n",i+1);
        return 0;
      }
    }
  }

  return 0;
}
