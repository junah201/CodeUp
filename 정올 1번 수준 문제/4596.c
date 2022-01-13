//4596 : 최대값 2

#include <stdio.h>

int max,x,y;
int map[9][9];

int main() {
    for(int i=0;i<9;i++) {
        for(int j=0;j<9;j++) {
            scanf("%d",&map[i][j]);
            if(map[i][j]>max) {
                max=map[i][j];
                x=i+1;
                y=j+1;
            }
        }
    }
    printf("%d\n%d %d",max,x,y);
    return 0;
}