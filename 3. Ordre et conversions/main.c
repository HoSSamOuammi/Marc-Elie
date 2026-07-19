#include <stdio.h>
/* l'ordre des operateurs, a = b * -c / c++ * --a + b
 pour eviter tous ces problemes, il faut utiliser des parentheses
 lordre est le suivant : 1- operateur unaire  -2, -a
                         2- /
                         3- *
                         4- +
                         5- -
                         6- ++ et --
a = b * -c / c++ * --a + b = b * (-c / c++) * (--a + b)

========================================
la conversion des types
========================================
int p;
float x;
double n;      n = 3.333333333....

a = n * p + x

            pour la puissance des types, on a : double < float < int < char
            si j'ai une operation entre double et char, char passe en int , puis en float, et finalement en double

char a = 'a';
int b = 5;

c = b + a; // c = 5 + 97 = 102

*/

int main() {

    printf("%d", 'a');
}
