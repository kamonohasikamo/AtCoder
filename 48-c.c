#include <stdio.h>

int main(){
  int n,x;
  scanf("%d %d", &n, &x);
  int i,j;
  int a[n];
  int count = 0;
  for(i=0;i<n;i++){
    scanf("%d", &a[i]);
  }
  for(i=0;i<n-1;i++){
    if((a[i] + a[i+1]) > x){
      if(a[i] > a[i+1]){
        for(j=0;(a[i]+a[i+1]) < x;j++){
          a[i] -= 1;
          count++;
        }
      }else{
        for(j=0;(a[i]+a[i+1]) < x;j++){
          a[i+1] -= 1;
          count++;
          printf("aaa\n");
        }
      }
    }
  }
  printf("%d\n", count);
  return 0;
}
