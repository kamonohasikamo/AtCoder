#include <stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  int a[n];
  int i;
  int sum = 0;
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    sum += a[i];
  }
  int average = sum / n;
  if(sum % n != 0){
    printf("-1\n");
  }
  
  return 0;
}
