#include <stdio.h>

int main() {
    int n, m;
    
    printf("Entrez les dimensions (n m) pour vecteur 1×n et matrice n×m : ");
    scanf("%d %d", &n, &m);
    
    int vecteur[n], matrice[n][m], resultat[m];
    
    printf("Entrez les éléments du vecteur :\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &vecteur[i]);
    }
    
    printf("Entrez les éléments de la matrice :\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &matrice[i][j]);
        }
    }
    
    // Initialisation du résultat à zéro
    for(int j = 0; j < m; j++) {
        resultat[j] = 0;
    }
    
    // Calcul du produit
    for(int j = 0; j < m; j++) {
        for(int i = 0; i < n; i++) {
            resultat[j] += vecteur[i] * matrice[i][j];
        }
    }
    
    printf("Le résultat du produit vecteur × matrice est :\n");
    for(int j = 0; j < m; j++) {
        printf("%d ", resultat[j]);
    }
    printf("\n");
    
    return 0;
}
