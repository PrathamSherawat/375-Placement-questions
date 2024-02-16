// paper-cut minimum number squares
#include<bits/stdc++.h>
using namespace std;
int minimumSquare(int a, int b)
{
    long long result = 0, rem = 0;
    if (a < b)
        swap(a, b);

    while (b > 0)
    {
        result += a/b;
        long long rem = a % b;
        a = b;
        b = rem;
    } 
    return result;
}
int main()
{
    int n = 13, m = 29;
    cout << minimumSquare(n, m);
    return 0;
}