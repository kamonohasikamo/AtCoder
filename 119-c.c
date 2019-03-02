#include <stdio.h>
#include <stdlib.h>
#include <math.h>

static int N,A,B,C;
static int LENGHT[8];

int search (int cur, int a, int b, int c) {
  if (cur == N) {
    int cost = abs(a - A) + abs(b - B) + abs(c - C) - 30;
    if (a == 0 || b == 0 || c == 0) {
      return 100000000;
    } else {
      return cost;
    }
  }
  int cost1 = search(cur+1, a, b, c);
  int cost2 = search(cur+1, a+LENGHT[cur], b, c) + 10;
  int cost3 = search(cur+1, a, b+LENGHT[cur], c) + 10;
  int cost4 = search(cur+1, a, b, c+LENGHT[cur]) + 10;
  return fmin(fmin(cost1, cost2), fmin(cost3, cost4));
}

int main (void) {
  scanf("%d %d %d %d", &N, &A, &B, &C);
  int i;
  for (i=0;i<N;i++) {
    scanf("%d", &LENGHT[i]);
  }
  printf("%d\n", search(0, 0, 0, 0));
  return 0;
}
