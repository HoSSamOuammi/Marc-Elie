#include <stdio.h>
/*
===========================
les Operateurs :
===========================
une operateur est un symbole qui represente une action et qui prend des valeurs ou bien des variaables en entree et qui retourne une sortie

Exemple : dans "a + b", + est un operateur qui prend 2 valeurs ou plus en entree et qui retourne la somme de ces valeurs

=> Les operateurs classiques
1- Addition (+)
2- Soustraction (-)
3- Multiplication (*) , n'utilse jamais le (x);
4- Division (/);

=> Operateurs de programmation
1 - 3 (=)  : est un operateur qui permet de changer la valeur d'une variable
        !lorsqu'on parle de l'affectation, on a "LValue" et "RValue"
        ! LValue : (Left value) c'est la variable ou on stocke la nouvelle valeur
        ! RValue : (Right value) c'est la nouvelle valeur
        ! a = b : Lvalue = a , RValue = b
        ! explication : la Lvalue a prend la valeur de Rvalue b
        !!!! mais la Rvalue ne change pas !!!!

        ! int b = 8;
        ! int a = b; => Rvalue = b = 8,


2- incrementation (++)
        ! l'incrementation est un operateur qui permet de changer la valeur d'une variable
        int i = 0;
        i++ ;   => i = i + 1
3- decrementation (--)
        ! l'decrementation est un operateur qui permet de changer la valeur d'une variable
        int i = 0;
        i-- ;   => i = i - 1

        => pre-incrementation (++) post-incrementation (++)
            ! pre-incrementation : l'operateur ++ est placé avant la variable
            ! post-incrementation : l'operateur ++ est placé après la variable

            int i = 0;
            printf("%d \n", i);
            i++;
            printf("%d \n", i);

            printf("%d \n", i++);
            printf("%d \n", ++i);







*/


int main() {
    int a, b, c;
    // sortie : a = 0 , b = 0, c = 0
    printf("veuillez saisir la valeur de a : ");
    scanf("%d", &a);
    // sortie : a = 9 , b = 0, c = 0
    printf("veuillez saisir la valeur de b : ");
    scanf("%d", &b);
    // sortie : a = 9 , b = 5, c = 0

    // utilisation de l'operateur d'affectation : signifie "affecter la valeur de 'b' à 'a'
    // c'est la valeur a gauche qui se change , et la valeur a droite ne se change pas

    a = b ;
    printf("%d \n", a);
    printf("%d \n", b);
    printf("%d \n", c);
    printf("================== \n");
    // sortie : a = 5 , b = 5, c = 0
    c = a + b;
    printf("%d \n", a);
    printf("%d \n", b);
    printf("%d \n", c);
    printf("==================\n");
    // sortie : a = 5 , b = 5, c = 10
    a = 9;
    b = 5;
    b = a; // cad b va prendre la valeur de a
    printf("%d \n", a);
    printf("%d \n", b);
    printf("%d \n", c);
    printf("================== \n");
    // sortie : a = 9 , b = 9, c = 10

    c = a * b;
    printf("%d \n", a);
    printf("%d \n", b);
    printf("%d \n", c);
    printf("==================\n");
    // sortie : a = 9 , b = 9 , c = 81



    int i = 6;
    printf("%d \n", i);

    i++;
    printf("%d \n", i);

    i--;
    printf("%d \n", i);

    int i = 0;
            printf("%d \n", i);
            // sortie : i = 0
            i++;
            printf("%d \n", i);
            // sortie : i = 1
            printf("%d \n", i++); // on dit au programme, affiche i, et ensuite incemnte i
            // sortie : i = 2
            printf("%d \n", ++i); // on dit au programme, incremente i, et ensuite affiche i
            // sortie : i = 3

    int a = 5, b = 6, c = 8;
        a--;
        // a = 4, b = 6, c = 8;
        ++b;
        // a = 4, b = 7, c = 8;
        a = --b + c++;
        // a = 4, b = 6, c = 8;
        // a = 14, b = 6 , c = 8;
        // a = 14, b = 6, c =9;
        a--;
        // a = 13, b = 6, c = 9
        printf("%d \n", a);
        printf("%d \n", b);
        printf("%d \n", c);
        // sortie : a = 13 , b = 7 , c = 9 ;

}
