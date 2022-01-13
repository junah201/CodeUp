//3011 : 거품 정렬(Bubble Sort)

#include <stdio.h>

int N,map[1000],idx,last,check;

int main() {
    scanf("%d",&N);
    for(int i=0;i<N;i++) scanf("%d",&map[i]);
    for(int i=N-1;i>0;i--) {
        check=0;
        for(int j=0;j<i;j++) {
            if(map[j]>map[j+1]) {
                int temp=map[j];
                map[j]=map[j+1];
                map[j+1]=temp;
                check=1;
            }
        }
        if(check) last++;
    }
    printf("%d",last);
    return 0;
}