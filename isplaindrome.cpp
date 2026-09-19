#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:

    bool isplaindropme(string s)
    {
        int len = s.length();

        for(int i = 0; i < len / 2; i++)
        {
            if(s[i] != s[len - i - 1])
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    string s = "abba";

    Solution ss;

    bool ans = ss.isplaindropme(s);

    cout << boolalpha << ans;

    return 0;
}