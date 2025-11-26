#include <stdio.h>
#include <stdbool.h>
// biblioteka aby użyć funkcji potęgowania - pow() (opcjonalnie)

double calculateBMI(double weight, double height) {
    // oblicz BMI i zwróć wartość
    // return weight / pov height)
    return weight / (height * height);
}

double calculateWHR(double waist, double hips) {
    // oblicz BMI i zwróć wartość
    return waist / hips; ////kon
}
int main() {
    double weight, height, hips, waist;
    int choice;

    do {
        printf("Wybierz co chcesz zrobić: 1 - oblicz BMI, 2 - oblicz WHR, 3 - wyjdz z programu");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                 for(int i = 1; i < 4; i++){
                    // użytkownik wprowadza wagę i wzrost
            printf("Podaj wage uzytkownika %d (kg): ", i);
            scanf("%lf", &weight);

            if (weight <= 0) {
                printf("zła wartość");
                break;
                //dla kazdej zmiennej mozna
            }
            
            printf("Podaj wzrost uzytkownika (cm): ");
            scanf("%lf", &height);
            
            // obliczanie BMI
            double bmi = calculateBMI(weight, height);
            printf("BMI = %.2f\n", bmi);   
                 }
        

            case 2:
             // użytkownik wprowadza obwod talii i obowd bioder
        printf("Podaj obwod talii (cm): ");
        scanf("%lf", &waist);
        
        printf("Podaj obwod bioder (cm): ");
        scanf("%lf", &hips);
        
        // obliczanie WHR
        double bmi = calculateWHR(waist, hips);
        printf("WHR = %.2f\n", bmi);
        break;
    
        case 3:
        break;

        default:
            printf("zła opcja");
        }
        
        
    } while (choice !=3);

    return 0;
}