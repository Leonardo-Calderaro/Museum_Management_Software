
struct tipo_endereco {
        char rua[51];
        int numero;
        char bairro[51];
    };

struct cadastro {
    char nome[51];
    int cpf;
    struct tipo_endereco endereco;
};

