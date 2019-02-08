#include <stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  int a[n],b[n];
  int i;
  int sum =0;
  int flag = 0;
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    sum += a[i];
  }
  for(i=0;i<n;i++){
    scanf("%d",&b[i]);
    if(a[i] >= b[i]){
      flag++;
    }
    if(flag == n){
      printf("0\n");
      return 0;
    }
  }
  int d[n];
  int check=0;
  for(i=0;i<n;i++){
    d[i] = a[i] - b[i];
    check += d[i];
  }
  if(check < 0){
    printf("-1");
    return 0;
  }

  
  return 0;
}
