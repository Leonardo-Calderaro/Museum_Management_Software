
/*======================================================================================================================================================*/
/*======================================================================================================================================================*/
/*======================================================================================================================================================*/

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





typedef struct tipo_data {
    int dia;
    int mes;
    int ano;
} tipo_data;

typedef struct tipo_visitante {
    char nome[51];
    tipo_data data_nascimento;
    char documento[25];
    int quantidade_ingressos_comprados;
} tipo_visitante;

typedef struct tipo_login {
    char login[21];
    char senha[21];
    int nivel_login;
} tipo_login;

typedef struct tipo_ingresso {
    struct tipo_data data;
    char tipo;
    int numero;
    char entrada;
    char nome_visitante[51];
    char documento_visitante[25];
} tipo_ingresso;

typedef struct tipo_quesitonario {

} tipo_questionario;





/*======================================================================================================================================================*/
/*======================================================================================================================================================*/
/*======================================================================================================================================================*/





int menu_aplicacoes_nivel_um(void);
int menu_aplicacoes_nivel_dois(void);
int menu_aplicacoes_nivel_tres(void);


int menu_bilheteria(void);
int menu_entrada(void);
int menu_exposicao(void);
int menu_relatorio(void);
int menu_cadastro_visitante(void);
int menu_cadastro_login(void);
int menu_consulta_cadastro_visitante(void);


int testar_login(void);
int cadastrar_login(void);
int modificar_login(void);
int deletar_login(void);
int consultar_login(void);
int mostrar_todos_login(void);


int cadastrar_visitante(void);
int consultar_cadastro_visitante_nome(void);
const char* consultar_cadastro_visitante_documento(void);
int modificar_cadastro_visitante(void);
int deletar_cadastro_visitante(void);
int mostrar_todos_visitante(void);


int gerar_ingresso(tipo_ingresso, int, tipo_visitante);
int deletar_ingresso(void);
int mostrar_todos_ingresso(void);
int mostrar_todos_ingresso_ativo(void);
int mostrar_todos_ingresso_inativo(void);
int consultar_ingresso(void);
int dar_baixa_ingresso(void);





/*======================================================================================================================================================*/
/*======================================================================================================================================================*/
/*======================================================================================================================================================*/





/* ok */ /* stdin ok */ void main(void) {

    setlocale(LC_ALL, "");

    menu_aplicacoes_nivel_tres();

    /*

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
                    menu_aplicacoes_nivel_um();
                }
                else if (tentativa_login==2){
                    printf("\nLogin realizado com sucesso.\n");
                    menu_aplicacoes_nivel_dois();
                }
                else if (tentativa_login==3) {
                    printf("\nLogin realizado com sucesso.\n");
                    menu_aplicacoes_nivel_tres();
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

    */

}





/*======================================================================================================================================================*/
/*======================================================================================================================================================*/
/*======================================================================================================================================================*/





