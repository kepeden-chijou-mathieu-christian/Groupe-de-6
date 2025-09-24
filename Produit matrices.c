#include <stdio.h>

int main() {
    int n, m, p;
    
    printf("Entrez les dimensions (n m p) pour matrices n×m et m×p : ");
    scanf("%d %d %d", &n, &m, &p);
    
    int mat1[n][m], mat2[m][p], produit[n][p];
    
    printf("Entrez la première matrice :\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("Entrez la deuxième matrice :\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    // Initialisation du produit à zéro
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            produit[i][j] = 0;
        }
    }
    
    // Calcul du produit
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            for(int k = 0; k < m; k++) {
                produit[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    
    printf("Le produit des matrices est :\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            printf("%d ", produit[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
