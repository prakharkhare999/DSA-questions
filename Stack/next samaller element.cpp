#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    stack<int> s;
    vector<int> ans(v.size());
    s.push(-1);
    for (int i = v.size() - 1; i >= 0; i--)
    {
        int curr = v[i];
        while (s.top() >= curr)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
    // printing the ans
    for (int j = 0; j< v.size(); j++)
    {
        cout << ans[j] << " ";
    }
}