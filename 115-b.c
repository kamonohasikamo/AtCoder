#include <stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  int i,j;
  int p[n];
  for(i=0;i<n;i++){
    scanf("%d",&p[i]);
  }
  int tmp;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(p[i] < p[j]){
        tmp = p[i];
        p[i] = p[j];
        p[j] = tmp;
      }
    }
  }
  int count=0;
  for(i=0;i<n-1;i++){
    count += p[i];
  }
  printf("%d\n",count + (p[n-1]/2));
}
