#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "date.h"
 
Person* creer_Person(char *prenom, char *nom,Date date_naissance)
{
  Person* p = (Person*) malloc(sizeof(Person));
  p->prenom =(char*)malloc(sizeof(char));
  p-> prenom = prenom;
  p->nom =(char*)malloc(sizeof(char));
  p->nom = nom;
  p->date_naissance=date_naissance;
  return p;
}
    