#include <stdio.h>

int main (void) {
  long long int a,b;
  scanf("%lld%lld", &a, &b);

  long long int ans=a;
  long long int i;
  for (i=a+1;i<=b;i++){
    ans ^= i;
  }
  printf("%lld\n", ans);
  return 0;
}
