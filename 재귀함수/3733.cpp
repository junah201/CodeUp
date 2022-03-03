// 3733 : 우박수 길이 (3n+1) (large)

#include <bits/stdc++.h>
using namespace std;

int A, B;
int ans1, ans2;
int DP[10000001];

int f(long long idx)
{
    // DP 배열 범위를 넘어갔으면
    if (idx >= 10000001)
    {
        if (idx % 2 == 1)
            return f(idx * 3 + 1) + 1;
        else
            return f(idx / 2) + 1;
    }
    // 미리 계산하지 않았으면
    if (DP[idx] == 0)
    {
        // 홀수
        if (idx % 2 == 1)
            DP[idx] = f(idx * 3 + 1) + 1;
        // 짝수
        else
            DP[idx] = f(idx / 2) + 1;
    }
    return DP[idx];
}

int main()
{
    DP[1] = 1;
    scanf("%d %d", &A, &B);
    for (int i = A; i <= B; i++)
    {
        f(i);

        if (DP[i] > ans2)
        {
            ans1 = i;
            ans2 = DP[i];
        }
    }
    printf("%d %d", ans1, ans2);
    return 0;
}
