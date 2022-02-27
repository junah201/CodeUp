// 2016 : 천단위 구분기호

#include <bits/stdc++.h>
using namespace std;

int N;
int tmp;
stack<char> s, result;

int main()
{
    scanf("%d", &N);
    while (N--)
    {
        scanf("%1d", &tmp);
        s.push(tmp);
    }
    while (!s.empty())
    {
        if (result.size() % 4 == 3 && result.size() != 0)
        {
            result.push(',');
        }
        result.push(s.top() + '0');
        s.pop();
    }
    while (!result.empty())
    {
        printf("%c", result.top());
        result.pop();
    }
    return 0;
}