#include <stdio.h>

int main() {
    float a[10][10], b[10][10], sum[10][10];
    float aug[10][20];
    int n, i, j, k;

    printf("Enter order of matrix: ");
    scanf("%d", &n);

    // Input Matrix A
    printf("Enter elements of Matrix A:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%f", &a[i][j]);
        }
    }

    // Input Matrix B
    printf("Enter elements of Matrix B:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%f", &b[i][j]);
        }
    }

    // Addition
    printf("\nMatrix Addition:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            sum[i][j] = a[i][j] + b[i][j];
            printf("%0.2f ", sum[i][j]);
        }
        printf("\n");
    }

    // Saddle Point
    int found = 0;
    for(i=0;i<n;i++){
        float min = a[i][0];
        int col = 0;

        for(j=1;j<n;j++){
            if(a[i][j] < min){
                min = a[i][j];
                col = j;
            }
        }

        for(k=0;k<n;k++){
            if(a[k][col] > min)
                break;
        }

        if(k == n){
            printf("\nSaddle Point = %0.2f\n", min);
            found = 1;
        }
    }

    if(!found)
        printf("\nNo Saddle Point\n");

    // -------- INVERSE (n x n using Gauss-Jordan) --------
    printf("\n--- Inverse of Matrix A ---\n");

    // Form augmented matrix [A | I]
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            aug[i][j] = a[i][j];
        }
        for(j=n;j<2*n;j++){
            aug[i][j] = (i == (j-n)) ? 1 : 0;
        }
    }

    // Gauss-Jordan Elimination
    for(i=0;i<n;i++){
        float pivot = aug[i][i];

        if(pivot == 0){
            printf("Inverse does not exist (Zero pivot)\n");
            return 0;
        }

        // Make pivot = 1
        for(j=0;j<2*n;j++){
            aug[i][j] /= pivot;
        }

        // Make other elements 0
        for(k=0;k<n;k++){
            if(k != i){
                float factor = aug[k][i];
                for(j=0;j<2*n;j++){
                    aug[k][j] -= factor * aug[i][j];
                }
            }
        }
    }

    // Display Inverse
    printf("Inverse Matrix:\n");
    for(i=0;i<n;i++){
        for(j=n;j<2*n;j++){
            printf("%0.2f ", aug[i][j]);
        }
        printf("\n");
    }

    // -------- MAGIC SQUARE --------
    int magic = 1;
    float sum1 = 0;

    // First row sum
    for(j=0;j<n;j++)
        sum1 += a[0][j];

    // Check rows
    for(i=0;i<n;i++){
        float row = 0;
        for(j=0;j<n;j++)
            row += a[i][j];
        if(row != sum1)
            magic = 0;
    }

    // Check columns
    for(j=0;j<n;j++){
        float col = 0;
        for(i=0;i<n;i++)
            col += a[i][j];
        if(col != sum1)
            magic = 0;
    }

    // Diagonals
    float d1=0, d2=0;
    for(i=0;i<n;i++){
        d1 += a[i][i];
        d2 += a[i][n-i-1];
    }

    if(d1 != sum1 || d2 != sum1)
        magic = 0;

    if(magic)
        printf("\nIt is a Magic Square\n");
    else
        printf("\nNot a Magic Square\n");

    return 0;
}
