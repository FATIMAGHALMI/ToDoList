#include "header.h"
/*----definition de structure----*/
struct Tache{
    char Nom [100];
    int priorite;
    int Etat;
    int jour_echeance;
    int mois_echeance;
    int annee_echeance;
};



/*----Fonction de l'ajout----*/
void Ajouter_tache(struct Tache **ptr_tache , int *n){
    (*n)++;
    *ptr_tache = (struct Tache*)realloc(*ptr_tache , (*n) * sizeof(struct Tache));
    if(*ptr_tache == NULL){
            printf("L'echoue d'allocation !");
    exit(1) ;
    }
    printf("Donner le nom de nouvelle tache :");
    scanf("%s",(*ptr_tache)[*n - 1].Nom);
    printf("Priorite de la tache (Haute=2 Moyenne=1 Basse=0): ");
    scanf("%d", &((*ptr_tache)[*n - 1].priorite));
    printf("Date d'échéance (jour mois annee)\nJour :");
    scanf("%d",&((*ptr_tache)[*n - 1].jour_echeance));
    printf("Mois :");
    scanf("%d",&((*ptr_tache)[*n - 1].mois_echeance));
    printf("Annees :");
    scanf("%d",&((*ptr_tache)[*n - 1].annee_echeance));
    printf("Donnez l'etat de votre tache :");
    scanf("%d",&((*ptr_tache)[*n - 1].Etat));
    printf("Tache ajoutee : %s |  Priorite : %d |  Date d'échéance : %d-%d-%d  |  Etat : %s\n", (*ptr_tache)[*n - 1].Nom, (*ptr_tache)[*n - 1].priorite,
    (*ptr_tache)[*n - 1].jour_echeance,
    (*ptr_tache)[*n - 1].mois_echeance,
    (*ptr_tache)[*n - 1].annee_echeance ,
    (*ptr_tache)[*n - 1].Etat ? "Terminer" : "Pas encour");


}


/*----fonction de modification----*/
void Modifier_tache(struct Tache *ptr_tache , int n, int indiceTache){
    if(n == 0 ){
        printf("Aucune tache a modifier \n");
    return;
    }
     printf("Quelle tache voulez-vous modifier ?\n");
     scanf("%d",&indiceTache);
    if(indiceTache > n){
            printf("Cette tache n'existe pas\n");
    return;
    }
    printf("Nouveau nom de la tache :\n");
    scanf("%s", ptr_tache[indiceTache - 1].Nom);
    printf("Priorite de la tache (Haute=2 Moyenne=1 Basse=0):\n");
    scanf("%d", &ptr_tache[indiceTache - 1].priorite);
    printf("Date d'échéance (jour mois annee)\nJour :");
    scanf("%d",&ptr_tache[indiceTache - 1].jour_echeance);
    printf("Mois :");
    scanf("%d",&ptr_tache[indiceTache - 1].mois_echeance);
    printf("Annees :");
    scanf("%d",&ptr_tache[indiceTache - 1].annee_echeance);
    printf("Etat de la tache :\n");
    scanf("%d", &ptr_tache[indiceTache - 1].Etat);
    printf("Tache  est  modifier \n");

}



/*----fonction de supprisiion----*/
void Suppression_tache(struct Tache **ptr_tache ,  int *n ,int indiceTache ){
    int i ;
     if(*n == 0 ){
            printf("Aucune tache a supprimer \n");
     return;
            }
    printf("Choisie l'index de tache a supprimer \n");
            scanf("%d",&indiceTache);
    if(indiceTache > *n ){
                printf("La tache %d n'existe pas dans la liste \n\n",indiceTache);
                }else{
    for(i = indiceTache; i < *n ; i++){
        (*ptr_tache)[i] = (*ptr_tache)[i + 1];
    }
    (*n)--;
    printf("La tache %d a supprimer avec succes\n\n",indiceTache);
    *ptr_tache= (struct Tache*)realloc(*ptr_tache , (*n) * sizeof(struct Tache));

     if(*ptr_tache == NULL){
                printf("L'echoue d'allocation !");
                return 1 ;
            }
}
}


/*----fonction d'affichage----*/
void Afficher_tache(struct Tache *ptr_tache ,int n ){
    int j ;
    if(n == 0 ){
        printf("Aucun tache a afficher \n");
    }else{

    for(j = 0 ; j < n ; j++){
        printf("Tache %d %s   | Priorite : %d   | Etat : %s\n", j+ 1 , ptr_tache[j].Nom, ptr_tache[j].priorite , ptr_tache[j].Etat ? "Terminer" : "Pas encore");
    }}
}


void Trier_priorite(struct Tache *ptr_tache , int n){
    int i , j ;
    struct Tache temp ;
    for( i = 0 ; i < n - 1; i++){
            for(j = 0 ; j < n - i - 1 ; j++){
        if(ptr_tache[j].priorite < ptr_tache[j+1].priorite){
            temp = ptr_tache[j + 1];
            ptr_tache[j + 1] = ptr_tache[j];
            ptr_tache[j] = temp;
        }
    }
    }
}








