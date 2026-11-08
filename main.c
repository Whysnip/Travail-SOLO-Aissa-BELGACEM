#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // 1. Préparer le nombre aléatoire
    srand(time(NULL));
    int nombre_magique = rand() % 100 + 1;

    // 2. Préparer les variables
    int proposition = 0;
    int nb_essais = 0;

    printf("=== Jeu du nombre magique ===\n");
    printf("J'ai choisi un nombre entre 1 et 100. A toi de le trouver !\n");

    // 3. Boucle : on recommence tant que le joueur n'a pas trouvé
    while (proposition != nombre_magique)
    {
        printf("Ta proposition : ");
        scanf("%d", &proposition);
        nb_essais++;

        // 4. Les trois conditions
        if (proposition < nombre_magique)
        {
            printf("Le nombre magique est plus grand !\n");
        }
        else if (proposition > nombre_magique)
        {
            printf("Le nombre magique est plus petit !\n");
        }
        else if (proposition == nombre_magique)
        {
            printf("Bravo ! Tu as trouve %d en %d essai(s) !\n", nombre_magique, nb_essais);
        }
    }

    return 0;
}