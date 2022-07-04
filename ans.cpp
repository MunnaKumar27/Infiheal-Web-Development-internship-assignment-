#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> st;
    string s;
    cin >> s;
    st.push(s[0]);
    for (int i = 0; i < s.length(); i++)
    {
        if (tolower(st.top()) == tolower(s[i]))
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    map<char, int >mp;
    for (int i=0; i<s.length(); i++){
        mp[(tolower(s[i]))]++;
    }
    int mx=0, x;
    for(auto it:mp){
        x= it.second;
        mx = max(mx,x);
    }
    cout<<st.size()<<endl;
    cout<<s.length()-mx<<endl;
}