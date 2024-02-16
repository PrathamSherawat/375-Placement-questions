// Create a Matrix with Alternating Rectangles of O and X
#include <bits/stdc++.h>
using namespace std;

void fill0X(int m, int n)
{

    int i, k = 0, l = 0;

    int r = m, c = n;
    char a[m][n];
    char x = 'X'; 
 

    while (k < m && l < n)
    {

        for (i = l; i < n; ++i)
            a[k][i] = x;
        k++;

        for (i = k; i < m; ++i)
            a[i][n-1] = x;
        n--;

        if (k < m)
        {
            for (i = n-1; i >= l; --i)
                a[m-1][i] = x;
            m--;
        }
        if (l < n)
        {
            for (i = m-1; i >= k; --i)
                a[i][l] = x;
            l++;
        }

        x = (x == '0')? 'X': '0';
    }

    for (i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout <<" "<< a[i][j];
        cout <<"\n";
    }
}

int main()
{
    puts("Output for m = 5, n = 6");
    fill0X(5, 6);
 
    puts("\nOutput for m = 4, n = 4");
    fill0X(4, 4);
 
    puts("\nOutput for m = 3, n = 4");
    fill0X(3, 4);
 
    return 0;
}
 