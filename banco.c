#include "meu_banco.h"

/* Estrutura para representar um cliente do banco */
typedef struct {
    char nome[50];
    char cpf[12];
    char senha[20];
    float saldo;
} Cliente;

void criarContaCliente(Cliente *cliente) {
    printf("Digite seu nome: ");
    scanf("%s", cliente->nome);
    printf("Digite seu CPF: ");
    scanf("%s", cliente->cpf);
    printf("Digite sua senha: ");
    scanf("%s", cliente->senha);
    cliente->saldo = 0.0;
    printf("Conta criada com sucesso!\n");
}

void entrarContaCliente(Cliente *cliente) {
    char cpf[12];
    char senha[20];
    printf("Digite seu CPF: ");
    scanf("%s", cpf);
    printf("Digite sua senha: ");
    scanf("%s", senha);
    
    if (strcmp(cpf, cliente->cpf) == 0 && strcmp(senha, cliente->senha) == 0) {
        printf("Login bem-sucedido!\n");
        printf("Saldo atual: %.2f\n", cliente->saldo);
    } else {
        printf("CPF ou senha incorretos!\n");
    }
}

void tipodeconta() {
    int tipo;
    printf("Escolha o tipo de conta:\n");
    printf("1 - Conta Corrente\n");
    printf("2 - Conta Poupança\n");
    printf("3 - Conta Salário\n");
    scanf("%d", &tipo);
    
    switch (tipo) {
        case 1:
            printf("Conta Corrente selecionada.\n");
            break;
        case 2:
            printf("Conta Poupança selecionada.\n");
            break;
        case 3:
            printf("Conta Salário selecionada.\n");
        default:
            printf("Opção inválida!\n");
            break;
    }
}

/* Funções para gerenciar contas de banqueiros */

void criarContaBanqueiro(Cliente *banqueiro) {
    printf("Digite seu nome: ");
    scanf("%s", banqueiro->nome);
    printf("Digite seu CPF: ");
    scanf("%s", banqueiro->cpf);
    printf("Digite sua senha: ");
    scanf("%s", banqueiro->senha);
    banqueiro->saldo = 0.0;
    printf("Conta de banqueiro criada com sucesso!\n");
}

void entrarContaBanqueiro(Cliente *banqueiro) {
    char cpf[12];
    char senha[20];
    printf("Digite seu CPF: ");
    scanf("%s", cpf);
    printf("Digite sua senha: ");
    scanf("%s", senha);
    
    if (strcmp(cpf, banqueiro->cpf) == 0 && strcmp(senha, banqueiro->senha) == 0) {
        printf("Login de banqueiro bem-sucedido!\n");
        printf("Saldo atual: %.2f\n", banqueiro->saldo);
    } else {
        printf("CPF ou senha incorretos!\n");
    }
}

typedef struct {
    char nome[50];
    char cpf[12];
    char senha[20];
} Banqueiro;
