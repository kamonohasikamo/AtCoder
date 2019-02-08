#include <stdio.h>

int main(){
  int n[4],i;
  scanf("%d %d %d %d",&n[0],&n[1],&n[2],&n[3]);
  int check[4];
  int count[4];
  for(i=0;i<4;i++){
    count[i] = 0;
  }
  for(i=0;i<4;i++){
    switch(n[i]){
      case 1:
        check[i] = 1;
        count[0]++;
        break;
      case 4:
        check[i] = 1;
        count[1]++;
        break;
      case 7:
        check[i] = 1;
        count[2]++;
        break;
      case 9:
        check[i] = 1;
        count[3]++;
        break;
      default:
        check[i] = 0;
        break;
    }
  }
  int flag = 0;
  for(i=0;i<4;i++){
    if(check[i] == 1 && count[i] == 1){
      flag++;
    }
  }
  if(flag == 4){
    printf("YES\n");
  }else{
    printf("NO\n");
  }
  return 0;
}
