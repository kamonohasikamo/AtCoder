#include <stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  int t[n],x[n],y[n];
  int i;
  for(i=0;i<n;i++){
    scanf("%d %d %d",&t[i], &x[i],&y[i]);
  }
  int j,k;
	for(i=0;i<n;i++){
    printf("%d %d %d", t[i], x[i], y[i]);
  }

  return 0;
}
