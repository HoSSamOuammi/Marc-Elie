#include <stdio.h>
/*
===========================
les Operateurs :
===========================
une operateur est un symbole qui represente une action et qui prend des valeurs ou bien des variaables en entree et qui retourne une sortie

Exemple : dans "a + b", + est un operateur qui prend 2 valeurs ou plus en entree et qui retourne la somme de ces valeurs



*/


int main() {
    int a, b;
    printf("veuillez saisir la valeur de a : ");
    scanf("%d", &a);
    printf("veuillez saisir la valeur de b : ");
    scanf("%d", &b);

    printf(" la somme de a est b :  %d \n" ,  a + b );
    return 0;
}
