#include<stdio.h>
#ifndef DATE
#define DATE

typedef struct  _Date {
    int day;
    int month;
    int year;
} Date;

typedef struct _Person {
    char* prenom;
    char* nom;
    Date date_naissance;
} Person;


Date* creer_date(int day, int month, int year);
void print_date(Date* p);
Person* creer_Person(char* prenom, char* nom, Date date_naissance);
void print_person(Person* p);

#endif // Date