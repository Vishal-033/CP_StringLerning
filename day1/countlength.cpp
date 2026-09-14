// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s = "vishal";
//     int count = 0;
//     for(int i = 0; s[i] != '\0'; i++)
//     {
//         count++;
//     }   
//     cout << count;  

// }


#include<bits/stdc++.h>
using namespace std;

int  length(string s)
{
    int count =0;
    for(int i=0;i<s.length();i++)
    {
        count++;
        
    }
    return count;
}

int main ()
{
    
    string s = "vishal  ";

    cout<<length(s);
    
    return 0;
}