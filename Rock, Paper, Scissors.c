//
// Created by Startklar on 25.09.2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Rock, Paper, Scissors.h"
int rps(void) {
    int eingabe;
    char janein;
    srand(time(NULL)); // nur einmal

    do {
        int computer = (rand() % 3) + 1; // 1, 2 oder 3

        printf("Rock(1) Paper(2) Scissor(3): ");

        while (scanf("%d", &eingabe) != 1  || eingabe < 1 || eingabe > 3) {
            printf("Error only Numbers.\n");
            printf("Please try again.\n");
            while(getchar() != '\n'); // Eingabepuffer leeren
        }



        printf("I have : %d\n", computer);

        if (computer == eingabe) {
            printf("tie!\n");
        } else if ((eingabe == 1 && computer == 3) ||
                   (eingabe == 2 && computer == 1) ||
                   (eingabe == 3 && computer == 2)) {
            printf("you win!\n");
                   } else {
                       printf("i win!\n");
                   }

        printf("Restart Y / N: ");
        scanf(" %c", &janein);
    } while (janein == 'Y' || janein == 'y');

    return 0;
}
