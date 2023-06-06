#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <stdbool.h>

float cadastraCliente(){

}
float cadastraFornecedor(){

}
float cadastraFesta(){

}
float cadastraContrato(){

}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int op;
    bool executar = true;

    while (executar) {
        printf("Selecione uma opção:\n");
        printf("1. Cadastrar Cliente\n");
        printf("2. Cadastrar Fornecedor\n");
        printf("3. Cadastrar Festa\n");
        printf("4. Contrato\n");
        printf("5. Sair\n");
        printf("Digite o número da opção: ");
        scanf("%d", &op);

    switch (op)
    {
    case 1:
        cadastraCliente();
        break;
    case 2:
        cadastraFornecedor();
        break;
    case 3:
        cadastraFesta();
        break;
    case 4:
        cadastraContrato();
        break;
    case 5:
        printf("Encerrando o programa...\n");
                executar = false;
                break;
    default:
        printf("Código inválido.");
        break;
    }
    }
return 0;
}
