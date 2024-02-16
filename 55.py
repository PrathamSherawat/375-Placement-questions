# Given a Matrix of ‘O’ and ‘X’, Replace ‘O’ with ‘X’ if Surrounded by ‘X’

M = 6
N = 6
 

def floodFillUtil(mat, x, y, prevV, newV):
 
    # Base Cases
    if (x < 0 or x >= M or y < 0 or y >= N):
        return
 
    if (mat[x][y] != prevV):
        return
 
    # Replace the color at (x, y)
    mat[x][y] = newV
 
    # Recur for north, east, south and west
    floodFillUtil(mat, x + 1, y, prevV, newV)
    floodFillUtil(mat, x - 1, y, prevV, newV)
    floodFillUtil(mat, x, y + 1, prevV, newV)
    floodFillUtil(mat, x, y - 1, prevV, newV)
 

def replaceSurrounded(mat):
 
    # Step 1: Replace all 'O's with '-'
    for i in range(M):
        for j in range(N):
            if (mat[i][j] == 'O'):
                mat[i][j] = '-'
 
     # Left Side
    for i in range(M):
        if (mat[i][0] == '-'):
            floodFillUtil(mat, i, 0, '-', 'O')
     
    # Right side
    for i in range(M):
        if (mat[i][N - 1] == '-'):
            floodFillUtil(mat, i, N - 1, '-', 'O')
     
    # Top side
    for i in range(N):
        if (mat[0][i] == '-'):
            floodFillUtil(mat, 0, i, '-', 'O')
     
    # Bottom side
    for i in range(N):
        if (mat[M - 1][i] == '-'):
            floodFillUtil(mat, M - 1, i, '-', 'O')

    for i in range(M):
        for j in range(N):
            if (mat[i][j] == '-'):
                mat[i][j] = 'X'

if __name__ == '__main__':
    mat = [ [ 'X', 'O', 'X', 'O', 'X', 'X' ],[ 'X', 'O', 'X', 'X', 'O', 'X' ],[ 'X', 'X', 'X', 'O', 'X', 'X' ],
            [ 'O', 'X', 'X', 'X', 'X', 'X' ],[ 'X', 'X', 'X', 'O', 'X', 'O' ],[ 'O', 'O', 'X', 'O', 'O', 'O' ] ];
 
    replaceSurrounded(mat)
    for i in range(M):
        print(*mat[i])