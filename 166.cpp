// Maximum length chain of pairs
#include <bits/stdc++.h>
using namespace std;

class Pair
{
    public:
    int a;
    int b;
};

int maxChainLength( Pair arr[], int n)
{
    int i, j, max = 0;
    int *mcl = new int[sizeof( int ) * n ];
    for ( i = 0; i < n; i++ )
        mcl[i] = 1;
    for ( i = 1; i < n; i++ )
        for ( j = 0; j < i; j++ )
            if ( arr[i].a > arr[j].b &&
                    mcl[i] < mcl[j] + 1)
                mcl[i] = mcl[j] + 1;
    for ( i = 0; i < n; i++ )
        if ( max < mcl[i] )
            max = mcl[i];
    return max;
}
int main()
{
    Pair arr[] = { {5, 24}, {15, 25},{27, 40}, {50, 60} };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Length of maximum size chain is "<< maxChainLength( arr, n );
    return 0;
}