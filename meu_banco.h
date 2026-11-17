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