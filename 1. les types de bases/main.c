#include <stdio.h>

/*
===========================
les types de bases :
===========================
1- le Type Entier : -2 147 483 648 < int < 2 147 483 647

2- le Type float :  3.4 x 10^(-38) < float < 3.4 x 10^(38)
            ! float est presque tjrs >0

3- le Type char : 'a' , 'Y', '10', '+' (il s'ecrit tjrs entre apostrophes)
            ! int number = 10
            ! char nombre = '10'
            ! les deux ne representent pas la meme chose

===============================
initialisation et constantes :
===============================
lorsque on veut creer une variable de type int
int number;
si on ne la donne pas une valeur, le compilateur associe la valeur 0

=> pour eviter ce probleme, on peut utiliser initialiser la variable
                    ! Post-initialisation : number = 1000;
                    ! Pre-initialisation : int number = 1000;
Donc une variable de type de bases peut etre affectee a plusieurs valeurs pendant l'execution du programme

=> pour eviter ce probleme, on peut utiliser constantes
                    ! une constante doit toujours etre initialisee
                    ! une constante ne peut pas etre affectee a une valeur


!!!! on peut faire la declaration de plusieurs varibales du meme type par deux methode :
1- Declare chaque variable dans une ligne;
2- Declarer toutes les variables du meme type dans une seule ligne
*/






int main() {
    char marc; // c'est une declaration sans initialisation
    const char name = 'M'; // initialisation

    printf("%c \n", name);
    printf("%c \n", name);
    printf("%c \n", name);

    char name2 = 'N';
    printf("%c \n", name2);
    printf("%c \n", name2);
    printf("%c \n", name2);

// 1 - la premiere methode de delcaration
    int number1 ;
    int nombre2 ;
    int number3 ;
    int number4 ;
// 2 - la deuxieme methode de delcaration
    int nombre1, nombre2, nombre3, nombre4;
    int nmb1 = 1000, nmb2 = 2000, nmb3 = 3000, nmb4 = 4000;

}
