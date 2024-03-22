#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int main() {
    struct Tache *Task = NULL;
    int nmbr_tache = 0;
    int choix;
    while(true){

        printf("\nTo-Do-List\n\n");
        printf("Menu des options :\n");
        printf("1 - Vouler vous Ajouter une t�che?\n");
        printf("2 - Vouler vous Modifier une t�che?\n");
        printf("3 - Vouler vous Supprimer une t�che?\n");
        printf("4 - Vouler vous Afficher les t�ches?\n");
        printf("4 - Vouler vous Afficher les t�ches par priorete ?\n");
        printf("Entrez votre choix : ");
        scanf("%d",&choix);
        switch(choix){
            case 1:
                Ajouter_tache(&Task, &nmbr_tache);
                break;
            case 2:
                Modifier_tache(Task, nmbr_tache);

                break;
            case 3:
                Suppression_tache(&Task, &nmbr_tache);
                break;
            case 4:
                printf("Les tache existent :\n");
                Afficher_tache(Task, nmbr_tache);

                break;
            case 5:
                printf("\n\nLes t�ches tri�es par priorit� : \n");
                Trier_priorite(Task, nmbr_tache);
                Afficher_tache(Task, nmbr_tache);
                break;
            default:
                printf("Choix invalide\n");
               break;
        }
    }

    free(Task);
    return 0;
}
