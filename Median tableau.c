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
    
    // Tri à bulles
    for(int i = 0; i < taille - 1; i++) {
        for(int j = 0; j < taille - i - 1; j++) {
            if(tab[j] > tab[j+1]) {
                int temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }
    }
    
    // Calcul du médian
    if(taille % 2 == 0) {
        float median = (tab[taille/2 - 1] + tab[taille/2]) / 2.0;
        printf("Le médian est %.2f\n", median);
    } else {
        printf("Le médian est %d\n", tab[taille/2]);
    }
    
    return 0;
}
