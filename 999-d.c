#include <stdio.h>

int main(){
  int n,i,j;
  scanf("%d",&n);
  long int a[n];
  long int min = 1000000000;
  for(i=0;i<n;i++){
    scanf("%ld",&a[i]);
    if(a[i]%2 != 0){
      printf("0\n");
      return 0;
    }
  }
  int count=0;
  for(i=0;i<n;i++){
    for(j=0;a[i]%2 == 0;j++){
      if(a[i]%2 == 0){
        count++;
      }
      a[i] /= 2;
    }
    if(min > count){
      min = count;
    }
    count = 0;
  }
  printf("%ld",min);
  return 0;
}
