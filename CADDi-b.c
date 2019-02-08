#include <stdio.h>

int main(){
  int n,h,w;
  scanf("%d %d %d",&n,&h,&w);
  int i;
  int a[n],b[n];
  int count = 0;
  for(i=0;i<n;i++){
    scanf("%d %d",&a[i],&b[i]);
    if((a[i] >= h) && (b[i] >= w)){
      count++;
    }
  }

  printf("%d\n",count);  
  return 0;
}
