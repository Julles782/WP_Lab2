#include <stdio.h>
#include <stdbool.h>

// 2 funkcje 1) obliczanie procentu 2) klasyfikacja

double licz_procent(int liczba_dni_dobrze_nawodnionych2, int liczba_dni2){

    double procent2 = (double) liczba_dni_dobrze_nawodnionych2 / liczba_dni2 * 100;
    return procent2;
}

void wypisz_stan_nawodnienia(double procent){

     if (procent < 10){

            printf("fatalny\n");
        }

        if (procent >=10 && procent < 39){

            printf("umiarkowany\n");
        }

        if (procent >=40 && procent < 69){

            printf("umiarkowany\n");
        }

        if (procent >=70 && procent < 89){

            printf("umiarkowany\n");
        }

        if (procent >= 90){

            printf("doskonaly\n");
        }
    
}

int main() {
    
    int choice = 0;
   

    do { 
        printf("Wybierz co chcesz zrobic: 1 - rozpocznij analize, 2 - zakoncz \n");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
            {
                int liczba_dni;
                int liczba_dni_bez_nawodnienia = 0;
                int liczba_dni_z_nawodnieniem = 0;
                int liczba_dni_dobrze_nawodnionych = 0;

                printf("Podaj liczbe dni: ");
                scanf("%d", &liczba_dni);

                if (liczba_dni < 1 || liczba_dni>31){

                    printf("Zła liczba dni \n");
                    return 0;
                }
                
                for (int i = 0; i < liczba_dni; i++){
                   
                    double ilosc_wypitej_wody;
                    printf("Podaj ilosc wypitej wody dnia %d w l : ", i+1);
                    scanf("%lf", &ilosc_wypitej_wody);

                    if (ilosc_wypitej_wody < 0.0 || ilosc_wypitej_wody > 5.0){

                        printf("Zla ilosc wody\n");
                        return 0;
                    }

                     if(ilosc_wypitej_wody == 0.0){
                        liczba_dni_bez_nawodnienia = liczba_dni_bez_nawodnienia + 1;
                    }

                     if(ilosc_wypitej_wody > 0.0){
                        liczba_dni_z_nawodnieniem = liczba_dni_z_nawodnieniem + 1;
                    }

                    if(ilosc_wypitej_wody >= 1.5){
                        liczba_dni_dobrze_nawodnionych = liczba_dni_dobrze_nawodnionych + 1;
                    }
                    

                }

                   double procent= licz_procent(liczba_dni_dobrze_nawodnionych,liczba_dni);
                    printf("liczba dni bez nawodnienia: %d\n", liczba_dni_bez_nawodnienia);
                    printf("liczba dni z nawodnieniem: %d\n", liczba_dni_z_nawodnieniem);
                    printf("liczba dni db nawodnionych: %d\n", liczba_dni_dobrze_nawodnionych);
                    printf("procent dni db nawodnionych: %.2lf procent \n", procent);
                    

                wypisz_stan_nawodnienia(procent);
                break;
            }

            case 2:
            {
                break; 
            }
            
            default:
            {
                printf("Zła opcja");
            }
        }
        }
        while (choice !=2);


    return 0;
}