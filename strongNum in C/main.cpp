#include<stdio.h>

int fact(int n){
    int i,fac=1;

    for(i=1;i<=n;++i){
        fac*=i;
    }

    return fac;
}

int main(){
    int n,t,sum=0,m;

    printf("Enter a number:");
    scanf("%d",&n);

    m=n;

    while(m!=0){
        t=m%10;
        printf("%d\n",t);
        sum+=fact(t);
        printf("%d\n",sum);
        m=m/10;
    }

    if(sum==n){
        printf("Strong Number");
    }
    else{
        printf("Not Strong Number");
    }

    return 0;
}
