#include <stdio.h>
#include "otheroperators.h"
#include "calc_08.h"
#include "hello.h"
#include "Rock, Paper, Scissors.h"
int main(void) {
    char janein;
    do{
    int auswahl = hello();
        switch (auswahl) {
            case 1:
                printf(">> Grundrechner gestartet!\n");
                grundrechner();
                break;
            case 2:
                printf(">> Exponential gestartet\n");
                exponential();
                break;
            case 3:
                printf(">> Wurzel Berechnung gestartet!\n");
                calcsqrt();
                break;
            case 4:
                printf(">> Fakultaet Berechnung gestartet!\n");
                faculty();
                break;
            case 5:
                printf(">> Rock, Paper, Scissors gestartet\n");
                rps();
                break;

            default:
                printf("Ungueltige Eingabe!\n");
                break;

        }
        printf("Return to menu? Y / N: ");
        scanf(" %c", &janein);
    } while (janein == 'Y' || janein == 'y');

}a
