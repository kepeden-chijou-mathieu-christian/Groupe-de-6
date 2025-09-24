#include <stdio.h>

int main() {
    int taille;
    
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);
    
    int tab[taille];
    
    printf("Entrez les éléments du tableau :\n");
    for(int i = 0; i < taille; i++) {
        scanf("%d", &tab[i]);
    }
    
    printf("Tableau original :\n");
    for(int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    
    // Inversion
    for(int i = 0; i < taille/2; i++) {
        int temp = tab[i];
        tab[i] = tab[taille - 1 - i];
        tab[taille - 1 - i] = temp;
    }
    
    printf("Tableau inversé :\n");
    for(int i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    
    return 0;
}
