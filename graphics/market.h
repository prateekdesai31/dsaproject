#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ncurses.h>

typedef struct market {

    int pno, qty;
    char name[50];
    float price, discount, tax, disprice;

}market;
