// Find a Common Element in all Rows of a Given Row-Wise Sorted Matrix
#include <bits/stdc++.h>
using namespace std;
#define M 4
#define N 5
  
int findCommon(int mat[M][N])
{
    int column[M];
    int min_row; 
    int i;
    for (i = 0; i < M; i++)
        column[i] = N - 1;
  
    min_row = 0;

    while (column[min_row] >= 0) {
        for (i = 0; i < M; i++) {
            if (mat[i][column[i]] < mat[min_row][column[min_row]])
                min_row = i;
        }
        int eq_count = 0;

        for (i = 0; i < M; i++) {
            if (mat[i][column[i]] > mat[min_row][column[min_row]]) {
                if (column[i] == 0)
                    return -1;
  
                column[i] -= 1; 
            }
            else
                eq_count++;
        }
        if (eq_count == M)
            return mat[min_row][column[min_row]];
    }
    return -1;
}
  

int main()
{
    int mat[M][N] = {
        { 1, 2, 3, 4, 5 },
        { 2, 4, 5, 8, 10 },
        { 3, 5, 7, 9, 11 },
        { 1, 3, 5, 7, 9 },
    };
    int result = findCommon(mat);
    if (result == -1)
        cout << "No common element";
    else
        cout << "Common element is " << result;
    return 0;
}