//3520 : 체커 도전 (N-Queen Problem)

#include <stdio.h>
//#define min(a,b) (((a)<(b))?(a):(b))

int N,is_print;
int map[15][15];

int is_not_set(int y) {
    for(int i=1;i<=N;i++) if(map[y][i]) return 0;
    return 1;
}

int check(int x, int y) {
    //↑가로
    for(int i=1;i<=N;i++) if(map[y][i]) return 0;
    //→세로
    for(int i=1;i<=N;i++) if(map[i][x]) return 0;
    //↘대각선
    int temp_x=x;
    int temp_y=y;
    while(temp_x!=1 && temp_y!=1) {
        temp_x--;
        temp_y--;
    }
    while(temp_x<=N && temp_y<=N) {
        if(map[temp_y][temp_x]) return 0;
        temp_x++;
        temp_y++;
    }
    //↗대각선
    temp_x=x;
    temp_y=y;
    while(temp_x!=N && temp_y!=1) {
        temp_x++;
        temp_y--;
    }
    while(temp_x>0 && temp_y<=N) {
        if(map[temp_y][temp_x]) return 0;
        temp_x--;
        temp_y++;
    }
    return 1;
}

void print_queen() {
    for(int y=1;y<=N;y++) {
        for(int x=1;x<=N;x++) {
            if(map[y][x]) {
                printf("%d ",x);
                break;
            }
        }
    }
}

void print_map() {
    printf("==========\n");
    for(int y=1;y<=N;y++) {
        for(int x=1;x<=N;x++) {
            printf("%d ",map[y][x]);
        }
        printf("\n");
    }
    printf("==========\n");
}

void f(int idx, int x, int y) {
    printf("====%d %d====\n",x,y);
    print_map();
    if(is_print>3) return;
    if(idx==N) {
        is_print++;
        print_queen();
        return;
    }
    if(x>N || y>N) return;
    if(check(x,y)) {
        map[y][x] = 1;
        if(x==N) f(idx+1,1,y+1);
        else f(idx+1,x+1,y);
    }
    if(x==N && is_not_set(y)) return;
    map[y][x] = 0;
    if(x==N) f(idx,1,y+1);
    else f(idx,x+1,y);

    return;
}

int main() {
    scanf("%d",&N);
    f(0,1,1);
    return 0;
}