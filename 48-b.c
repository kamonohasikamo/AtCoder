#include <stdio.h>

long long int function(long long int n, long long int x){
  if(n == -1){
    return 0;
  }else{
    return n/x + 1;
  }
}

int main(){
  long long int a,b,x;
  scanf("%lld%lld%lld",&a,&b,&x);
  long long int count=function(b, x) - function(a - 1, x);
  printf("%lld\n",count);
  return 0;
}
