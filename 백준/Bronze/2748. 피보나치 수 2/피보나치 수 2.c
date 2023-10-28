#include<stdio.h>

int main(){

    int n;
    long long fn=1;
    long long fn_1=1;
    long long fn_2=0;

    scanf("%d",&n);

    for(int i=0;i<n-1;i++){
        fn=fn_1+fn_2;
        fn_2=fn_1;
        fn_1=fn;
    }
    printf("%lld\n",fn);
    return 0;
}