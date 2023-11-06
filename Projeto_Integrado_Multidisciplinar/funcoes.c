#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
#include <time.h>
#include <stdbool.h>
#include <locale.h>



int login () {

    char login_cadastrado[21] = "bananaverde";

    char login_entrada[21];

    char senha_cadastrada[21] = "bananafrita1994";

    char senha_entrada[21];

    printf("\n========================================================\n");
    printf("=       Bem vindo ao sistema Museu Temático.           =\n");
    printf("========================================================\n");
    printf("=                                                      =\n");
    printf("=     Por favor, digite o seu login e senha.           =\n");
    printf("=                                                      =\n");
    printf("========================================================\n");

    printf("\n     Login: ");
    gets(login_entrada);

    printf("\n     Senha: ");
    gets(senha_entrada);

    if (strcmp(login_cadastrado, login_entrada) == 0 && strcmp(senha_cadastrada, senha_entrada) == 0) {

        printf("\nSistema logado.\n");

    }

    else {

        printf("\nLogin ou senha errado, por favor tente novamente.\n");

    }


}

int questionario() {

    int opcao;

    printf("\n [1] Sim;");
    printf("\n [0] Não.");

    printf("\n\nGostaria de fazer o questionário? ");

    scanf("%i", &opcao);

    if (opcao==1) {

        printf("\n=====================================\n");

        printf("\nEsse é o questionário.\n");
        printf("\nMuito obrigado pela contribuição.\n");

        printf("\n=====================================\n");

    }

    else if (opcao==0) {

        printf("\nObrigado!");

    }

    else {

        printf("\nOpção inválida, tente novamente.");

    }



}

