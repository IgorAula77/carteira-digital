#ifndef MEU_BANCO_H
#define MEU_BANCO_H

/* Estrutura para representar um cliente do banco */
typedef struct {
    char nome[50];
    char cpf[12];
    char senha[20];
    float saldo;
} Cliente;

void criarContaCliente(Cliente *cliente);

void entrarContaCliente(Cliente *cliente);

void tipodeconta(Cliente *cliente);

/* Funções para gerenciar contas de banqueiros */

typedef struct {
    char nome[50];
    char cpf[12];
    char senha[20];
    float saldo;
} Banqueiro;

void criarContaBanqueiro(Banqueiro *banqueiro);

void entrarContaBanqueiro(Banqueiro *banqueiro);

#endif