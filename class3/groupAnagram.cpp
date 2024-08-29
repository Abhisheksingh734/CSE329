#include <bits/stdc++.h>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{

    unordered_map<string, vector<string>> mp;
    vector<vector<string>> ans;

    for (int i = 0; i < strs.size(); i++)
    {
        string key = strs[i];
        sort(key.begin(), key.end());

        mp[key].push_back(strs[i]);
    }

    for (auto x : mp)
    {
        ans.push_back(x.second);
    }

    return ans;
}

int main()
{
    vector<string> str = {"eat", "tea", "tan", "ate", "nat", "bat"};

    vector<vector<string>> res = groupAnagrams(str);

    for (auto x : res)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
}