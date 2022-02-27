// 1402 : 거꾸로 출력하기 3

#include <bits/stdc++.h>
using namespace std;

int N;
stack<int> s;

int main()
{
    scanf("%d", &N);
    for (int i = 0, tmp; i < N; i++)
    {
        scanf("%d", &tmp);
        s.push(tmp);
    }
    while (N--)
    {
        printf("%d ", s.top());
        s.pop();
    }
    return 0;
}