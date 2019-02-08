#include <stdio.h>

int main(){
  int a,b,c,x;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&x);
  int i,j,k;
  int count = 0;
  for(i=0;i<=a;i++){
    for(j=0;j<=b;j++){
      for(k=0;k<=c;k++){
        if( ((500*i)+(100*j)+(50*k)) == x){
          count++;
        }
      }
    }
  }
  printf("%d\n",count);
 return 0;
}
