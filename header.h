#ifndef HEADER_H
#define HEADER_H
#include<stdio.h>
#include<stdlib.h>
#include "header.h"
struct Tache *Task ;
void Ajouter_tache(struct Tache **ptr_tache , int *n);
void Modifier_tache(struct Tache *ptr_tache , int n, int indiceTache);
void Suppression_tache(struct Tache **ptr_tache ,  int *n ,int indiceTache );
void Affichr_tache(struct Tache *ptr_tache ,int n );
void Trier_priorite(struct Tache *ptr_tache , int n);



#endif

