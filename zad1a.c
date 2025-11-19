#include <stdio.h>
#include <stdbool.h>


int main() {
    int liczba_dni;
    int dni_z_aktywnoscia;
    int dni_bez_aktywnosci;
    int choice;
    int suma_dni_bez_aktywnosci;

    do {
        printf("Wybierz co chcesz zrobić: 1 - oblicz liczbę dni bez aktywności (0min), 2 - oblicz liczbę dni z aktywnością (>0min), 3 - wyjdz z programu");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                 for(int i = 1; i < 31; i++){
                    // użytkownik wprowadza dane z dniami
            printf("Podaj liczbę dni aktywnosci %d (dni): ", i);
            scanf("%d", &liczba_dni);

            if (liczba_dni <= 0 || liczba_dni >=30 ) {
                printf("zła wartość");
                break;

            }
            
            printf("Podaj czasy aktywności dla poszczególnych dni (min): ");
            scanf("%d", &dni_bez_aktywnosci);

            printf("Podaj liczbę dni bez aktywności (0min): ");
            scanf("%d", &dni_bez_aktywnosci);
        
        
            case 2:
            break;

            default:
                printf("zła opcja");
            }
            
            
        } while (choice !=3);

    int licz_dni(int dni_z_aktywnoscia, int dni_bez_aktywnosci) {
    return dni;
}

 double liczSDBA(int dni_bez_aktywności, int dni_z_aktywnoscia){
    // oblicz SDBA (stosunek dni bez aktywnosci do dni z aktywnością) i zwróć wartość
    if (dni_bez_aktywnosci == 0){
        printf("nie byles aktywny, sorki, nie policzę SDBA");
        return 0;
    }
    return int dni_bez_aktywności/int dni_z_aktywnosci;
}

    return 0;
}
}