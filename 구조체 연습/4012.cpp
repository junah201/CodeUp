//4012 : 석차 계산

#include <stdio.h>
#include <algorithm>

struct student{
    int score,idx,rank;
};

struct student A[250]; 

int N,cnt=1;

int main() {
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        scanf("%d",&A[i].score);
        A[i].idx=i;
    }
    std::sort(A,A+N,[](struct student a, struct student b){
        return a.score>b.score;
    });
    A[0].rank = 1;
    for(int i=1;i<N;i++) {
        cnt++;
        if(A[i-1].score==A[i].score) A[i].rank=A[i-1].rank;
        else A[i].rank=cnt;
    }
    std::sort(A,A+N,[](struct student a, struct student b){
        return a.idx<b.idx;
    });
    for(int i=0;i<N;i++) {
        printf("%d %d\n",A[i].score,A[i].rank);
    }
    return 0;
}