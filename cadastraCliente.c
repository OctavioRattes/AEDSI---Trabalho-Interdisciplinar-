#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

float cadastraCliente(){
    int telefone;
    char nome[50];
    char endereco[100];
    char dataaniversario[12];
    srand(time(NULL));
    int codigoCliente = rand()%1000;
    //Como verificar se o c�digo do cliente j� est� cadastrado?
    printf("Digite o nome do cliente:\n");
    fgets(nome, 50, stdin);
    printf("Digite o endere�o do cliente (Rua, N�mero, Complemento, Bairro, Cidade, Estado:\n");
    fgets(endereco, 100, stdin);
    printf("Digite o telefone do cliente:\n");
    scanf("%d", &telefone);
    printf("Digite a data de anivers�rio do cliente (DD/MM/AAAA):\n");
    fgets(dataaniversario, 12, stdin);
    printf("%s\n%s\n%d\n%s", nome, endereco, telefone, dataaniversario);
    return cadastraCliente;

}
