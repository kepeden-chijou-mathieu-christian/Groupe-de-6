#include <stdio.h>

int main() {
    int a, b, resultat = 0;
    
    printf("Entrez deux nombres positifs : ");
    scanf("%d %d", &a, &b);
    
    for(int i = 0; i < b; i++) {
        resultat += a;
    }
    
    printf("Le résultat de %d × %d est %d\n", a, b, resultat);
    
    return 0;
}
