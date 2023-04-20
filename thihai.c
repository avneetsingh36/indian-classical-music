#include <stdio.h>
#include <stdbool.h>

int closestDivByThree(int taal);
double calculateDivision(double part, int beats);
void print_thihai_line(char *label, double value);

int main() {

    int taalInput, numCycles, beats;
    int part;
    double division, pala;

    printf("=====================================\n");
    printf("=        Thihai Calculator          =\n");
    printf("=====================================\n\n");

    printf("This program calculates thihai for any taal.\n\n");

    printf("Enter the number of beats in the Taal: ");
    scanf("%d", &taalInput);

    printf("Enter the number of cycles for your thihai: ");
    scanf("%d", &numCycles);

    beats = numCycles * taalInput;
    part = closestDivByThree(beats);

    printf("\nCalculating thihai...\n\n");

    division = calculateDivision(part, beats);
    pala = (double)part / 3.0;

    if (division == 0.0 || division == 0.5) {
        print_thihai_line("Each pala", pala);
        print_thihai_line("Division", division);
        printf("=> 'Dha' is the last beat of each pala.\n\n");
    } else {
        division = 0;
        pala = pala + 0.5;
        print_thihai_line("Each pala", pala);
        print_thihai_line("Division", division);
        printf("=> 'Dha' is the last half beat of each pala.\n\n");
    }

    printf("Enjoy your thihai!\n");

    return 0;
}

int closestDivByThree(int taal) {
    for (int i = taal + 1; i > 0; i--) {
        if (i % 3 == 0) {
            return i;
        }
    }
    return 100;
}

double calculateDivision(double part, int beats) {
    return ((beats + 1.0) - part) / 2.0;
}

void print_thihai_line(char *label, double value) {
    printf("%-10s: %.1lf beats\n", label, value);
}

