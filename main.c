#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
// Je choisis un nombre au hasard entre 1 et 100
    srand(time(NULL));
    int nombre_magique = rand() % 100 + 1;

  
    int proposition = 0; //ce que le joueur va taper
    int nb_essais = 0; // combien de fois il va essayer

    printf("=== Jeu du nombre magique ===\n");
    printf("Choisissez un nombre entre 1 et 100 !\n");

    //je recommence tant que le joueur n'a pas trouver
    while (proposition != nombre_magique)
    {
        printf("Ta proposition : ");
        scanf("%d", &proposition); // va lire le nombre selectionner
        nb_essais++; // rajoute l'essai effectue

   
        if (proposition < nombre_magique)
        {
            printf("C'est plus grand !\n");
        }
        else if (proposition > nombre_magique)
        {
            printf("C'est plus petit !\n");
        }
        else if (proposition == nombre_magique)
        {
            printf("Bravo ! Tu as trouve %d en %d essai(s) !\n", nombre_magique, nb_essais);
        }
    }

    return 0;
}
