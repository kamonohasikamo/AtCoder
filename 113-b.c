#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n,t,a,i,ans=0;
    scanf("%d",&n);
    scanf("%d %d",&t,&a);
    int h[n];
    for(i=0;i<n;i++){
        scanf("%d",&h[i]);
        h[i]=abs(500*(t-a)-3*h[i]);
        if(h[ans]>h[i]){
            ans=i;
        }
    }
    printf("%d\n", ans+1);
    return 0;
}
