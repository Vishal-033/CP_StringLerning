#include <bits/stdc++.h>
using namespace std;

int length(string s)
{
    int count = 0;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
           s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
    }

    return count;
}

int main()
{
    string s = "vishal";

    cout << length(s);

    return 0;
}