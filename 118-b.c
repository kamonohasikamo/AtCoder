#include <stdio.h>

int main(void) {
  /*
    解法：配列に「人数」をカウント。
    　　　聞いた人数と一致する配列の添え字を返す。
    　　　居なければそのまま0を出力
  */
  int n,m;
  scanf("%d%d\n", &n, &m);
  int i,j;
  int a,k;
  int food[m];
  for (i=0; i<=m; i++) {
    food[i] = 0;
  }
  int ans = 0;
  for (i=0; i<n; i++) {
    scanf("%d", &k);
    for (j=0; j<k; j++) {
      scanf("%d", &a);
      food[a]++;
    }
  }
  for (i=1; i<=m; i++) {
    if (food[i] == n) {
      ans++;
    }
  }
  printf("%d\n", ans);
  return 0;
}
