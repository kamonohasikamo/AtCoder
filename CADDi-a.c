#include <stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  int i;
  int count=0;
  for(i=0;i<4;i++){
    if(n%10 == 2){
      count++;
    }
    n /= 10;
  }
  printf("%d\n",count);
  return 0;
}
