// 4029 : 격자길

#include <stdio.h>

int H,W,map[20][20];
double xy;
int cnt;

int bfs(int x, int y) {
	if(x==H-1 && y== W-1) {
		cnt++;
		return 0;
	}
	if(map[x+1][y]) bfs(x+1, y);
	if(map[x][y+1]) bfs(x, y+1);
	return 0;
}

int main() {
	scanf("%d %d", &H, &W);
	xy = H * (1.0) / W;
	W++;
	H++;
	for(int x=0;x<W;x++) {
		for(int y=0;y<H;y++) {
			if(y==0) map[y][x] = 1;
			else if(x==0) map[y][x] = 0;
			else if(xy*((1.0)*x)>=y*(1.0)) map[y][x] = 1;
			else map[y][x] = 0;
		}
	}
	bfs(0,0);
	printf("%d",cnt);
	return 0;
}
