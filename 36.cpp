// Group Anagrams
#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> group(vector<string>& str) {
        vector<vector<string> > vec;
        unordered_map<string,vector<string> > m;
        for(int i=0;i<str.size();i++){
                string x=str[i];
                sort(x.begin(),x.end());
                m[x].push_back(str[i]);
        }
        for(auto i:m){
            vec.push_back(i.second);
        }
        return vec;
    }
int main()
{
vector<string> str ={"ram","mar","listen","silent","lentsi","more","like"};
vector<vector<string>> ans;
  ans=group(str);
   cout<<"The grouped anagrams are as follows:"<<endl;
   for (int i = 0; i <ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}