#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    srand(time(NULL));
    int nombre_magique = rand() % 100 + 1;

  
    int proposition = 0;
    int nb_essais = 0;

    printf("=== Jeu du nombre magique ===\n");
    printf("Choisissez un nombre entre 1 et 100 !\n");

    
    while (proposition != nombre_magique)
    {
        printf("Ta proposition : ");
        scanf("%d", &proposition);
        nb_essais++;

   
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