/* ok */ int menu_aplicacoes_nivel_um(void) {

    char opcao;

        do {

            system("cls");

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

        getch();

}

/* ok */ int menu_aplicacoes_nivel_dois(void) {

    char opcao;

        do {

            system("cls");

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

/* ok */ int menu_aplicacoes_nivel_tres(void) {

    char opcao;

        do {

            system("cls");

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
            printf("\n= [5] Cadastro Visitante;                =");
            printf("\n=                                        =");
            printf("\n= [6] Cadastro Login;                    =");
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
                    menu_cadastro_login();
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





/*======================================================================================================================================================*/
/*======================================================================================================================================================*/
/*======================================================================================================================================================*/





/* ok */ int menu_bilheteria(void) {

    char opcao;

    do {

        system("cls");

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

/* ok */ int menu_entrada(void) {

    char opcao;

    do {

        system("cls");

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
                //entrada();
                break;
            case '0':
                break;
            default:
                printf("\nOpção inválida, por favor tente novamente.\n");

        }

    }

    while( opcao != '0');

}

/* ok */ int menu_exposicao(void) {

    char opcao;

    do {

        system("cls");

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

                system("cls");

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

                    getch();

                break;

            case '2':

                system("cls");

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
                    getch();

                break;

            case '3':

                system("cls");

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
                    getch();

                break;

            case '4':

                system("cls");

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
                    getch();

                break;

            case '5':

                system("cls");

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
                    getch();

                break;

            case '6':

                system("cls");

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
                    getch();

                break;

            case 0:

                printf("\nMuito obrigado por visitar o museu!\n");
                getch();

                break;

            default:

                printf("\nOpção inválida, tente novamente.\n");
                getch();

                break;

        }

    }

    while (opcao!=0);

    //questionario();

}

/* ok */ int menu_relatorio(void) {

    char opcao;

    do {

        system("cls");

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
                //relatorio();
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

/* ok */ /* stdin ok */ int menu_cadastro_visitante(void) {

    char opcao;

    do {

        system("cls");

        printf("\n==================================================");
        printf("\n=         Menu de Cadastro de Visitantes         =");
        printf("\n==================================================");
        printf("\n=                                                =");
        printf("\n= [1] Cadastrar Visitante;                       =");
        printf("\n=                                                =");
        printf("\n= [2] Consultar Cadastro de Visitante;           =");
        printf("\n=                                                =");
        printf("\n= [3] Modificar Cadastro de Visitante;           =");
        printf("\n=                                                =");
        printf("\n= [4] Deletar Cadastro de Visitante;             =");
        printf("\n=                                                =");
        printf("\n= [5] Mostrar Todos os Cadastros de Visitantes;  =");
        printf("\n=                                                =");
        printf("\n= [0] Sair.                                      =");
        printf("\n=                                                =");
        printf("\n==================================================\n");

        printf("\nPor favor, digite a opção: ");
        fflush(stdin);
        scanf("%c", &opcao);

        switch(opcao) {

            case '1':
                cadastrar_visitante();
                break;
            case '2':
                menu_consulta_cadastro_visitante();
                break;
            case '3':
                modificar_cadastro_visitante();
                break;
            case '4':
                deletar_cadastro_visitante();
                break;
            case '5':
                mostrar_todos_visitante();
                break;
            case '0':
                break;
            default:
                printf("\nOpção inválida, por favor tente novamente.");
                break;

        }

    }

    while(opcao!='0');

}

/* ok */ /* stdin ok */ int menu_cadastro_login(void) {

    char opcao;

    do {

        system("cls");

        printf("\n============================================");
        printf("\n=        Menu de Cadastro de Login         =");
        printf("\n============================================");
        printf("\n=                                          =");
        printf("\n= [1] Consultar Cadastro de Login;         =");
        printf("\n=                                          =");
        printf("\n= [2] Cadastrar Login;                     =");
        printf("\n=                                          =");
        printf("\n= [3] Deletar Login;                       =");
        printf("\n=                                          =");
        printf("\n= [4] Modificar Login;                     =");
        printf("\n=                                          =");
        printf("\n= [5] Mostrar Todos os Logins;             =");
        printf("\n=                                          =");
        printf("\n= [0] Sair.                                =");
        printf("\n=                                          =");
        printf("\n============================================\n");

        printf("\nPor favor, digite a opção: ");
        scanf("%c", &opcao);

        switch (opcao) {

            case '1':
                consultar_cadastro_login();
                break;
            case '2':
                cadastrar_login();
                break;
            case '3':
                deletar_login();
                break;
            case '4':
                modificar_login();
                break;
            case '5':
                mostrar_todos_cadastros_login();
                break;
            case '0':
                break;
            default:
                printf("\nOpção inválida, por favor tente novamente.\n");
                break;

        }

    }

    while(opcao!='0');

}

/* ok */ /* stdin ok */ int menu_consulta_cadastro_visitante(void) {

    char opcao;

    do {

        system("cls");

        printf("\n========================================================================");
        printf("\n=                 Consulta de Cadastro de Visitante                    =");
        printf("\n========================================================================");
        printf("\n=                                                                      =");
        printf("\n= [1] Consulta por nome;                                               =");
        printf("\n=                                                                      =");
        printf("\n= [2] Consulta por documento;                                          =");
        printf("\n=                                                                      =");
        printf("\n= [0] Sair.                                                            =");
        printf("\n=                                                                      =");
        printf("\n========================================================================\n");

        printf("\nPor favor, digite a opção: ");
        fflush(stdin);
        scanf("%c", &opcao);

        switch (opcao) {

            case '1':
                consultar_cadastro_visitante_nome();
                break;
            case '2':
                consultar_cadastro_visitante_documento();
                break;
            case '0':
                break;
            default:
                printf("\nOpção inválida, por favor tente novamente.");
                 break;

        }

    }

    while(opcao!='0');

}





/*======================================================================================================================================================*/
/*======================================================================================================================================================*/
/*======================================================================================================================================================*/





/* ok */ /* stdin ok */ int testar_login(void) {

    // Essa função serve para comparar o login e senha digitados e retornar 0 caso tenha algum erro, ou o nível (1, 2 ou 3) do cadastro caso esteja certo.

    tipo_login login_cadastrado, login_digitado;

    FILE *arquivo_login = fopen("C:\\Users\\leona\\OneDrive\\Documentos\\Projetos C\\Projeto_Integrado_Multidisciplinar\\Arquivos\\cadastro_login_senha.txt", "rb");

    printf("\n=================================================");
    printf("\n=                   Login                       =");
    printf("\n=================================================\n");

    printf("\nPor favor, digite o login: ");
    fflush(stdin);
    gets(login_digitado.login);

    printf("\nPor favor, digite a senha: ");
    fflush(stdin);
    gets(login_digitado.senha);

    while ( ( fread ( &login_cadastrado , sizeof(login_cadastrado) , 1 , arquivo_login ) ) > 0 ) {

        if ( (!(strcmp(login_cadastrado.login, login_digitado.login)) && !(strcmp(login_cadastrado.senha, login_digitado.senha))) != 0) {

            switch (login_cadastrado.nivel_login) {

                case 1:
                    return 1;
                    break;
                case 2:
                    return 2;
                    break;
                case 3:
                    return 3;
                    break;
                default:
                    return 0;
                    break;

            }

    }

    }

    fclose(arquivo_login);

}

/* ok */ /* stdin ok */ int cadastrar_login(void) {

    tipo_login login_digitado;

    char opcao;

    FILE *arquivo_login = fopen("C:\\Users\\leona\\OneDrive\\Documentos\\Projetos C\\Projeto_Integrado_Multidisciplinar\\Arquivos\\cadastro_login_senha.txt", "ab");

    do {

    printf("\n============================================================");
    printf("\n                    Cadastro de Login                      =");
    printf("\n============================================================\n");

    printf("\n============================================================");
    printf("\n= Atenção: Login e senha possuem limite de 20 caracteres.  =");
    printf("\n============================================================\n");

    printf("\nPor favor, digite o login: ");
    fflush(stdin);
    gets(login_digitado.login);

    printf("Por favor, digite a senha: ");
    fflush(stdin);
    gets(login_digitado.senha);

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
    scanf("%i", &login_digitado.nivel_login);

    switch (login_digitado.nivel_login) {
        case 1:
            fwrite(&login_digitado,sizeof(login_digitado),1,arquivo_login);
            printf("\nLogin cadastrado com sucesso!\n");
            break;
        case 2:
            fwrite(&login_digitado,sizeof(login_digitado),1,arquivo_login);
            printf("\nLogin cadastrado com sucesso!\n");
            break;
        case 3:
            fwrite(&login_digitado,sizeof(login_digitado),1,arquivo_login);
            printf("\nLogin cadastrado com sucesso!\n");
            break;
        default:
            printf("\nOpção inválida, por favor tente novamente.\n");
            break;
    }

    printf("\n===================================");
    printf("\n [1] Sim;");
    printf("\n [0] Não.");
    printf("\nDeseja realizar outro cadastro? "); fflush(stdin); scanf("%c", &opcao);
    printf("\n===================================\n");

    }

    while (opcao!='0');

    fclose(arquivo_login);

    getch();

}

/* ok */ /* stdin ok */ int modificar_login(void) {

    FILE *arquivo_login = fopen("C:\\Users\\leona\\OneDrive\\Documentos\\Projetos C\\Projeto_Integrado_Multidisciplinar\\Arquivos\\cadastro_login_senha.txt", "rb+");

    tipo_login login_digitado, login_lido;

    int encontrado = 0;

    int valido = 0;

    printf("\n============================================================");
    printf("\n=              Modificar Cadastro de Login                 =");
    printf("\n============================================================\n");

    printf("\nPara modificar um login e senha, digite o login: ");
    fflush(stdin);
    gets(login_digitado.login);

    printf("\nAgora, digite a senha: ");
    fflush(stdin);
    gets(login_digitado.senha);

    while( ( fread( &login_lido , sizeof(login_lido) , 1 , arquivo_login ) ) > 0 && ( encontrado == 0 ) ) {

        if ( !(strcmp(login_digitado.login, login_lido.login)) && !(strcmp(login_digitado.senha, login_lido.senha)) ) {

            encontrado = 1;

            printf("\n==============================================\n");

            printf("\nLogin: ");
            puts(login_lido.login);

            printf("\nSenha: ");
            puts(login_lido.senha);

            printf("\nNível: %i", login_lido.nivel_login);

            printf("\n\n==============================================\n");

            printf("\nPor favor, digite os novos dados do cadastro do login.");

            printf("\nLogin: ");
            fflush(stdin);
            gets(login_digitado.login);

            printf("\nSenha: ");
            fflush(stdin);
            gets(login_digitado.senha);

            do {

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

                printf("\nNível: ");
                fflush(stdin);
                scanf("%i", &login_digitado.nivel_login);

                switch (login_digitado.nivel_login) {
                    case 1:
                        fseek(arquivo_login,-(long)sizeof(login_digitado),1);
                        fwrite(&login_digitado,sizeof(login_digitado),1,arquivo_login);
                        printf("\nCadastro de Login alterado com sucesso!\n");
                        valido = 1;
                        break;
                    case 2:
                        fseek(arquivo_login,-(long)sizeof(login_digitado),1);
                        fwrite(&login_digitado,sizeof(login_digitado),1,arquivo_login);
                        printf("\nCadastro de Login alterado com sucesso!\n");
                        valido = 1;
                        break;
                    case 3:
                        fseek(arquivo_login,-(long)sizeof(login_digitado),1);
                        fwrite(&login_digitado,sizeof(login_digitado),1,arquivo_login);
                        printf("\nCadastro de Login alterado com sucesso!\n");
                        valido = 1;
                        break;
                    default:
                        printf("\nOpção inválida, por favor tente novamente.\n");
                        break;
                }

            }

            while (valido==0);

        }

    }

    if (encontrado==0) printf("\nCadastro de Login não encontrado, por favor tente novamente.");

    fclose(arquivo_login);

    getch();

}

/* ok */ /* stdin ok */ int deletar_login(void) {

    FILE *arquivo_login_leitura = fopen("C:\\Users\\leona\\OneDrive\\Documentos\\Projetos C\\Projeto_Integrado_Multidisciplinar\\Arquivos\\cadastro_login_senha.txt", "rb");
    FILE *arquivo_login_escrita = fopen("C:\\Users\\leona\\OneDrive\\Documentos\\Projetos C\\Projeto_Integrado_Multidisciplinar\\Arquivos\\cadastro_login_senha_temporario.txt", "wb");

    tipo_login login_lido;

    char login[21];
    char senha[21];

    int encontrado = 0;

    printf("\n============================================================");
    printf("\n=              Deletar Cadastro de Login                   =");
    printf("\n============================================================\n");

    printf("\nPara deletar o cadastro de um login, digite o login: ");
    fflush(stdin);
    gets(login);

    printf("\nDigite a senha: ");
    fflush(stdin);
    gets(senha);

    rewind(arquivo_login_leitura);

    while( ( fread( &login_lido , sizeof ( login_lido ) , 1 , arquivo_login_leitura ) ) > 0 ) {

        if ( strcmp(login, login_lido.login) ) {

            fwrite(&login_lido , sizeof(login_lido) , 1 , arquivo_login_escrita);

        }

        else {

            encontrado = 1;

        }

    }

    if (encontrado!=0) {

        printf("\nCadastro deletado com sucesso.\n");

    }

    else {

        printf("\nCadastro não encontrado, por favor tente novamente.\n");

    }

    fclose(arquivo_login_leitura);

    remove("C:\\Users\\leona\\OneDrive\\Documentos\\Projetos C\\Projeto_Integrado_Multidisciplinar\\Arquivos\\cadastro_login_senha.txt");

    fclose(arquivo_login_escrita);

    rename("C:\\Users\\leona\\OneDrive\\Documentos\\Projetos C\\Projeto_Integrado_Multidisciplinar\\Arquivos\\cadastro_login_senha_temporario.txt" , "C:\\Users\\leona\\OneDrive\\Documentos\\Projetos C\\Projeto_Integrado_Multidisciplinar\\Arquivos\\cadastro_login_senha.txt");

    getch();

}

/* ok */ /* stdin ok */ int consultar_cadastro_login(void) {

    FILE *arquivo_login = fopen("C:\\Users\\leona\\OneDrive\\Documentos\\Projetos C\\Projeto_Integrado_Multidisciplinar\\Arquivos\\cadastro_login_senha.txt", "rb");

    tipo_login login_digitado, login_lido;

    int encontrado = 0;

    printf("\n============================================================");
    printf("\n=              Consultar Cadastro de Login                 =");
    printf("\n============================================================\n");

    printf("\nPara consultar um cadastro de login, por favor digite o login: ");
    fflush(stdin);
    gets(login_digitado.login);

    while( ( fread( &login_lido , sizeof(login_lido) , 1 , arquivo_login ) ) > 0 ) {

        if ( !(strcmp(login_digitado.login, login_lido.login)) ) {

            printf("\n====================================================\n");
            printf("\nLogin: "); puts(login_lido.login);
            printf("\nSenha: "); puts(login_lido.senha);
            printf("\nNível: %i", login_lido.nivel_login);
            printf("\n====================================================\n");

            encontrado = 1;

        }

    }

    if (encontrado==0) printf("\nCadastro de Login não encontrado, por favor tente novamente.\n");

    fclose(arquivo_login);

    getch();

}

/* ok */ /* stdin ok */ int mostrar_todos_cadastros_login(void) {

    FILE *arquivo_login = fopen("C:\\Users\\leona\\OneDrive\\Documentos\\Projetos C\\Projeto_Integrado_Multidisciplinar\\Arquivos\\cadastro_login_senha.txt", "rb");

    tipo_login login_lido;

    printf("\n============================================================");
    printf("\n=           Mostrar Todos os Cadastros de Login            =");
    printf("\n============================================================\n");

    while( ( fread( &login_lido , sizeof(login_lido) , 1 , arquivo_login ) ) > 0 ) {

            printf("\n====================================================\n");
            printf("\nLogin: "); puts(login_lido.login);
            printf("\nSenha: "); puts(login_lido.senha);
            printf("\nNível: %i", login_lido.nivel_login);
            printf("\n====================================================\n");

    }

    fclose(arquivo_login);

    getch();


}





/*======================================================================================================================================================*/
/*======================================================================================================================================================*/
/*======================================================================================================================================================*/





/* ok */ /* stdin ok */ int cadastrar_visitante(void) {

    tipo_visitante visitante_digitado;

    char opcao;

    FILE *arquivo_visitante = fopen("C:\\Users\\leona\\OneDrive\\Documentos\\Projetos C\\Projeto_Integrado_Multidisciplinar\\Arquivos\\cadastro_visitante.txt", "ab");

    do {

        printf("\n============================================================");
        printf("\n                   Cadastro de Visitante                   =");
        printf("\n============================================================\n");

        printf("\n============================================================");
        printf("\n= Atenção: Nomes devem possuir até no máximo 50 caracteres =");
        printf("\n============================================================\n");

        printf("\nPor favor, digite o nome: ");
        fflush(stdin);
        gets(visitante_digitado.nome);

        printf("\nPor favor, digite o documento: ");
        fflush(stdin);
        gets(visitante_digitado.documento);

        do {
            printf("\nPor favor, digite o dia do nascimento: ");
            fflush(stdin);
            scanf("%i", &visitante_digitado.data_nascimento.dia);
            if (!((visitante_digitado.data_nascimento.dia>0)&&(visitante_digitado.data_nascimento.dia<32))) printf("\nOpção digitada inválida, por favor tente novamente.\n");
        }
        while (!((visitante_digitado.data_nascimento.dia>0)&&(visitante_digitado.data_nascimento.dia<32)));

        do {
            printf("\nPor favor, digite o mês do nascimento: ");
            fflush(stdin);
            scanf("%i", &visitante_digitado.data_nascimento.mes);
            if (!((visitante_digitado.data_nascimento.mes>0)&&(visitante_digitado.data_nascimento.mes<13))) printf("\nOpção digitada inválida, por favor tente novamente.\n");
        }
        while (!((visitante_digitado.data_nascimento.mes>0)&&(visitante_digitado.data_nascimento.mes<13)));

        do {
            printf("\nPor favor, digite o ano do nascimento: ");
            fflush(stdin);
            scanf("%i", &visitante_digitado.data_nascimento.ano);
            if (!((visitante_digitado.data_nascimento.ano>1900)&&(visitante_digitado.data_nascimento.ano<2024))) printf("\nOpção digitada inválida, por favor tente novamente.\n");
        }
        while (!((visitante_digitado.data_nascimento.ano>1900)&&(visitante_digitado.data_nascimento.ano<2024)));

        visitante_digitado.quantidade_ingressos_comprados = 0;

        fwrite(&visitante_digitado,sizeof(visitante_digitado),1,arquivo_visitante);
        printf("\nLogin cadastrado com sucesso!\n");

        printf("\n===================================");
        printf("\n [1] Sim;");
        printf("\n [0] Não.");
        printf("\nDeseja realizar outro cadastro? "); fflush(stdin); scanf("%c", &opcao);
        printf("\n===================================\n");

    }

    while (opcao!='0');

    fclose(arquivo_visitante);

    getch();

}

/* ok */ /* stdin ok */ int consultar_visitante_nome(void) {

    FILE *arquivo_visitante = fopen("C:\\Users\\leona\\OneDrive\\Documentos\\Projetos C\\Projeto_Integrado_Multidisciplinar\\Arquivos\\cadastro_visitante.txt", "rb");

    tipo_visitante visitante_digitado, visitante_lido;

    int encontrado = 0;

    printf("\nPor favor, digite o nome: ");
    fflush(stdin);
    gets(visitante_digitado.nome);

    while( ( fread( &visitante_lido , sizeof(visitante_lido) , 1 , arquivo_visitante ) ) > 0 ) {

        if ( !(strcmp(visitante_digitado.nome, visitante_lido.nome)) ) {

            printf("\n====================================================");
            printf("\nNome: "); puts(visitante_lido.nome);
            printf("Documento: "); puts(visitante_lido.documento);
            printf("Data de Nascimento: %i/%i/%i", visitante_lido.data_nascimento.dia, visitante_lido.data_nascimento.mes, visitante_lido.data_nascimento.ano);
            printf("\nQuantidade de Ingressos Comprados: %i", visitante_lido.quantidade_ingressos_comprados);
            printf("\n====================================================\n");

            encontrado = 1;

        }

    }

    if (encontrado==0) {
            printf("\nCadastro de Visitante não encontrado, por favor tente novamente.\n");
    }
    else {
        //return visitante_lido;
    }

    getch();

}

/* ok */ /* stdin ok */ const char* consultar_cadastro_visitante_documento(void) {

    FILE *arquivo_visitante = fopen("C:\\Users\\leona\\OneDrive\\Documentos\\Projetos C\\Projeto_Integrado_Multidisciplinar\\Arquivos\\cadastro_visitante.txt", "rb");

    tipo_visitante visitante_digitado, visitante_lido;

    int encontrado = 0;

    printf("\nPor favor, digite o documento: ");
    fflush(stdin);
    gets(visitante_digitado.documento);

    while( ( fread( &visitante_lido , sizeof(visitante_lido) , 1 , arquivo_visitante ) ) > 0 ) {

        if ( !(strcmp(visitante_digitado.documento, visitante_lido.documento)) ) {

            printf("\n====================================================");
            printf("\nNome: "); puts(visitante_lido.nome);
            printf("Documento: "); puts(visitante_lido.documento);
            printf("Data de Nascimento: %i/%i/%i", visitante_lido.data_nascimento.dia, visitante_lido.data_nascimento.mes, visitante_lido.data_nascimento.ano);
            printf("\nQuantidade de Ingressos Comprados: %i", visitante_lido.quantidade_ingressos_comprados);
            printf("\n====================================================\n");

            encontrado = 1;

        }

    }

    if (encontrado==0) {

            printf("\nCadastro de Visitante não encontrado, por favor tente novamente.\n");

    }

    else {

        return visitante_digitado.documento;

    }

    getch();

}

/* ok */ /* stdin ok */ int modificar_cadastro_visitante(void) {

    FILE *arquivo_visitante = fopen("C:\\Users\\leona\\OneDrive\\Documentos\\Projetos C\\Projeto_Integrado_Multidisciplinar\\Arquivos\\cadastro_visitante.txt", "rb+");

    tipo_visitante visitante_digitado, visitante_lido;

    char opcao;

    int encontrado = 0;

    printf("\n============================================================");
    printf("\n=            Modificar Cadastro de Visitante               =");
    printf("\n============================================================\n");

    printf("\nPara modificar o cadastro de visitante, digite o documento: ");
    fflush(stdin);
    gets(visitante_digitado.documento);

    while( ( fread( &visitante_lido , sizeof(visitante_lido) , 1 , arquivo_visitante ) ) > 0 && ( encontrado == 0 ) ) {

        if ( !(strcmp(visitante_digitado.documento, visitante_lido.documento)) ) {

            encontrado = 1;

            printf("\nCadastro localizado: \n");

            printf("\n====================================================");
            printf("\nNome: "); puts(visitante_lido.nome);
            printf("Documento: "); puts(visitante_lido.documento);
            printf("Data de Nascimento: %i/%i/%i", visitante_lido.data_nascimento.dia, visitante_lido.data_nascimento.mes, visitante_lido.data_nascimento.ano);
            printf("\nQuantidade de Ingressos Comprados: %i", visitante_lido.quantidade_ingressos_comprados);
            printf("\n====================================================\n");

            printf("\nPor favor, digite os novos dados do cadastro do visitante.");

            printf("\nNome: ");
            fflush(stdin);
            gets(visitante_digitado.nome);

            printf("\nDocumento: ");
            fflush(stdin);
            gets(visitante_digitado.documento);

            do {
                printf("\nPor favor, digite o dia do nascimento: ");
                fflush(stdin);
                scanf("%i", &visitante_digitado.data_nascimento.dia);
                if (!((visitante_digitado.data_nascimento.dia>0)&&(visitante_digitado.data_nascimento.dia<32))) printf("\nOpção digitada inválida, por favor tente novamente.\n");
            }
            while (!((visitante_digitado.data_nascimento.dia>0)&&(visitante_digitado.data_nascimento.dia<32)));

            do {
                printf("\nPor favor, digite o mês do nascimento: ");
                fflush(stdin);
                scanf("%i", &visitante_digitado.data_nascimento.mes);
                if (!((visitante_digitado.data_nascimento.mes>0)&&(visitante_digitado.data_nascimento.mes<13))) printf("\nOpção digitada inválida, por favor tente novamente.\n");
            }
            while (!((visitante_digitado.data_nascimento.mes>0)&&(visitante_digitado.data_nascimento.mes<13)));

            do {
                printf("\nPor favor, digite o ano do nascimento: ");
                fflush(stdin);
                scanf("%i", &visitante_digitado.data_nascimento.ano);
                if (!((visitante_digitado.data_nascimento.ano>1900)&&(visitante_digitado.data_nascimento.ano<2024))) printf("\nOpção digitada inválida, por favor tente novamente.\n");
            }
            while (!((visitante_digitado.data_nascimento.ano>1900)&&(visitante_digitado.data_nascimento.ano<2024)));

            fseek(arquivo_visitante,-(long)sizeof(visitante_digitado),1);

            fwrite(&visitante_digitado,sizeof(visitante_digitado),1,arquivo_visitante);

            printf("\Cadastro de Visitante alterado com sucesso!\n");

            printf("\n===================================");
            printf("\n [1] Sim;");
            printf("\n [0] Não.");
            printf("\nDeseja modificar outro cadastro? "); fflush(stdin); scanf("%c", &opcao);
            printf("===================================\n");

        }

    }

    if (encontrado==0) printf("\nCadastro de Visitante não encontrado, por favor tente novamente.\n");

    fclose(arquivo_visitante);

    getch();

}

/* ok */ /* stdin ok */ int deletar_cadastro_visitante(void) {

    FILE *arquivo_visitante_leitura = fopen("C:\\Users\\leona\\OneDrive\\Documentos\\Projetos C\\Projeto_Integrado_Multidisciplinar\\Arquivos\\cadastro_visitante.txt", "rb");
    FILE *arquivo_visitante_escrita = fopen("C:\\Users\\leona\\OneDrive\\Documentos\\Projetos C\\Projeto_Integrado_Multidisciplinar\\Arquivos\\cadastro_visitante_temporario.txt", "wb");

    tipo_visitante visitante_digitado, visitante_lido;

    int encontrado = 0;

    printf("\n============================================================");
    printf("\n=              Deletar Cadastro de Visitante               =");
    printf("\n============================================================\n");

    printf("\nPara deletar o cadastro de um visitante, digite o documento: ");
    fflush(stdin);
    gets(visitante_digitado.documento);

    rewind(arquivo_visitante_leitura);

    while( ( fread( &visitante_lido , sizeof ( visitante_lido ) , 1 , arquivo_visitante_leitura ) ) > 0 ) {

        if ( strcmp(visitante_digitado.documento, visitante_lido.documento) ) {

            fwrite(&visitante_lido , sizeof(visitante_lido) , 1 , arquivo_visitante_escrita);

        }

        else {

            encontrado = 1;

        }

    }

    fclose(arquivo_visitante_leitura);
    fclose(arquivo_visitante_escrita);

    remove("C:\\Users\\leona\\OneDrive\\Documentos\\Projetos C\\Projeto_Integrado_Multidisciplinar\\Arquivos\\cadastro_visitante.txt");

    rename("C:\\Users\\leona\\OneDrive\\Documentos\\Projetos C\\Projeto_Integrado_Multidisciplinar\\Arquivos\\cadastro_visitante_temporario.txt" , "C:\\Users\\leona\\OneDrive\\Documentos\\Projetos C\\Projeto_Integrado_Multidisciplinar\\Arquivos\\cadastro_visitante.txt");

    if (encontrado!=0) {

        printf("\nCadastro deletado com sucesso.\n");

    }

    else {

        printf("\nCadastro não encontrado, por favor tente novamente.\n");

    }

    getch();

}

/* ok */ /* stdin ok */ int mostrar_todos_visitante(void) {

    FILE *arquivo_visitante = fopen("C:\\Users\\leona\\OneDrive\\Documentos\\Projetos C\\Projeto_Integrado_Multidisciplinar\\Arquivos\\cadastro_visitante.txt", "rb");

    tipo_visitante visitante_lido;

    printf("\n============================================================");
    printf("\n=         Mostrar Todos os Cadastros de Visitante          =");
    printf("\n============================================================\n");

    while( ( fread( &visitante_lido , sizeof(visitante_lido) , 1 , arquivo_visitante ) ) > 0 ) {

            printf("\n====================================================");
            printf("\nNome: "); puts(visitante_lido.nome);
            printf("Documento: "); puts(visitante_lido.documento);
            printf("Data de Nascimento: %i/%i/%i", visitante_lido.data_nascimento.dia, visitante_lido.data_nascimento.mes, visitante_lido.data_nascimento.ano);
            printf("\nQuantidade de Ingressos Comprados: %i", visitante_lido.quantidade_ingressos_comprados);
            printf("\n====================================================\n");

    }

    getch();


}





/*======================================================================================================================================================*/
/*======================================================================================================================================================*/
/*======================================================================================================================================================*/





/* ok */ /* stdin ok */ int vender_ingresso() {

    tipo_ingresso ingresso;

    tipo_visitante visitante;

    char documento[25];

    char opcao;

    int quantidade;

    do {

        system("cls");

            printf("\n========================================================================================");
            printf("\n=                           Compra de Ingressos 2023                                   =");
            printf("\n========================================================================================\n");

            printf("\nBem vindo à compra de ingressos do museu.\n");

            do {

            printf("\n [1] Sim;");
            printf("\n [0] Não.");
            printf("\nPossui cadastro de visitante? ");
            scanf("%c", &opcao);

            if ((opcao!='0')&&(opcao!='1')) printf("\nOpção inválida, tente novamente.\n");

            }
            while((opcao!='0')&&(opcao!='1'));

            if (opcao=='1') {
                //visitante = consultar_visitante_documento();
            }
            else {
                //visitante = cadastrar_visitante();
            }

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
            printf("\n=   . Exposição Cultura da Internet        ==   . Exposição Festividades de Fim de Ano =");
            printf("\n=                                          ==                                          =");
            printf("\n= - O museu não abrirá nas datas:          == - O museu não abrirá nas datas:          =");
            printf("\n=   . 02/11/2023 - Dia dos Finados;        ==   . 25/12/2023 e 26/12/2023 - Natal;     =");
            printf("\n=   . 15/11/2023 - Proclamação da Rep.     ==   . 31/12/2023 a 01/12/2023 - Ano Novo.  =");
            printf("\n=                                          ==                                          =");
            printf("\n========================================================================================");

            printf("\nAgora, digite o número do mês (11 ou 12): ");
            fflush(stdin);
            scanf("%i", &ingresso.data.mes);

            if ((ingresso.data.mes!=11)&&(ingresso.data.mes!=12)) printf("\nOpção inválida, por favor tente novamente.\n");

        }
        while ((ingresso.data.mes!=11)&&(ingresso.data.mes!=12));

        do {
            opcao = '1';
            printf("\nPor favor, digite o dia: ");
            fflush(stdin);
            scanf("%i", &ingresso.data.dia);

            if (ingresso.data.mes==11) {
                if ((ingresso.data.dia<31)||(ingresso.data.dia>0)) {
                    opcao = '0';
                    break;
                }
                else {
                    printf("\nOpção inválida, por favor tente novamente.\n");
                }
            }
            else {
                if ((ingresso.data.dia<32)||(ingresso.data.dia>0)) {
                    opcao = '0';
                    break;
                }
                else {
                    printf("\nOpção inválida, por favor tente novamente.\n");
                }
            }
        }
        while(opcao!='0');

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

        gerar_ingresso(ingresso,quantidade,visitante);

        opcao = '0';

    }

    while (opcao!='0');

    getch();

}

/* ok */ /* stdin ok */ int gerar_ingresso(tipo_ingresso ingresso, int quantidade, tipo_visitante cadastro_visitante) {

    FILE *arquivo_visitante = fopen("C:\\Users\\leona\\OneDrive\\Documentos\\Projetos C\\Projeto_Integrado_Multidisciplinar\\Arquivos\\cadastro_visitante.txt", "rb+");

    FILE *arquivo_ingressos = fopen("C:\\Users\\leona\\OneDrive\\Documentos\\Projetos C\\Projeto_Integrado_Multidisciplinar\\Arquivos\\ingressos.txt", "ab");

    tipo_visitante visitante_lido;

    int encontrado = 0;

    while( ( fread( &visitante_lido , sizeof(visitante_lido) , 1 , arquivo_visitante ) ) > 0 && ( encontrado == 0 ) ) {

        if ( !(strcmp(visitante_lido.documento, cadastro_visitante.documento)) ) {

            encontrado = 1;

            fseek(arquivo_visitante,-(long)sizeof(cadastro_visitante),1);

            printf("\nQuantidade de ingressos comprados alterada de %i, ", visitante_lido.quantidade_ingressos_comprados);

            cadastro_visitante.quantidade_ingressos_comprados = cadastro_visitante.quantidade_ingressos_comprados + quantidade;

            printf("para %i.\n", cadastro_visitante.quantidade_ingressos_comprados);

            fwrite(&cadastro_visitante,sizeof(cadastro_visitante),1,arquivo_visitante);

        }

    }

    if (encontrado!=0) {

        for ( int i = 0 ; i<quantidade ; i++ ) {

            ingresso.numero = rand();

            fwrite(&ingresso,sizeof(ingresso),1,arquivo_ingressos);

            printf("=====================================================");
            printf("=                    Ingresso                       =");
            printf("=====================================================");
            printf("                                                     ");
            printf(" Número do Ingresso: %i", ingresso.numero);
            printf("                                                     ");
            switch(ingresso.tipo) {
                case '1':
                    printf(" Tipo do Ingresso: Entrada Inteira");
                case '2':
                    printf(" Tipo do Ingresso: Meia Entrada");
            }
            printf("                                                     ");
            printf(" Data do Ingresso: %i/%i/%i", ingresso.data.dia, ingresso.data.mes, ingresso.data.ano);
            printf("                                                     ");
            printf("=====================================================");

        }

    }

    else {

        printf("\nCadastro de Visitante não encontrado, por favor tente novamente.");

    }

    fclose(arquivo_ingressos);

    getch();

}





/*======================================================================================================================================================*/
/*======================================================================================================================================================*/
/*======================================================================================================================================================*/

















