#include <stdio.h>

int main(){
  int l[3];
  scanf("%d %d %d", &l[0],&l[1],&l[2]);

  if(l[0] == l[1]){
    printf("%d\n",l[2]);
    return 0;
  }
  if(l[1] == l[2]){
    printf("%d\n",l[0]);
    return 0;
  }
  if(l[2] == l[0]){
    printf("%d\n",l[1]);
    return 0;
  }

}
