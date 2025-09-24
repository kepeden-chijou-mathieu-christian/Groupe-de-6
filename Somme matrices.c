#include <stdio.h>

int main() {
    int n, m;
    
    printf("Entrez le nombre de lignes et de colonnes : ");
    scanf("%d %d", &n, &m);
    
    int mat1[n][m], mat2[n][m], somme[n][m];
    
    printf("Entrez les éléments de la première matrice :\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("Entrez les éléments de la deuxième matrice :\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    // Calcul de la somme
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            somme[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    
    printf("La somme des matrices est :\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", somme[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
