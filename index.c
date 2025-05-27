#include <stdio.h>

int main(){
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);

    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);

    printf("Entre com o estoque: \n");
    scanf("%u", &estoque);

    //temperatura.
    if(temperatura> 30){
        printf("\nA temepratura está alta!!\n");
    } else{
        printf("\nA temperatura está dentro dos parâmetros.\n");
    }

    //umidade.
    if(umidade > 50){
        printf("A umiade esta elevada!!\n");
    } else{
        printf("A umidade está dentro dos parâmetros.\n");
    }

    //estoque.
    if(estoque < estoqueMinimo){
        printf("O estoque está abaixo do limite!!\n");
    }else{
        printf("O estoque está dentro dos parâmetros.\n");
    }
}