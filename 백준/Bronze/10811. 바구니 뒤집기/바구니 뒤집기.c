#include <stdio.h>

int now[100];
int next[100];

int main(){

    int N, M =0;
    
    scanf("%d" ,&N);
    scanf("%d", &M);

    for(int i = 0;i<N;i++){
        now[i]=i+1;
        next[i]=i+1;
    } // initialization

    for(int i = 0; i<M;i++){

    int start, end;

    scanf("%d" ,&start);
    scanf("%d", &end);

        for(;start<end;start++ && end--){
            if(start<end){
                next[start-1] = now[end-1];
                next[end-1] = now[start-1];
            }
    }

    for(int i = 0;i<N;i++){
    now[i] = next[i];
} 

    }


for(int i = 0;i<N;i++){
    printf("%d ",next[i]);
} //print
    
    return 0;
}
