#include <stdio.h>

int main(){
  int a,b;
  scanf("%d %d",&a,&b);

  (a*b)%2 == 0 ? printf("Even\n") : printf("Odd\n") ;
  return 0;
}
