// Longest Substring without Repeating Characters
#include <iostream>
using namespace std;

class Solution {
public:
        string s="abcabca";
        cout<<s.length();
        unordered_set<char> ss;
        int i = 0, ans = 0;
        for (int j = 0; j < s.size(); ++j) {
            while (ss.count(s[j])) ss.erase(s[i++]);
            ss.insert(s[j]);
            ans = max(ans, j - i + 1);
        }
        cout<< ans;

};