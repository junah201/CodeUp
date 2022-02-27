// 3129 : 올바른 괄호 2

#include <bits/stdc++.h>
using namespace std;

char input[50002];
stack<int> s;

int main()
{
    scanf("%s", input);
    for (int i = 0; i < strlen(input); i++)
    {
        if (input[i] == '(')
            s.push(1);
        else
        {
            if (s.empty())
            {
                printf("bad");
                return 0;
            }
            else
                s.pop();
        }
    }
    if (s.empty())
        printf("good");
    else
        printf("bad");
    return 0;
}