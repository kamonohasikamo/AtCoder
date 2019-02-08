#include <stdio.h>

int main(){
  char w[30];
  int i,j;
  scanf("%s",&w);

  for(i=0;w[i]!='\0';i++){
    if(w[i] == 'a' || w[i] == 'i' ||w[i] == 'u' ||w[i] == 'e' ||w[i] == 'o'){
      for(j=i;w[j]!='\0';j++){
        w[j] = w[j+1];
      }
      i-=1;
    }
  }
  for(i=0;w[i]!='\0';i++){
    printf("%c",w[i]);
  }
  printf("\n");
  return 0;
}
