#include <stdio.h>
#include <stdbool.h>
void distribuicao_de_notas(int valor_do_saque);

int main() {

    // Armazena o saldo disponível na conta e o valor solicitado para saque.
    int saldo = 500, valor_do_saque;

    // Controla a repetição do loop enquanto o valor informado for inválido.
    bool verificador_valor_invalido = true;

    // Inicio do programa

    // Elemento de organização visual no terminal 
    printf("---------------------------------\n");
    printf("Seja bem-vindo ao Master Bank!\n");
    printf("---------------------------------\n");
    printf("O saldo atual é de: R$ %d\n",saldo);
    printf("---------------------------------\n");
    printf("\n");

    printf("Digite um valor de saque: ");
    scanf("%d", &valor_do_saque);
    printf("---------------------------------\n");

    // loop que contém uma estrutura if / else para validar o valor do saque. Se o valor for inválido, o loop solicita uma nova entrada até que o 
    // usuário informe um valor positivo, múltiplo de 5 e dentro do saldo disponível.

    while (verificador_valor_invalido == true) {

        if ((valor_do_saque % 5 == 0) && (valor_do_saque > 0) && (valor_do_saque <= saldo)){

            saldo = saldo - valor_do_saque;
            printf("Saldo atualizado para: R$ %d\n",saldo);
 
            printf("---------------------------------\n");
            printf("\n");

            distribuicao_de_notas(valor_do_saque);

            //Encerra o loop após a validação e a realização do saque.
            verificador_valor_invalido = false;

        }else{
            printf("Valor invalido:\n->(Não multiplo de 5)\n->(Menor ou igual a 0)\n->(Maior que 500)\ntente novamente!\n");

            printf("---------------------------------\n");
            printf("Informe valor de saque: ");
            scanf("%d", &valor_do_saque);
            printf("---------------------------------\n");
        }
    }

    return 0;
}

// Função responsável por calcular e exibir a quantidade de notas de cada denominação.
void distribuicao_de_notas(int valor_do_saque) {

    // Representam a quantidade de notas de cada denominação necessária para realizar o saque.
    int notas100, notas50, notas20 ,notas10 ,notas5;

    // Armazena o valor restante após a retirada de cada denominação de nota.
    int resto;
    
    notas100 = valor_do_saque / 100;

    // Calcula o restante do saque após descontar o valor correspondente às notas de 100.
    resto = valor_do_saque % 100;

    notas50 =  resto / 50;

    // Atualiza o restante após descontar o valor correspondente às notas de 50.
    resto = resto % 50;

    notas20 = resto/ 20;

    // Atualiza o restante após descontar o valor correspondente às notas de 20.
    resto = resto % 20;

    notas10 = resto / 10;

    // Atualiza o restante após descontar o valor correspondente às notas de 10.
    resto = resto % 10;
    notas5 = resto/ 5;

    printf("Notas entregues:\n");
    if (notas100 > 0){printf("%d nota(s) de 100\n",notas100);}

    if (notas50 > 0){printf("%d nota(s) de 50\n",notas50);}
    
    if (notas20 > 0){printf("%d nota(s) de 20\n",notas20);}

    if (notas10 > 0){printf("%d nota(s) de 10\n",notas10);}

    if (notas5 > 0){printf("%d nota(s) de 5\n",notas5);}

} 
