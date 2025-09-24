#include <stdio.h>

int main() {
    int taille, trie = 1;
    
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);
    
    int tab[taille];
    
    printf("Entrez les éléments du tableau :\n");
    for(int i = 0; i < taille; i++) {
        scanf("%d", &tab[i]);
    }
    
    for(int i = 0; i < taille - 1; i++) {
        if(tab[i] > tab[i+1]) {
            trie = 0;
            break;
        }
    }
    
    if(trie) {
        printf("Le tableau est trié\n");
    } else {
        printf("Le tableau n'est pas trié\n");
    }
    
    return 0;
}