int exposicao() {

    int opcao;

    do {

    printf("\n========================================================================");
    printf("\n=                         Exposição                                    =");
    printf("\n========================================================================\n");

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

    scanf("%i", &opcao);

    switch(opcao) {

        case 1:
            printf("\n=====================================\n");
                printf("==================================================\n");
                printf("=               O Vírus da Covid                 =\n");
                printf("==================================================\n");
                printf("=                                                =\n");
                printf("=                      ....                      =\n");
                printf("=                       ..                       =\n");
                printf("=          ...    ...    .   ...    ...          =\n");
                printf("=           ...     .   ..   .      ..           =\n");
                printf("=              .   ............   .              =\n");
                printf("=               .........    .....               =\n");
                printf("=         ...  ....   ...   .......  ...         =\n");
                printf("=             .   .. ..........  ...             =\n");
                printf("=     ..      .   .  ...   ...   ...      ..     =\n");
                printf("=     ..      ....    ... ...  .....      ..     =\n");
                printf("=             .....  ... ....   ....             =\n");
                printf("=         ...  ...   ..   ..  .....  ...         =\n");
                printf("=               ...  ......    ...               =\n");
                printf("=              .   .........      .              =\n");
                printf("=           ..     ..   ..   .     ...           =\n");
                printf("=          ...    ..    .    ...    ...          =\n");
                printf("=                       ..                       =\n");
                printf("=                      ....                      =\n");
                printf("=                                                =\n");
                printf("==================================================\n");
            printf("\n=====================================\n");
            printf("\n=====================================\n");
            printf("\ntexto1\n");
            printf("\n=====================================\n");
            questionario();
            break;
        case 2:
            printf("\n=====================================\n");
                printf("==================================================\n");
                printf("=               O Vírus da Covid                 =\n");
                printf("==================================================\n");
                printf("=                                                =\n");
                printf("=                      ....                      =\n");
                printf("=                       ..                       =\n");
                printf("=          ...    ...    .   ...    ...          =\n");
                printf("=           ...     .   ..   .      ..           =\n");
                printf("=              .   ............   .              =\n");
                printf("=               .........    .....               =\n");
                printf("=         ...  ....   ...   .......  ...         =\n");
                printf("=             .   .. ..........  ...             =\n");
                printf("=     ..      .   .  ...   ...   ...      ..     =\n");
                printf("=     ..      ....    ... ...  .....      ..     =\n");
                printf("=             .....  ... ....   ....             =\n");
                printf("=         ...  ...   ..   ..  .....  ...         =\n");
                printf("=               ...  ......    ...               =\n");
                printf("=              .   .........      .              =\n");
                printf("=           ..     ..   ..   .     ...           =\n");
                printf("=          ...    ..    .    ...    ...          =\n");
                printf("=                       ..                       =\n");
                printf("=                      ....                      =\n");
                printf("=                                                =\n");
                printf("==================================================\n");
            printf("\n=====================================\n");
            printf("\n=====================================\n");
            printf("\ntexto2\n");
            printf("\n=====================================\n");
            questionario();
            break;
        case 3:
            printf("\n=====================================\n");
                printf("==================================================\n");
                printf("=               O Vírus da Covid                 =\n");
                printf("==================================================\n");
                printf("=                                                =\n");
                printf("=                      ....                      =\n");
                printf("=                       ..                       =\n");
                printf("=          ...    ...    .   ...    ...          =\n");
                printf("=           ...     .   ..   .      ..           =\n");
                printf("=              .   ............   .              =\n");
                printf("=               .........    .....               =\n");
                printf("=         ...  ....   ...   .......  ...         =\n");
                printf("=             .   .. ..........  ...             =\n");
                printf("=     ..      .   .  ...   ...   ...      ..     =\n");
                printf("=     ..      ....    ... ...  .....      ..     =\n");
                printf("=             .....  ... ....   ....             =\n");
                printf("=         ...  ...   ..   ..  .....  ...         =\n");
                printf("=               ...  ......    ...               =\n");
                printf("=              .   .........      .              =\n");
                printf("=           ..     ..   ..   .     ...           =\n");
                printf("=          ...    ..    .    ...    ...          =\n");
                printf("=                       ..                       =\n");
                printf("=                      ....                      =\n");
                printf("=                                                =\n");
                printf("==================================================\n");
            printf("\n=====================================\n");
            printf("\n=====================================\n");
            printf("\ntexto3\n");
            printf("\n=====================================\n");
            questionario();
            break;
        case 4:
            printf("\n=====================================\n");
                printf("==================================================\n");
                printf("=               O Vírus da Covid                 =\n");
                printf("==================================================\n");
                printf("=                                                =\n");
                printf("=                      ....                      =\n");
                printf("=                       ..                       =\n");
                printf("=          ...    ...    .   ...    ...          =\n");
                printf("=           ...     .   ..   .      ..           =\n");
                printf("=              .   ............   .              =\n");
                printf("=               .........    .....               =\n");
                printf("=         ...  ....   ...   .......  ...         =\n");
                printf("=             .   .. ..........  ...             =\n");
                printf("=     ..      .   .  ...   ...   ...      ..     =\n");
                printf("=     ..      ....    ... ...  .....      ..     =\n");
                printf("=             .....  ... ....   ....             =\n");
                printf("=         ...  ...   ..   ..  .....  ...         =\n");
                printf("=               ...  ......    ...               =\n");
                printf("=              .   .........      .              =\n");
                printf("=           ..     ..   ..   .     ...           =\n");
                printf("=          ...    ..    .    ...    ...          =\n");
                printf("=                       ..                       =\n");
                printf("=                      ....                      =\n");
                printf("=                                                =\n");
                printf("==================================================\n");
            printf("\n=====================================\n");
            printf("\n=====================================\n");
            printf("\ntexto4\n");
            printf("\n=====================================\n");
            questionario();
            break;
        case 5:
            printf("\n=====================================\n");
                printf("==================================================\n");
                printf("=               O Vírus da Covid                 =\n");
                printf("==================================================\n");
                printf("=                                                =\n");
                printf("=                      ....                      =\n");
                printf("=                       ..                       =\n");
                printf("=          ...    ...    .   ...    ...          =\n");
                printf("=           ...     .   ..   .      ..           =\n");
                printf("=              .   ............   .              =\n");
                printf("=               .........    .....               =\n");
                printf("=         ...  ....   ...   .......  ...         =\n");
                printf("=             .   .. ..........  ...             =\n");
                printf("=     ..      .   .  ...   ...   ...      ..     =\n");
                printf("=     ..      ....    ... ...  .....      ..     =\n");
                printf("=             .....  ... ....   ....             =\n");
                printf("=         ...  ...   ..   ..  .....  ...         =\n");
                printf("=               ...  ......    ...               =\n");
                printf("=              .   .........      .              =\n");
                printf("=           ..     ..   ..   .     ...           =\n");
                printf("=          ...    ..    .    ...    ...          =\n");
                printf("=                       ..                       =\n");
                printf("=                      ....                      =\n");
                printf("=                                                =\n");
                printf("==================================================\n");
            printf("\n=====================================\n");
            printf("\n=====================================\n");
            printf("\ntexto5\n");
            printf("\n=====================================\n");
            questionario();
            break;
        case 6:
            printf("\n=====================================\n");
                printf("==================================================\n");
                printf("=               O Vírus da Covid                 =\n");
                printf("==================================================\n");
                printf("=                                                =\n");
                printf("=                      ....                      =\n");
                printf("=                       ..                       =\n");
                printf("=          ...    ...    .   ...    ...          =\n");
                printf("=           ...     .   ..   .      ..           =\n");
                printf("=              .   ............   .              =\n");
                printf("=               .........    .....               =\n");
                printf("=         ...  ....   ...   .......  ...         =\n");
                printf("=             .   .. ..........  ...             =\n");
                printf("=     ..      .   .  ...   ...   ...      ..     =\n");
                printf("=     ..      ....    ... ...  .....      ..     =\n");
                printf("=             .....  ... ....   ....             =\n");
                printf("=         ...  ...   ..   ..  .....  ...         =\n");
                printf("=               ...  ......    ...               =\n");
                printf("=              .   .........      .              =\n");
                printf("=           ..     ..   ..   .     ...           =\n");
                printf("=          ...    ..    .    ...    ...          =\n");
                printf("=                       ..                       =\n");
                printf("=                      ....                      =\n");
                printf("=                                                =\n");
                printf("==================================================\n");
            printf("\n=====================================\n");
            printf("\n=====================================\n");
            printf("\ntexto6\n");
            printf("\n=====================================\n");
            questionario();
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

}
