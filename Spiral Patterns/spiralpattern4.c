#include <stdio.h>

int main()
{
    int n = 5, x = 0, y = 0, z = 25;
    int a[n][n];

    for(int t = 0; t <= n/2; t++) {
        if(t == n/2)
            z++;
        
        for(int j = y; j < n - y; j++) {
            a[x][j] = z;
            z--;
        }

        for(int i = x + 1; i < n - x - 1; i++) {
            a[i][n-y-1] = z;
            z--;
        }

        for(int j = n - y - 1; j >= y; j--) {
            a[n-x-1][j] = z;
            z--;
        }

        for(int i = n - x -2; i > x; i--) {
            a[i][y] = z;
            z--;
        }
        
        x++;
        y++;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n ; j++) 
            printf("%02d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
