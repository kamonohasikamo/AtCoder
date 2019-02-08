#include <stdio.h>
#include <stdlib.h>

int main()
{
  long int s[15];
  long long int n;
  scanf("%lld",&n);
  int i;
  long int number = n;
  int digit;
  for(i=0;i<15;i++){
    s[i] = 0L;
  }
  while(number!=0L){
    number = number / 10L;
    ++digit;
  }
  for(i=0;i < digit;i++){
    s[i] = (n%10L);
    n /= 10L;
  }
  int check=0;
  int mini=753,min=0;
  for(i=0;s[i]!=0;i++)
  {
    check = s[i+2]*100+s[i+1]*10+s[i];
    min = abs(check - 753);
    if(mini > min)
    {
      mini = min;
    }
  }
  printf("%d\n",mini);
  return 0;
}
