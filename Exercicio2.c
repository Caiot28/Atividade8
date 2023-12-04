#include<stdio.h>

main(){

    int matutino, vespertino, noturno, elevadorA, elevadorB, elevadorC;
    char elevador, periodo;

    for(int i = 0; i < 5; i++){

        printf("\nDigite o elevador que utiliza com mais frequencia (A, B ou C): ");
        scanf("%s", elevador);

        if(elevador = 'A'){
            elevadorA++;
        } else if(elevador = 'B'){
            elevadorB++;
        } else if(elevador = 'C'){
            elevadorC++;
        }

        printf("\nDigite o periodo que utiliza o elevador (M, V ou N): ");
        scanf("%s", periodo);

        if(periodo = 'M'){
            matutino++;
        } else if(periodo = 'V'){
            vespertino++;
        } else if(periodo = 'N'){
            noturno++;
        }

        if(matutino > vespertino && matutino > noturno){
            printf("\nPeriodo mais usado: matutino");
        } else if(vespertino > matutino && vespertino > noturno){
            printf("\nPeriodo mais usado: vespertino");
        } else {
            printf("\nPeriodo mais usado: noturno");
        }

        if(elevadorA > elevadorB && elevadorA > elevadorC){
            printf("\nElevador mais usado: A");
        } else if(elevadorB > elevadorA && elevadorB > elevadorC){
            printf("\nElevador mais usado: B");
        } else {
            printf("\nElevador mais usado: C");
        }

    }




}