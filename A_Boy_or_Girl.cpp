#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
   
    string st;
    cin>>st;
    set<char> str;
    str.insert(st.begin(),st.end());
    cout<<((str.size()% 2 == 0) ? "CHAT WITH HER! ": "IGNORE HIM!");
    
    return 0;
}