#include<stdio.h>
main()
{
    int n,i;
    scanf("%d",&n);
    for(i=10;i>=1;i--){
        if(n%i==0){
            printf("%d\n",i);
            break;
            }
        }
}