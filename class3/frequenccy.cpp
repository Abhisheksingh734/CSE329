#include <bits/stdc++.h>

using namespace std;

bool anagram(string s1, string s2)
{
    unordered_map<char, int> mp;

    for (int i = 0; i < s1.size(); i++)
    {
        mp[s1[i]]++;
    }

    for (int i = 0; i < s2.size(); i++)
    {
        if (mp.find(s2[i]) != mp.end())
        {
            mp[s2[i]]--;
            if (mp[s2[i]] == 0)
                mp.erase(s2[i]);
        }
        else
        {
            return false;
        }
    }

    if (mp.size() > 0)
        return false;

    return true;
}

void countFrequency(string str, int &count)
{
    unordered_map<char, int> mp;
    for (int i = 0; i < str.size(); i++)
    {
        mp[str[i]]++;
    }

    for (auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }

    count = mp.size();
    count = 26 - count;
}

int main()
{
    string str = "abhishek";
    int cnt = 0;
    countFrequency(str, cnt);
    cout << cnt;

    string s1 = "abcd";
    string s2 = "cbad";
    cout << endl;
    if (anagram(s1, s2))
        cout << "strings are anagram";
    else
        cout << "not anagram";
}