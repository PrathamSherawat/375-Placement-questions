// Count natural numbers whose permutation greater number
#include <bits/stdc++.h>
using namespace std;

int countNumber(int n)
{
    int result = 0;
    stack<int> s;
    for (int i = 1; i <= 9; i++)
    {
         
        if (i <= n)
        {
            s.push(i);
            result++;
        }
        while (!s.empty())
        {
            int tp = s.top();
            s.pop();
            for (int j = tp % 10; j <= 9; j++)
            {
                int x = tp * 10 + j;
                if (x <= n)
                {
                    s.push(x);
                    result++;
                }
            }
        }
    }
    return result;
}
 
int main()
{
    int n = 15;
    cout << countNumber(n) << endl;
    return 0;
}