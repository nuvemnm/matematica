#include <stdio.h>
#include "matematica.h"


int main(){
    float angulo;
    printf("Digite o angulo em radianos: ");
    scanf("%f", &angulo);
    
    //seno
    printf("Seno: %f\n", calcular_seno(angulo));
    //cosseno
    printf("Cosseno: %f\n", calcular_cosseno(angulo));
    //tangente
    printf("Tangente: %f\n", calcular_tangente(angulo));

return 0;
}