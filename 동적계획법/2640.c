//2640 : n의 k승 구하기 2

#include <stdio.h>

int n,k;
long long DP[10000000];

int get(int idx) {
    if(idx==0) return 1;
    else if(idx==1) return n%100000007;
    if(idx>=10000000) {
        if(idx%2==0) return (get(idx/2)*get(idx/2))%100000007;
        else return (get(idx/2)*get(idx/2+1))%100000007;
    }
    if(DP[idx]==0) {
        if(idx%2==0) DP[idx] = (get(idx/2)*get(idx/2))%100000007;
        else DP[idx] = (get(idx/2)*get(idx/2+1))%100000007;
    }
    return DP[idx];
}

int main() {
    scanf("%d %d",&n,&k);
    printf("%d",get(k));
    return 0;
}