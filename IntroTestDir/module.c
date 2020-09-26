#include<stdio.h>
#include <string.h>
#include"module.h"

int palind(char s[]){
    int n = mylen(s);
    for (int i=0;i<n; i++){
        if (s[i]!=s[n-1-i]){
            return 0;
        };
    };
    return 1;
}



int main (){
   int a=1;
   int b=f(a);
   printf("la valeur est %d\n",b);
   printf("%i\n", palind("radar"));
}
 
int f( int x ) {
   return x+1;
}


int fibo_ter_aux(int n, long s1, long s2)
{
    if (n == 0)
    {return s2;}

    else if (n == 1)
    {return s1;}

    else 
    {return fibo_ter_aux(n-1, s1 + s2, s1);}
}

int fibo_ter(int n){
    return fibo_ter_aux(n, 1, 0);
}

int repr_bin(int n){
    int cpt=0;
    while (n>0) {
        if (n&1) { 
            cpt++;
        }
    n=n>>1; }
    return cpt;
}

void print_tableau(int tableau[],int tailletableau){
    for (int i=0; i<tailletableau; i++){
        printf("[%d] : ",i);
        printf("%d\n",tableau[i]);
    }
}

int somme_tabl (int tableau1[], int tableau2[], int tailleTableau) {
    int tableau3[tailleTableau];
    for (int i=0;i<tailleTableau; i++){
        tableau3[i]=tableau1[i]+tableau2[i];
    }
    print_tableau(tableau3, tailleTableau);
}

void scanne(){
    char s[200];
    printf("Ecrire : ");
    scanf("%s",s);
    printf("Votre chaine est : %s\n",s);
}

int mylen(char s[]){
    int cpt=0;
    while (s[cpt]!='\0'){
        cpt++;
    }
    return(cpt);
}