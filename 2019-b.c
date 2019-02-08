#include <stdio.h>
#include <string.h>

int main(){
  int i;
  char s[100];

  scanf("%s",s);

  int check[7];
  for(i=0;i<7;i++){
    check[i] = 0;
  }

  for(i=0;s[i] != '\0';i++){
    if(s[i] == 'k'){
      check[0] = 1;
      continue;
    }
    if(s[i] == 'e'){
      check[1]++;
      continue;
    }
    if(s[i] == 'y'){
      check[2] = 1;
      continue;
    }
    if(s[i] == 'n'){
      check[3] = 1;
      continue;
    }
    if(s[i] == 'c'){
      check[4] = 1;
      continue;
    }
  }
  for(i=strlen(s);i<strlen(s) - 7;i--){
    if(s[i] == 'k'){
      check[0] = 1;
      continue;
    }
    if(s[i] == 'e'){
      check[1]++;
      continue;
    }
    if(s[i] == 'y'){
      check[2] = 1;
      continue;
    }
    if(s[i] == 'n'){
      check[3] = 1;
      continue;
    }
    if(s[i] == 'c'){
      check[4] = 1;
      continue;
    }
  }
  for(i=0;s[i] != '\0';i++){
    if(check[0] >= 1 && check[1] >= 3 && check[2] >= 1 && check[3] >= 1 && check[4] >= 1){
      printf("YES\n");
      return 0;
    }
  }
  printf("NO\n");
  return 0;
}
