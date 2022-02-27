// 1714 : 숫자 거꾸로 출력하기

#include <bits/stdc++.h>
using namespace std;

int tmp;
stack<int> s;

int main()
{
    while (scanf("%1d", &tmp) != EOF)
        s.push(tmp);
    while (!s.empty())
    {
        printf("%d", s.top());
        s.pop();
    }
    return 0;
}