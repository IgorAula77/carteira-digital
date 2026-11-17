#include <stdio.h>
#include <stdlib.h>
#include <meu_banco.h>



int main() {
    
    int op1, op2, OploginCliente, OploginBanqueiro;

    printf("===Bem vindo ao Banco Master!===\n");
    printf("==Escolha uma opção:==\n");
    printf("1 - Login Cliente\n");
    printf("2 - Login Banqueiro\n");
    scanf("%d", &op1);

    switch (op1)
    {
    case 1:
        printf("==Login Cliente==\n");
        printf("1 - Entrar\n");
        printf("2 - Criar Conta\n");
        scanf("%d", &OploginCliente);
        switch (OploginCliente)
        {
        case 1:
        
            break;
        
        default:
            break;
        }
        break;
    case 2:
        printf("==Login Banqueiro==\n");
        printf("1 - Entrar\n");
        printf("2 - Criar Conta\n");
        scanf("%d", &OploginBanqueiro);
        switch (OploginBanqueiro)
        {
        case 1:
            
            break;
        
        default:
            break;
        }
        break;
    default:
        break;
    }
}