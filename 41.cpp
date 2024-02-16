// Smallest Window in a String Containing all the Characters of Another String
#include<bits/stdc++.h>
#define NO_OF_CHARS 256
using namespace std;

string findSubString(string S, string T)
{
    int Slen = S.length();
    int Tlen = T.length();

    if (Slen < Tlen)
    {
        cout << "No such window exists";
        return "";
    }
    int S_count[NO_OF_CHARS] = {0};
    int T_count[NO_OF_CHARS] = {0};

    for (int i = 0; i < Tlen; i++)
        T_count[T[i]]++;
 
    int start = 0, start_index = -1, min_len = INT_MAX;
    int count = 0;
    for (int i = 0; i < Slen ; i++)
    {
        S_count[S[i]]++;
        if (T_count[S[i]] != 0 && S_count[S[i]] <= T_count[S[i]] )
            count++;

        if (count == Tlen)
        {
            while ( S_count[S[start]] > T_count[S[start]] || T_count[S[start]] == 0)
            {
 
                if (S_count[S[start]] > T_count[S[start]])
                    S_count[S[start]]--;
                start++;
            }
            int len_window = i - start + 1;
            if (min_len > len_window)
            {
                min_len = len_window;
                start_index = start;
            }
        }
    }
    if (start_index == -1)
    {
       cout << "No such window exists";
       return "";
    }
    return S.substr(start_index, min_len);
}
 
int main()
{
    string S = "tutorial cup";
    string T = "oti";
 
    cout << "Smallest window is : "<< findSubString(S, T)<<endl;
    return 0;
}