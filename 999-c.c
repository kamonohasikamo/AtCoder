#include <stdio.h>

int main(){
  int a;
  int i=0,count=0;
  scanf("%d",&a);
  for(i=0;i<3;i++){
    if(a%10 == 1){
      count++;
    }
    a /= 10;
  }
  printf("%d\n",count);
  return 0;
}
