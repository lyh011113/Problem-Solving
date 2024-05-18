#include<stdio.h>

N = 100;

int main()
{
int num, sum, arr[N];

scanf("%d %d", &num, &sum); // 1번 줄

for (int i =0;i<num;i++){ // 카드 수
    scanf("%d", &arr[i]);
}

int output = 0;
int result = 0;

for (int i = 0 ;i<num-2; i++){
    for(int j = i+1; j<num-1;j++){
        for(int k = j+1; k<num;k++){
            output = arr[i] + arr[j] + arr[k];
            if((output<=sum) && (output>result)) result = output;
        }
    }
}

    printf("%d", result);

    return 0;
}