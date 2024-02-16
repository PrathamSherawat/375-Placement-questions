//Distance of nearest cell
#include <bits/stdc++.h>
#define N 3
#define M 4
using namespace std;

void printDistance(int mat[N][M])
{
    int ans[N][M];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            ans[i][j] = INT_MAX;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++) {
            for (int k = 0; k < N; k++)
                for (int l = 0; l < M; l++) {
                    if (mat[k][l] == 1)
                        ans[i][j] = min(ans[i][j],abs(i - k) + abs(j - l));
            }
        }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
            cout << ans[i][j] << " ";
 
        cout << endl;
    }
}

int main()
{
    int mat[N][M] = { 0, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1, 0 };
    printDistance(mat); 
    return 0;
}
