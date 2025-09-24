#include <stdio.h>

int main() {
    int taille, valeur, trouve = 0;
    
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);
    
    int tab[taille];
    
    printf("Entrez les éléments du tableau :\n");
    for(int i = 0; i < taille; i++) {
        scanf("%d", &tab[i]);
    }
    
    printf("Entrez la valeur à rechercher : ");
    scanf("%d", &valeur);
    
    for(int i = 0; i < taille; i++) {
        if(tab[i] == valeur) {
            printf("Valeur trouvée à l'indice %d\n", i);
            trouve = 1;
            break;
        }
    }
    
    if(!trouve) {
        printf("Valeur non trouvée\n");
    }
    
    return 0;
}
