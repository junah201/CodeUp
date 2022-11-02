/* Code By [ junah ]
GitHub : [ junah201 ] */

#include <bits/stdc++.h>
using namespace std;

int T, N;
long long DP[5002];

long long f(int idx)
{
    if (idx <= 1)
        return DP[1];

    if (DP[idx])
        return DP[idx];

    long long result = 0;

    for (int i = 1; i < idx; i++)
    {
        result += f(idx - i) * f(i - 1);
    }
    result += f(idx - 1);
    DP[idx] = result;
    return DP[idx];
}

int main()
{

    DP[1] = 1;

    scanf("%d", &N);
    printf("%lld\n", f(N));

    return 0;
}