#include <stdio.h>
int main(){int n,r=0,t;scanf("%d",&n);t=n;while(n){r=r*10+n%10;n/=10;}printf("%d",r);return 0;}