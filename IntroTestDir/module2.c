#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int len_chaine(char* s){
    int cpt = 0;
    while (*(s+cpt)!='\0') {
        cpt++;
    }
    return cpt;
}



char* conve(char s[]){
    int n = strlen(s);
    char *chech = (char*)malloc(n);
    for (int i=0;i<n;i++){
        *(chech+i)=s[i];
    }
    return chech;
}

int nbre_e(char *s){
    int n = len_chaine(s);
    int cpt = 0;
    for (int i=0;i<n;i++)
    {
        if (*(s+i)=='e'){
            cpt+=1;
        }
    }
    return cpt;
}

char* replace(char *s, char e){
    int n = len_chaine(s);
    char *s2 = (char*)malloc(n);
    *(s2)=e;
    for (int i=1;i<n;i++)
    {
        *(s2+i)=*(s+i);
    }
    return s2;
}



int main(){
    char *s = "Bienvenue";
    int longueur = 0;
    longueur = len_chaine(s);
    printf("La longueur de la chaîne %s est %d\n", s, longueur);
    int es = nbre_e(s);
    printf("%i\n", es);
    printf("%s\n", replace(s, 'g'));
    return 0;
}