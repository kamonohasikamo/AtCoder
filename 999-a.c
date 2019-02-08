#include <stdio.h>

int main(){
  int a,x,y;
  char s[1000];
  scanf("%d",&a);
  scanf("%d %d",&x,&y);
  scanf("%s",s);

  printf("%d %s\n",(a+x+y),s);
  return 0;
}
