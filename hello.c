
#include "hello.h"
#include <stdio.h>

#include "calc_08.h"
#include "otheroperators.h"

int hello() {
    int auswahl = 0;
    printf(" __      __       .__                                             \n");
    printf("/  \\    /  \\ ____ |  |   ____  ____   _____   ____               \n");
    printf("\\   \\/\\/   // __ \\|  | _/ ___\\/  _ \\ /     \\_/ __ \\              \n");
    printf(" \\        /\\  ___/|  |_\\  \\__(  <_> )  Y Y  \\\\  ___/             \n");
    printf("  \\__/\\  /  \\___  >____/\\___  >____/|__|_|  /\\___  >            \n");
    printf("       \\/       \\/          \\/            \\/     \\/             \n");
    printf("  __                                                             \n");
    printf(" _/  |_  ____     ____  __ _________                             \n");
    printf(" \\   __\\/  _ \\   /  _ \\|  |  \\_  __ \\                            \n");
    printf("  |  | (  <_> ) (  <_> )  |  /|  | \\/                            \n");
    printf("  |__|  \\____/   \\____/|____/ |__|                               \n");
    printf("                                                                 \n");
    printf(" _________        .__               .__          __              \n");
    printf(" \\_   ___ \\_____  |  |   ____  __ __|  | _____ _/  |_  ___________\n");
    printf("/    \\  \\/\\__  \\ |  | _/ ___\\|  |  \\  | \\__  \\\\   __\\/  _ \\_  __ \\\n");
    printf("\\     \\____/ __ \\|  |_\\  \\___|  |  /  |__/ __ \\|  | (  <_> )  | \\/\n");
    printf(" \\______  (____  /____/\\___  >____/|____(____  /__|  \\____/|__|   \n");
    printf("        \\/     \\/          \\/                \\/                  \n\n");
    printf("Waehle den gewuenschten Rechner:\n");
    printf("1 -> Standardrechner\n");
    printf("2 -> Potenz\n");
    printf("3 -> Wurzel\n");
    printf("4 -> Fakultaet\n");
    printf("5 -> Rock, Paper, Scissors\n");

    scanf("%d", &auswahl);
    if (auswahl < 1 && auswahl > 5);
    else {
        int i = 0;
        do {
            i = i + 1;
            fflush(stdin);
            if (i > 2) {
                printf("Invalid Choice, please enter again:\n");
                printf("1 -> Standardrechner\n");
                printf("2 -> Potenz\n");
                printf("3 -> Wurzel\n");
                printf("4 -> Fakultaet\n");
                printf("5 -> Rock, Paper, Scissors\n");
                scanf("%d", &auswahl);
            }
            else {
                printf("Invalid Choice, please enter again:\n");
                scanf("%d", &auswahl);
            }
        } while (auswahl < 1 || auswahl > 5);
        i = 0;
    }
    return auswahl;
}

