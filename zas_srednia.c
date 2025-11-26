#include <stdio.h>
#include <stdbool.h>



void klasyfikacja_ocen(double srednia){
    if(srednia < 3){
        printf("słaba\n");
    }
    else if (srednia < 4){
        printf("przecietna");
    }
    else if (srednia < 5){
        printf("dobra");
    }
    else {
        printf("bdb");
    }

    printf("\n");
}

void licz_srednia(int suma, int liczba_ocen){

    double srednia = (double) suma / liczba_ocen;
    printf("Średnia ocen - %.2lf\n", srednia);
    klasyfikacja_ocen(srednia);
}

int main() {

    int choice;
    
    do { 
        printf("Dokonaj wybór: 1 - srednia, 2 - wyjdz");
        scanf("%d", &choice);

        switch(choice){

            case 1: {

                int liczba_ocen;
                int ocena;
                int liczba_ocen_dopuszczajacych = 0;
                int liczba_ocen_bardzo_dobrych = 0;
                int suma = 0;
                double srednia_ocen;

                printf("Podaj liczbę ocen: ");
                scanf("%d", &liczba_ocen);

                if (liczba_ocen <1 || liczba_ocen >20){

                    printf("Zła liczba\n");
                    return 0;
                }
                //i to licznik, ile razy powtorzy nam program jakies dzialanie, np 10 razy, bo 10 ocen
                for(int i = 0; i < liczba_ocen; i++){

                    printf("Wpisz ocenę: ");
                    scanf("%d", &ocena);

                    if(ocena < 1 || ocena > 6){

                        return 0;
                    }
                    
                    suma = suma + ocena;

                    if(ocena <= 2){

                        liczba_ocen_dopuszczajacych = liczba_ocen_dopuszczajacych + 1;
                    }

                    if(ocena >= 5){

                        liczba_ocen_bardzo_dobrych = liczba_ocen_bardzo_dobrych + 1;
                    }
                    
                }
               
               licz_srednia(suma, liczba_ocen);
                printf("Liczba ocen dop: %d\n", liczba_ocen_dopuszczajacych);
                printf("Liczba ocen bdb: %d\n", liczba_ocen_bardzo_dobrych);

                break;
            }

            case 2:
            break;

            default:
            break;
        }

    }
while (choice == 1);

 

    return 0;
}