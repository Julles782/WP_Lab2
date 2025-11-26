#include <stdio.h>
#include <stdbool.h>
// biblioteka aby użyć funkcji potęgowania - pow() (opcjonalnie)

//nasza funkcja
double calculateBMI(double weight, double height) {
    // oblicz BMI i zwróć wartość
    // return weight / pov height)
    //funkcja calculate bmi
    return weight / (height * height); ///zwracamy 
}
//nasza funkcja calculate whr
double calculateWHR(double waist, double hips) { //zwroci jakas wartosc i przypisze do whr
    // oblicz BMI i zwróć wartość
    return waist / hips; ////kon, te nazwe zmiennych moga byc inne niz w mainie, zmienne lokalne, dzialaja tylko w obrebie tej funkcji, zwroci nam wartosc gdzie jest wyprintowana
}
int main() {
    double weight, height, hips, waist; //zmienne
    int choice; // char na int, bo 1,2,3

    do { // petla do while wykona sie conajmniej raz
        printf("Wybierz co chcesz zrobić: 1 - oblicz BMI, 2 - oblicz WHR, 3 - wyjdz z programu"); //info dla użytkownika, srednik
        scanf("%d", &choice); // wybor dla uzytkownika, najpierw specyfikator plus adres zmiennej - ampersant

        switch (choice) // zmienna ktora chcemy ewaluowac, w switchu case (podobne do if-else)
        {
            case 1:
                 for(int i = 1; i < 4; i++){ // prosta petla for do obliczania BMI, z reguly z i, i od zera lub 1 (me: taki licznik)
                    // i < 4 warunek:w wykonuj petle dopoki i jest mniejsze od 4 - dla 3 osob
                    // inkrementacja?? -> i++
                    // użytkownik wprowadza wagę i wzrost
                printf("Podaj wage uzytkownika %d (kg): ", i); // nasze i tu mamy wkleic, specyfikator dla osoby 
                scanf("%lf", &weight); //lf stricte do double. f tez się wykona

                if (weight <= 0) {
                    printf("zła wartość");
                    break;
                    //dla kazdej zmiennej mozna
                    //walidacja, czy ma sens
                    //break wychodzi nam ze switcha. plus info dla uzytkownika
                }
                
                printf("Podaj wzrost uzytkownika %d (m): , i");
                scanf("%lf", &height);
                
                // obliczanie BMI
                double bmi = calculateBMI(weight, height);
                printf("BMI dla osoby %d = %.2f\n", i, bmi);  // dodalam i i bmi ?? <----------------
                } //klamra do for oprocz break'a
                break; ///tutaj dodałam
                  
        

            case 2:
                    // użytkownik wprowadza obwod talii i obowd bioder
                printf("Podaj obwod talii (cm): ");
                scanf("%lf", &waist);
                
                printf("Podaj obwod bioder (cm): ");
                scanf("%lf", &hips);
                
                
                // obliczanie WHR
                double whr = calculateWHR(waist, hips);
                printf("WHR = %.2f\n", whr);
                break;
            
        case 3:
        break; //wyjdz ze switcha break z reguly

        default:
            printf("zła opcja"); // wszystko co nie pasuje do tych case np 4,5,6 w deafult
        }
        
        
    } while (choice !=3); ///wykonaj warunek w do, dopoki choice nie rowna sie 3, przejdzie dalej i zakonczy nam program

    return 0;
}