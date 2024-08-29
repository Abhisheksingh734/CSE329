#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<char, int> &a, pair<char, int> &b)
{
    return a.second > b.second;
}

string frequencySort(string s)
{
    map<char, int> mp;

    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }

    vector<pair<char, int>> v;

    for (auto &it : mp)
    {
        v.push_back(it);
    }

    sort(v.begin(), v.end(), cmp);

    string ans = "";
    for (auto &ele : v)
    {
        for (int i = 0; i < ele.second; i++)
        {
            ans.push_back(ele.first);
        }
    }

    return ans;
}

int main()
{

    string s1 = "tree";
    s1 = frequencySort(s1);

    cout << s1;
}