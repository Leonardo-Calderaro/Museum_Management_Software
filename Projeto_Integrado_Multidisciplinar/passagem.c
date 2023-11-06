
// A FAZER:
//      - COLOCAR fflush(stdin); EM TUDO;


/*======================================================================================================================================================*/
/*======================================================================================================================================================*/
/*======================================================================================================================================================*/

#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<string.h>
#include<time.h>
#include<conio.h>
#include<process.h>

/*======================================================================================================================================================*/
/*======================================================================================================================================================*/
/*======================================================================================================================================================*/
/*
typedef struct tipo_data {
    int dia;
    int mes;
} tipo_data;

typedef struct tipo_visitante {
    char nome[50];
    int idade;
    int documento;
} tipo_visitante;

typedef struct tipo_login {
    char login[21];
    char senha[21];
    int nivel_login;
} tipo_login;

tipo_login login;

typedef struct tipo_ingresso {
    struct tipo_data data;
    char tipo;
    int numero;
    char entrada;
} tipo_ingresso;

typedef struct tipo_quesitonario {

} tipo_questionario;
*/
/*======================================================================================================================================================*/
/*======================================================================================================================================================*/
/*======================================================================================================================================================*/
/*
int leitura_login(void);
int menu_aplicacoes_nivel_um(int);
int menu_aplicacoes_nivel_dois(int);
int menu_aplicacoes_nivel_tres(int);
int menu_bilheteria(void);
int menu_entrada(void);
int menu_exposicao(void);
int menu_relatorio(void);
int menu_cadastro_visitante(void);
int menu_login(void);
int entrada(void);
int cadastrar_visitante(void);
int gerar_ingresso(int, tipo_ingresso);
int cadastro_login(void);
int leitura_login(void);
int questionario(void);
int relatorio(void);
int escrever_visitantes(void);
int listar_visitantes(void);
*/
/*======================================================================================================================================================*/
/*======================================================================================================================================================*/
/*======================================================================================================================================================*/
/*
/* ok */ /*void main() {

    char opcao;

    setlocale(LC_ALL, "");

    int tentativa_login;

    do {

        ("cls");

        printf("\n==========================================");
        printf("\n=                                        =");
        printf("\n=  Tela Inicial do Sistema do Museu PIM  =");
        printf("\n=                                        =");
        printf("\n==========================================");
        printf("\n=                                        =");
        printf("\n= [1] Login;                             =");
        printf("\n=                                        =");
        printf("\n= [0] Sair.                              =");
        printf("\n=                                        =");
        printf("\n==========================================\n");

        printf("\nPor favor, digite a opção: ");
        fflush(stdin);
        scanf("%c", &opcao);

        switch(opcao) {
            case '1':
                tentativa_login = leitura_login();
                if(tentativa_login==0) {
                    printf("\nLogin ou senha errados, por favor tente novamente.\n");
                    break;
                }
                else if (tentativa_login==1) {
                    printf("\nLogin realizado com sucesso.\n");
                    menu_aplicacoes_nivel_um(tentativa_login);
                }
                else if (tentativa_login==2){
                    printf("\nLogin realizado com sucesso.\n");
                    menu_aplicacoes_nivel_dois(tentativa_login);
                }
                else if (tentativa_login==3) {
                    printf("\nLogin realizado com sucesso.\n");
                    menu_aplicacoes_nivel_tres(tentativa_login);
                }
                break;
            case '0':
                break;
            default:
                printf("Opção inválida, tente novamente.");
                break;
        }

    }

    while(opcao!='0');

    getch();

}
*/
/*======================================================================================================================================================*/
/*======================================================================================================================================================*/
/*======================================================================================================================================================*/
/*
int menu_aplicacoes_nivel_um(int nivel_login) {

    char opcao;

        ("cls");

        do {

            printf("\n==========================================");
            printf("\n=      Menu de Aplicações do Museu       =");
            printf("\n==========================================");
            printf("\n=                                        =");
            printf("\n= [1] Bilheteria;                        =");
            printf("\n=                                        =");
            printf("\n= [2] Entrada;                           =");
            printf("\n=                                        =");
            printf("\n= [3] Exposição;                         =");
            printf("\n=                                        =");
            printf("\n= [0] Sair.                              =");
            printf("\n=                                        =");
            printf("\n==========================================\n");

            printf("\nPor favor, digite a opção: ");
            fflush(stdin);
            scanf("%c", &opcao);

            switch(opcao) {

                case '1':
                    menu_bilheteria();
                    break;
                case '2':
                    menu_entrada();
                    break;
                case '3':
                    menu_exposicao();
                    break;
                case '0':
                    break;
                default:
                    printf("Opção inválida, tente novamente.");
                    break;

            }

        }

        while( opcao != '0');

}

int menu_aplicacoes_nivel_dois(int nivel_login) {

    char opcao;

        ("cls");

        do {

            printf("\n==========================================");
            printf("\n=      Menu de Aplicações do Museu       =");
            printf("\n==========================================");
            printf("\n=                                        =");
            printf("\n= [1] Bilheteria;                        =");
            printf("\n=                                        =");
            printf("\n= [2] Entrada;                           =");
            printf("\n=                                        =");
            printf("\n= [3] Exposição;                         =");
            printf("\n=                                        =");
            printf("\n= [4] Relatório;                         =");
            printf("\n=                                        =");
            printf("\n= [0] Sair.                              =");
            printf("\n=                                        =");
            printf("\n==========================================\n");

            printf("\nPor favor, digite a opção: ");
            fflush(stdin);
            scanf("%c", &opcao);

            switch(opcao) {

                case '1':
                    menu_bilheteria();
                    break;
                case '2':
                    menu_entrada();
                    break;
                case '3':
                    menu_exposicao();
                    break;
                case '4':
                    menu_relatorio();
                    break;
                case '0':
                    break;
                default:
                    printf("Opção inválida, tente novamente.");
                    break;

            }

        }

        while( opcao != '0');

}

int menu_aplicacoes_nivel_tres(int nivel_login) {

    char opcao;

        ("cls");

        do {

            printf("\n==========================================");
            printf("\n=      Menu de Aplicações do Museu       =");
            printf("\n==========================================");
            printf("\n=                                        =");
            printf("\n= [1] Bilheteria;                        =");
            printf("\n=                                        =");
            printf("\n= [2] Entrada;                           =");
            printf("\n=                                        =");
            printf("\n= [3] Exposição;                         =");
            printf("\n=                                        =");
            printf("\n= [4] Relatório;                         =");
            printf("\n=                                        =");
            printf("\n= [5] Consulta Cadastro Visitante;       =");
            printf("\n=                                        =");
            printf("\n= [6] Login;                             =");
            printf("\n=                                        =");
            printf("\n= [0] Sair.                              =");
            printf("\n=                                        =");
            printf("\n==========================================\n");

            printf("\nPor favor, digite a opção: ");
            fflush(stdin);
            scanf("%c", &opcao);

            switch(opcao) {

                case '1':
                    menu_bilheteria();
                    break;
                case '2':
                    menu_entrada();
                    break;
                case '3':
                    menu_exposicao();
                    break;
                case '4':
                    menu_relatorio();
                    break;
                case '5':
                    menu_cadastro_visitante();
                    break;
                case '6':
                    menu_login();
                    break;
                case '0':
                    break;
                default:
                    printf("Opção inválida, tente novamente.");
                    break;

            }

        }

        while( opcao != '0');

}

int menu_bilheteria() {

    char opcao;

    ("cls");

    do {

        printf("\n=======================================");
        printf("\n=             Bilheteria              =");
        printf("\n=======================================");
        printf("\n=                                     =");
        printf("\n= [1] Comprar Ingresso;               =");
        printf("\n=                                     =");
        printf("\n= [0] Sair.                           =");
        printf("\n=                                     =");
        printf("\n=======================================\n");

        printf("\nBem vindo à bilheteria do Museu.");
        printf("\nPor favor, digite a opção: ");
        getc(opcao);

        switch(opcao) {

            case '1':
                vender_ingresso();
                break;
            case '0':
                break;
            default:
                printf("\nOpção inválida, por favor tente novamente.\n");

        }

    }

    while( opcao != '0');

}

int menu_entrada() {

    char opcao;

    ("cls");

    do {

        printf("\n=======================================");
        printf("\n=              Entrada                =");
        printf("\n=======================================");
        printf("\n=                                     =");
        printf("\n= [1] Fazer entrada com bilhete;      =");
        printf("\n=                                     =");
        printf("\n= [0] Sair.                           =");
        printf("\n=                                     =");
        printf("\n=======================================\n");

        printf("\nBem vindo à entrada do Museu.");
        printf("\nPor favor, digite a opção: ");
        getc(opcao);

        switch(opcao) {

            case '1':
                entrada();
                break;
            case '0':
                break;
            default:
                printf("\nOpção inválida, por favor tente novamente.\n");

        }

    }

    while( opcao != '0');

}

int vender_ingresso() {

    tipo_ingresso ingresso;

    int opcao;

    int quantidade;

    do {

        ("cls");

            printf("\n========================================================================================");
            printf("\n=                           Compra de Ingressos 2023                                   =");
            printf("\n========================================================================================\n");

        do {

            printf("\n========================================================================================");
            printf("\n=         [11] Novembro 2023               ==         [12] Dezembro 2023               =");
            printf("\n========================================================================================");
            printf("\n=                                          ==                                          =");
            printf("\n=      D    S    T    Q    Q    S    S     ==      D    S    T    Q    Q    S    S     =");
            printf("\n=                                          ==                                          =");
            printf("\n=                     1    2    3    4     ==                               1    2     =");
            printf("\n=                                          ==                                          =");
            printf("\n=      5    6    7    8    9    10   11    ==      3    4    5    6    7    8    9     =");
            printf("\n=                                          ==                                          =");
            printf("\n=      12   13   14   15   16   17   18    ==      10   11   12   13   14   15   16    =");
            printf("\n=                                          ==                                          =");
            printf("\n=      19   20   21   22   23   24   25    ==      17   18   19   20   21   22   23    =");
            printf("\n=                                          ==                                          =");
            printf("\n=      26   27   28   29   30              ==      24   25   26   27   28   29   30    =");
            printf("\n=                                          ==                                          =");
            printf("\n=                                          ==      31                                  =");
            printf("\n========================================================================================\n");

            printf("\n========================================================================================");
            printf("\n=         Atrações Novembro 2023           ==          Atrações Dezembro 2023          =");
            printf("\n========================================================================================");
            printf("\n=                                          ==                                          =");
            printf("\n= - De 01/11/2023 até 18/11/2023:          == - De 01/12/2023 até 16/12/2023:          =");
            printf("\n=   . Exposição COVID                      ==   . Exposição Oriente Médio              =");
            printf("\n=                                          ==                                          =");
            printf("\n= - De 19/11/2023 até 30/11/2023:          == - De 17/12/2023 até 31/12/2023:          =");
            printf("\n=   . Exposição Cultura da Internet        ==   . Exposição                            =");
            printf("\n=                                          ==                                          =");
            printf("\n= - O museu não abrirá nas datas:          == - O museu não abrirá nas datas:          =");
            printf("\n=   . 02/11/2023 - Dia dos Finados;        ==   . 25/12/2023 e 26/12/2023 - Natal;     =");
            printf("\n=   . 15/11/2023 - Proclamação da Rep.     ==   . 31/12/2023 a 01/12/2023 - Ano Novo.  =");
            printf("\n=                                          ==                                          =");
            printf("\n========================================================================================");

            printf("\nDigite o número do mês: ");
            scanf("%i", &opcao);

            switch (opcao) {

                case 11:

                    ingresso.data.mes = 11;

                    break;

                case 12:

                    ingresso.data.mes = 12;

                    break;

                default:

                    printf("\nOpção inválida, por favor tente novamente.\n");

                    break;

            }

        }

        while (opcao!=(11||12));

        do {

            printf("\nPor favor, digite o dia: ");
            fflush(stdin);
            scanf("%i", &ingresso.data.dia);

            if (ingresso.data.mes==11) {

                if ((ingresso.data.dia<31)||(ingresso.data.dia>0)) {

                    opcao = 0;

                    break;

                }

                else {

                    printf("\nOpção inválida, por favor tente novamente.\n");

                }

            }

            else {

                if ((ingresso.data.dia<32)||(ingresso.data.dia>0)) {

                    opcao = 0;

                    break;

                }

                else {

                    printf("\nOpção inválida, por favor tente novamente.\n");

                }

            }

        }

        while(opcao!=0);

        printf("\nData escolhida: %i / %i / %i \n", ingresso.data.dia, ingresso.data.mes, 2023);

        do {

            printf("\n===================================================");
            printf("\n=                                                 =");
            printf("\n= [1] Entrada Inteira R$ 15,00;                   =");
            printf("\n=                                                 =");
            printf("\n= [2] Meia-entrada R$ 7,50;                       =");
            printf("\n= (É necessário apresentar documento na entrada.) =");
            printf("\n=                                                 =");
            printf("\n===================================================\n");
            printf("\nQual o tipo de ingresso?");
            scanf("%i", &ingresso.tipo);

            switch (ingresso.tipo) {

                case '1':
                    break;
                case '2':
                    break;
                default:
                    printf("\nOpção inválida, por favor tente novamente.\n");
                    break;

            }

        }

        while((ingresso.tipo!='1')&&(ingresso.tipo!='2'));

        do {

            printf("\nQual a quantidade de ingressos? ");
            scanf("%i", &quantidade);

            if (quantidade<=0) {
                printf("\nQuantidade inválida, por favor tente novamente.");
            }

            else {
                break;
            }

        }

        while(quantidade<=0);

        switch (ingresso.tipo) {

            case '1':
                printf("\nTotal: R$ %f", quantidade*15);
                break;

            case '2':
                printf("\nTotal: R$ %f", quantidade*7.5);
                break;

        }

        printf("\n==================================");
        printf("\n=           Pagamento             ");
        printf("\n==================================");
        printf("\n=                                =");
        printf("\n= [1] Dinheiro;                  =");
        printf("\n=                                =");
        printf("\n= [2] Débito;                    =");
        printf("\n=                                =");
        printf("\n= [3] Crédito;                   =");
        printf("\n=                                =");
        printf("\n= [4] Pix.                       =");
        printf("\n=                                =");
        printf("\n==================================\n");
        printf("\nQual o método de pagamento? ");
        scanf("%i", opcao);

        printf("\nRealize o pagamento.\n");
        getch();

        printf("\nRecebendo pagamento...\n");
        getch();

        printf("\nPagamento recebido com sucesso.\n");
        getch();

        gerar_ingresso(quantidade, ingresso);

    }

    while (opcao!='0');

    getch();

}

int gerar_ingresso(int quantidade, tipo_ingresso ingresso) {

    FILE *arquivo_ingresso = fopen("C:\\Users\\leona\\OneDrive\\Documentos\\Projetos C\\Projeto_Integrado_Multidisciplinar\\Arquivos\\ingresso.txt", "ab");

    for (int i = 1 ; i <= quantidade ; i++) {

        int numero = rand();

        char tipo[30];

        ingresso.numero = numero;

        if (ingresso.tipo == '1') {
            tipo = "Entrada-Inteira";
        }

        else {
            tipo = "Meia-Entrada";
        }

        printf("\n============================================");
        printf("\n=              Ingresso [%i]               =", i);
        printf("\n============================================");
        printf("\n                                            ");
        printf("\n    Número: %i", numero);
        printf("\n                                            ");
        printf("\n    Data: %i/%i/%i", ingresso.data.dia, ingresso.data.mes, 2023);
        printf("\n                                            ");
        printf("\n    Tipo: %s", tipo);
        printf("\n                                            ");
        printf("\n============================================\n");

        fwrite(&ingresso,sizeof(ingresso),1,arquivo_ingresso);

    }


    fclose(arquivo_ingresso);

}

int cadastro_login() {

    char opcao;

    FILE *arquivo_login = fopen("C:\\Users\\leona\\OneDrive\\Documentos\\Projetos C\\Projeto_Integrado_Multidisciplinar\\Arquivos\\cadastro_login_senha.txt", "ab");

    do {

    ("cls");

    printf("\n============================================================");
    printf("\n  Atenção: Login e senha possuem limite de 20 caracteres.   ");
    printf("\n============================================================\n");

    printf("\nPor favor, digite o login: ");
    fflush(stdin);
    gets(login.login);

    printf("Por favor, digite a senha: ");
    fflush(stdin);
    gets(login.senha);

    printf("\n================================");
    printf("\n=      Níveis de Cadastro      =");
    printf("\n================================");
    printf("\n=                              =");
    printf("\n= [1] Funcionário do Museu;    =");
    printf("\n=                              =");
    printf("\n= [2] Gerência do Museu;       =");
    printf("\n=                              =");
    printf("\n= [3] Gestor de Sistema.       =");
    printf("\n=                              =");
    printf("\n================================\n");

    printf("\nPor favor, digite o nível do cadastro: ");
    fflush(stdin);
    scanf("%i", &login.nivel_login);

    switch (login.nivel_login) {
        case 1:
            fwrite(&login,sizeof(login),1,arquivo_login);
            printf("\nLogin cadastrado com sucesso!\n");
            break;
        case 2:
            fwrite(&login,sizeof(login),1,arquivo_login);
            printf("\nLogin cadastrado com sucesso!\n");
            break;
        case 3:
            fwrite(&login,sizeof(login),1,arquivo_login);
            printf("\nLogin cadastrado com sucesso!\n");
            break;
        default:
            printf("\nOpção inválida, por favor tente novamente.\n");
            break;
    }

    printf("\n===================================");
    printf("\n\n [1] Sim;");
    printf("\n [0] Não.");
    printf("\n\nDeseja realizar outro cadastro? ");
    scanf("%c", &opcao);
    printf("===================================\n");

    }

    while (opcao!='0');

    fclose(arquivo_login);

    getch();

}

int leitura_login() {

    // Essa função serve para comparar o login e senha digitados e retornar 0 caso tenha algum erro, ou o nível (1, 2 ou 3) do cadastro caso esteja certo.

    char opcao;

    tipo_login comparador_login;

    int resultado;

    FILE *arquivo_login = fopen("C:\\Users\\leona\\OneDrive\\Documentos\\Projetos C\\Projeto_Integrado_Multidisciplinar\\Arquivos\\cadastro_login_senha.txt", "rb");

    ("cls");

    printf("\n=================================================");
    printf("\n=                   Login                       =");
    printf("\n=================================================\n");

    printf("\nPor favor, digite o login: ");
    fflush(stdin);
    gets(comparador_login.login);

    printf("\nPor favor, digite a senha: ");
    fflush(stdin);
    gets(comparador_login.senha);

    while ( ( fread ( &login , sizeof(login) , 1 , arquivo_login ) ) > 0 ) {

        if ( (!(strcmp(login.login, comparador_login.login)) && !(strcmp(login.senha, comparador_login.senha))) != 0) {

            switch (login.nivel_login) {

                case 1:
                    resultado = 1;
                    return 1;
                    break;
                case 2:
                    resultado = 2;
                    return 2;
                    break;
                case 3:
                    resultado = 3;
                    return 3;
                    break;
                default:
                    resultado = 0;
                    return 0;
                    break;

            }

    }

    }

    fclose(arquivo_login);

}

int escrita_login() {

    // Essa função serve apenas para teste de cadastro de login no arquivo, não é utilizada no código em si.

    char opcao;

    ("cls");

    FILE *arquivo_login = fopen("C:\\Users\\leona\\OneDrive\\Documentos\\Projetos C\\Projeto_Integrado_Multidisciplinar\\Arquivos\\cadastro_login_senha.txt", "rb");

    printf("\n=================================================");
    printf("\n=         Logins e Senhas Cadastrados           =");
    printf("\n=================================================");

    while ( ( fread ( &login , sizeof(login) , 1 , arquivo_login ) ) > 0 ) {

        printf("\n");
        printf("\nLogin: %s.", login.login);
        printf("\nSenha: %s.", login.senha);
        printf("\nNível: %i.", login.nivel_login);
        printf("\n");

    }

    fclose(arquivo_login);

    getch();

}

int entrada() {

    FILE *arquivo_ingresso = fopen("C:\\Users\\leona\\OneDrive\\Documentos\\Projetos C\\Projeto_Integrado_Multidisciplinar\\Arquivos\\ingresso.txt", "rb+");

    int numero_ingresso, encontrado;

    tipo_ingresso ingresso;

    printf("\nPor favor, digite o número do seu ingresso: ");
    fflush(stdin);
    scanf("%i", &numero_ingresso);

    ingresso.numero = numero_ingresso;

     while((fread(&ingresso,sizeof(ingresso),1,arquivo_ingresso))>0 && encontrado==0) {

        ingresso =

        if(ingresso.numero==numero_ingresso) {

            fwrite(&ingresso,sizeof(ingresso),1,arquivo_ingresso);

            printf("\nEntrada feita com sucesso.\n");

            found=1;

        }

     }

    fclose(arquivo_ingresso);

    if(encontrado==0) {
        printf("\nIngresso não encontrado.\n");
    }

}

int menu_exposicao() {

    char opcao;

    ("cls");

    do {

        printf("\n====================================================");
        printf("\n=                    Exposição                     =");
        printf("\n====================================================\n");

        printf("\n==============================");
        printf("\n=           Menu             =");
        printf("\n==============================");
        printf("\n=                            =");
        printf("\n= [1] Item 1;                =");
        printf("\n=                            =");
        printf("\n= [1] Item 2;                =");
        printf("\n=                            =");
        printf("\n= [1] Item 3;                =");
        printf("\n=                            =");
        printf("\n= [1] Item 4;                =");
        printf("\n=                            =");
        printf("\n= [1] Item 5;                =");
        printf("\n=                            =");
        printf("\n= [1] Item 6;                =");
        printf("\n=                            =");
        printf("\n= [0] Sair.                  =");
        printf("\n=                            =");
        printf("\n==============================\n");

        printf("\nDigite o número da opção do item da exposição a ser visto: ");

        scanf("%c", &opcao);

        switch(opcao) {

            case '1':
                    printf("\n==================================================");
                    printf("\n=               O Vírus da Covid                 =");
                    printf("\n==================================================");
                    printf("\n=                                                =");
                    printf("\n=                      ....                      =");
                    printf("\n=                       ..                       =");
                    printf("\n=          ...    ...    .   ...    ...          =");
                    printf("\n=           ...     .   ..   .      ..           =");
                    printf("\n=              .   ............   .              =");
                    printf("\n=               .........    .....               =");
                    printf("\n=         ...  ....   ...   .......  ...         =");
                    printf("\n=             .   .. ..........  ...             =");
                    printf("\n=     ..      .   .  ...   ...   ...      ..     =");
                    printf("\n=     ..      ....    ... ...  .....      ..     =");
                    printf("\n=             .....  ... ....   ....             =");
                    printf("\n=         ...  ...   ..   ..  .....  ...         =");
                    printf("\n=               ...  ......    ...               =");
                    printf("\n=              .   .........      .              =");
                    printf("\n=           ..     ..   ..   .     ...           =");
                    printf("\n=          ...    ..    .    ...    ...          =");
                    printf("\n=                       ..                       =");
                    printf("\n=                      ....                      =");
                    printf("\n=                                                =");
                    printf("\n==================================================");
                    printf("\n");
                    printf("\n==================================================");
                    printf("\n                       texto1                     ");
                    printf("\n==================================================");
                    printf("\n");
                break;
            case '2':
                    printf("\n==================================================");
                    printf("\n=               O Vírus da Covid                 =");
                    printf("\n==================================================");
                    printf("\n=                                                =");
                    printf("\n=                      ....                      =");
                    printf("\n=                       ..                       =");
                    printf("\n=          ...    ...    .   ...    ...          =");
                    printf("\n=           ...     .   ..   .      ..           =");
                    printf("\n=              .   ............   .              =");
                    printf("\n=               .........    .....               =");
                    printf("\n=         ...  ....   ...   .......  ...         =");
                    printf("\n=             .   .. ..........  ...             =");
                    printf("\n=     ..      .   .  ...   ...   ...      ..     =");
                    printf("\n=     ..      ....    ... ...  .....      ..     =");
                    printf("\n=             .....  ... ....   ....             =");
                    printf("\n=         ...  ...   ..   ..  .....  ...         =");
                    printf("\n=               ...  ......    ...               =");
                    printf("\n=              .   .........      .              =");
                    printf("\n=           ..     ..   ..   .     ...           =");
                    printf("\n=          ...    ..    .    ...    ...          =");
                    printf("\n=                       ..                       =");
                    printf("\n=                      ....                      =");
                    printf("\n=                                                =");
                    printf("\n==================================================");
                    printf("\n");
                    printf("\n==================================================");
                    printf("\n                       texto1                     ");
                    printf("\n==================================================");
                    printf("\n");
                break;
            case '3':
                    printf("\n==================================================");
                    printf("\n=               O Vírus da Covid                 =");
                    printf("\n==================================================");
                    printf("\n=                                                =");
                    printf("\n=                      ....                      =");
                    printf("\n=                       ..                       =");
                    printf("\n=          ...    ...    .   ...    ...          =");
                    printf("\n=           ...     .   ..   .      ..           =");
                    printf("\n=              .   ............   .              =");
                    printf("\n=               .........    .....               =");
                    printf("\n=         ...  ....   ...   .......  ...         =");
                    printf("\n=             .   .. ..........  ...             =");
                    printf("\n=     ..      .   .  ...   ...   ...      ..     =");
                    printf("\n=     ..      ....    ... ...  .....      ..     =");
                    printf("\n=             .....  ... ....   ....             =");
                    printf("\n=         ...  ...   ..   ..  .....  ...         =");
                    printf("\n=               ...  ......    ...               =");
                    printf("\n=              .   .........      .              =");
                    printf("\n=           ..     ..   ..   .     ...           =");
                    printf("\n=          ...    ..    .    ...    ...          =");
                    printf("\n=                       ..                       =");
                    printf("\n=                      ....                      =");
                    printf("\n=                                                =");
                    printf("\n==================================================");
                    printf("\n");
                    printf("\n==================================================");
                    printf("\n                       texto1                     ");
                    printf("\n==================================================");
                    printf("\n");
                break;
            case '4':
                    printf("\n==================================================");
                    printf("\n=               O Vírus da Covid                 =");
                    printf("\n==================================================");
                    printf("\n=                                                =");
                    printf("\n=                      ....                      =");
                    printf("\n=                       ..                       =");
                    printf("\n=          ...    ...    .   ...    ...          =");
                    printf("\n=           ...     .   ..   .      ..           =");
                    printf("\n=              .   ............   .              =");
                    printf("\n=               .........    .....               =");
                    printf("\n=         ...  ....   ...   .......  ...         =");
                    printf("\n=             .   .. ..........  ...             =");
                    printf("\n=     ..      .   .  ...   ...   ...      ..     =");
                    printf("\n=     ..      ....    ... ...  .....      ..     =");
                    printf("\n=             .....  ... ....   ....             =");
                    printf("\n=         ...  ...   ..   ..  .....  ...         =");
                    printf("\n=               ...  ......    ...               =");
                    printf("\n=              .   .........      .              =");
                    printf("\n=           ..     ..   ..   .     ...           =");
                    printf("\n=          ...    ..    .    ...    ...          =");
                    printf("\n=                       ..                       =");
                    printf("\n=                      ....                      =");
                    printf("\n=                                                =");
                    printf("\n==================================================");
                    printf("\n");
                    printf("\n==================================================");
                    printf("\n                       texto1                     ");
                    printf("\n==================================================");
                    printf("\n");
                break;
            case '5':
                    printf("\n==================================================");
                    printf("\n=               O Vírus da Covid                 =");
                    printf("\n==================================================");
                    printf("\n=                                                =");
                    printf("\n=                      ....                      =");
                    printf("\n=                       ..                       =");
                    printf("\n=          ...    ...    .   ...    ...          =");
                    printf("\n=           ...     .   ..   .      ..           =");
                    printf("\n=              .   ............   .              =");
                    printf("\n=               .........    .....               =");
                    printf("\n=         ...  ....   ...   .......  ...         =");
                    printf("\n=             .   .. ..........  ...             =");
                    printf("\n=     ..      .   .  ...   ...   ...      ..     =");
                    printf("\n=     ..      ....    ... ...  .....      ..     =");
                    printf("\n=             .....  ... ....   ....             =");
                    printf("\n=         ...  ...   ..   ..  .....  ...         =");
                    printf("\n=               ...  ......    ...               =");
                    printf("\n=              .   .........      .              =");
                    printf("\n=           ..     ..   ..   .     ...           =");
                    printf("\n=          ...    ..    .    ...    ...          =");
                    printf("\n=                       ..                       =");
                    printf("\n=                      ....                      =");
                    printf("\n=                                                =");
                    printf("\n==================================================");
                    printf("\n");
                    printf("\n==================================================");
                    printf("\n                       texto1                     ");
                    printf("\n==================================================");
                    printf("\n");
                break;
            case '6':
                    printf("\n==================================================");
                    printf("\n=               O Vírus da Covid                 =");
                    printf("\n==================================================");
                    printf("\n=                                                =");
                    printf("\n=                      ....                      =");
                    printf("\n=                       ..                       =");
                    printf("\n=          ...    ...    .   ...    ...          =");
                    printf("\n=           ...     .   ..   .      ..           =");
                    printf("\n=              .   ............   .              =");
                    printf("\n=               .........    .....               =");
                    printf("\n=         ...  ....   ...   .......  ...         =");
                    printf("\n=             .   .. ..........  ...             =");
                    printf("\n=     ..      .   .  ...   ...   ...      ..     =");
                    printf("\n=     ..      ....    ... ...  .....      ..     =");
                    printf("\n=             .....  ... ....   ....             =");
                    printf("\n=         ...  ...   ..   ..  .....  ...         =");
                    printf("\n=               ...  ......    ...               =");
                    printf("\n=              .   .........      .              =");
                    printf("\n=           ..     ..   ..   .     ...           =");
                    printf("\n=          ...    ..    .    ...    ...          =");
                    printf("\n=                       ..                       =");
                    printf("\n=                      ....                      =");
                    printf("\n=                                                =");
                    printf("\n==================================================");
                    printf("\n");
                    printf("\n==================================================");
                    printf("\n                       texto1                     ");
                    printf("\n==================================================");
                    printf("\n");
                break;
            case 0:
                printf("\nMuito obrigado por visitar o museu!\n");
                break;
            default:
                printf("\nOpção inválida, tente novamente.\n");
                break;

        }

    }

    while (opcao!=0);

    questionario();

}

int menu_relatorio() {

    char opcao;

    ("cls");

    do {

        printf("\n=====================================");
        printf("\n=           Relatórios              =");
        printf("\n=====================================");
        printf("\n=                                   =");
        printf("\n= [1] Imprimir relatório;           =");
        printf("\n=                                   =");
        printf("\n= [0] Sair.                         =");
        printf("\n=                                   =");
        printf("\n=====================================\n");

        printf("\nPor favor, digite a opção: ");
        scanf("%c", &opcao);

        switch (opcao) {
            case '1':
                relatorio();
                break;
            case '0':
                break;
            default:
                printf("\nOpção inválida, por favor tente novamente.\n ");
                break;
        }

    }

    while( opcao != '0');

}

int relatorio() {

    char opcao;

    ("cls");

}

int questionario() {

    char opcao;

    ("cls");

}

*/
