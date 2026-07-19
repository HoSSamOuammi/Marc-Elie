#include <stdio.h>
#include <stdbool.h>

/*
 ==============================================================================
 les operateurs relationnels
 ==============================================================================
 1- <   (inférieur)
 2- >   (supérieur)
 3- <=  (inférieur ou égal)
 4- >=  (supérieur ou égal)
 5- ==  (égal)
 6- !=  (différent)

 si ( a egale a b ), en C on ecrit if( a == b);
 a différent de b, on écrit a != b

     !! les operateurs relationnels ont une valeur booléenne !!
     si a = 5, b = 10 , a == b   = 0 faux
     si a = 1, b = 10 , a <= b   = 1 vrai

     !! les operateurs classiques ont une priorité sur les operateurs relationnels !!
     cad a = 5, b = 10 , c = 15,  c == a + b = 1 vrai

================================================================================
les operateurs logiques
================================================================================
1- &&  (et)
2- ||  (ou)
3- !   (non)

a est inférieur ou égal à b et a est différent de c

a < b && a != c

bool b = true;

!b = false
 */

int main() {
    int a = 5, b = 10;
    // une variable booléenne
    bool c ;
    a = (b - 5) * 3;
    // a = 15 , b = 10
    c = !(b + 5 == a);
    // c = !(15 == a)
    // (15 == a) = True
    // c = False
    printf("%d \n", c);
    return 0;
}
