#include <bits/stdc++.h>
using namespace std;

int longestSubstring(string s)
{
    int left = 0;
    int ans = 0;

    set<char> st;

    for(int right = 0; right < s.length(); right++)
    {
        // Agar current character already window mein hai
        while(st.count(s[right]))
        {
            // Left character ko window se remove karo
            st.erase(s[left]);

            // Left ko aage move karo
            left++;
        }

        // Current character ko window mein add karo
        st.insert(s[right]);

        // Current window ki length
        int length = right - left + 1;

        // Maximum length update
        ans = max(ans, length);
    }

    return ans;
}

int main()
{
    string s = "abcdefghiabcbb";

    cout << longestSubstring(s);

    return 0;
}