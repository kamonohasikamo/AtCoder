#include <stdio.h>

int main(){
  int m;
  scanf("%d",&m);
  double d = (double)m/1000;
  int vv=0;
  if(d<0.1){
    vv=0;
  }else if(0.1<=d && d<=5.0){
    vv=d*10;
  }else if(6.0<=d && d<=30.0){
    vv=d + 50.0;
  }else if(35.0<=d && d<=70.0){
    vv=((d - 30.0)/5) + 80;
  }else if(70.0 < d){
    vv=89;
  }

  if(vv<10){
    printf("0%d\n",vv);
  }else{
   printf("%d\n",vv);
  }
  return 0;
}
