#include <stdlib.h>
#include "date.h"

Date* creer_Date(int d, int month, int year){
    Date* res = (Date*)malloc(sizeof(Date));
    res-> day = d;
    res-> month = month;
    res-> year = year;
    return res;
}