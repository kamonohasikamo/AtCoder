#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
  return *(long long int*)a - *(long long int*)b;
}

int main(){
  int n,k;
  scanf("%d %d",&n,&k);
  int i,j;
  long long int h[n];
  for(i=0;i<n;i++){
    scanf("%lld",&h[i]);
  }

  long long int tmp;
  qsort(h,n,sizeof(long long int),compare);
  tmp = h[k-1] - h[0];
  for(i=0;i<n-k+1;i++){
    if(tmp > (h[i+k-1] - h[i])){
      tmp = h[i+k-1] - h[i];
    }
    if(tmp==0){
      break;
    }
  }

  printf("%lld\n",tmp);

  return 0;
}
