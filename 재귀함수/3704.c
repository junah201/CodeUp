//3704 : 계단 오르기 2

#include <stdio.h>

int N;
int DP[100001];

int get(int idx) {
    if(DP[idx]!=0) return DP[idx];
    if(idx==1) DP[idx]=1;
    else if(idx==2) DP[idx]=2;
    else if(idx==3) DP[idx]=4;
    else DP[idx] = (get(idx-1)+get(idx-2)+get(idx-3))%1000;
    return DP[idx];
}

int main() {
    scanf("%d",&N);
    printf("%d",get(N));
    return 0;
}