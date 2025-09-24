#include <stdio.h>

int main() {
    int u[3], v[3], produit[3];
    
    printf("Entrez les composantes du premier vecteur (x y z) : ");
    scanf("%d %d %d", &u[0], &u[1], &u[2]);
    
    printf("Entrez les composantes du deuxième vecteur (x y z) : ");
    scanf("%d %d %d", &v[0], &v[1], &v[2]);
    
    produit[0] = u[1] * v[2] - u[2] * v[1];
    produit[1] = u[2] * v[0] - u[0] * v[2];
    produit[2] = u[0] * v[1] - u[1] * v[0];
    
    printf("Le produit vectoriel est : (%d, %d, %d)\n", 
           produit[0], produit[1], produit[2]);
    
    return 0;
}
