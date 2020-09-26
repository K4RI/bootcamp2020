#include <stdlib.h>
#include <stdio.h>
#include "date.h"
#include "date.c"
#include "person.c"

void print_date(Date* p){
  printf(" %d/%d/%d\n",p->day,p->month,p->year);
}

void print_person(Person* p){
  printf("Prénom : %s\nNom : %s \nDate de naissance :\n",p->prenom,p->nom);
}


int egalite(Date *date1, Date *date2){
    if ( ((*date1).day == (*date2).day) && ((*date1).month == (*date2).month) && ((*date1).year == (*date2).year)){
        return 1;
    }
    return 0;
}


int main()
{

  char prenom[]="Zachary";
  char nom[]="Assoumani";
  int day=11 ;
  int month=11;
  int year=2000 ;
  Date* p = creer_Date(day,month,year);
  Person* pers =creer_Person(prenom, nom, *p);
  print_person(pers);
  print_date(p);
}
