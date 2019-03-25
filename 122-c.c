#include <stdio.h>

int main(void) {
  int n,q;
  scanf("%d%d", &n, &q);
  char s[n];
  scanf("%s", s);
  int i;
  int l, r;
  int a[n];
  for(i = 1;i < n;i++){
    a[i] = a[i - 1];
    if(s[i - 1] == 'A' && s[i] == 'C'){
      a[i]++;
    }
  }

  while(q--){
    scanf("%d%d", &l, &r);
    l--;
    r--;
    printf("%d\n", a[r] - a[l]);
  }
  return 0;
}
