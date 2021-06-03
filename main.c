#include<stdio.h>
#define TAM 255

char nome[TAM][50];
char email[TAM][50];
int cpf[TAM];
char carro[TAM][50];
int tempo[TAM];

int op;
void cadastro();

void pesquisar();

int main(void){
    cadastro();
    pesquisar();
}

void cadastro(){
    static int linha;

    do
    {
        printf("\nDigite o seu Nome: ");
        scanf("%s", &nome[linha]);

        printf("\nDigite o seu E-mail: ");
        scanf("%s", &email[linha]);

        printf("\nDigite o seu CPF: ");
        scanf("%d", &cpf[linha]);

        printf("\nDigite o carro que deseja alugar: ");
        scanf("%s", &carro[linha]);

        printf("\nDigite o quantos dias deseja alugar: ");
        scanf("%d", &tempo[linha]); 

        printf("\nDigite 1 para continuar ou outro valor para sair: ");
        scanf("%d", &op);

        linha++;

    } while (op==1);
    
}

void pesquisar(){
    int consultaCPF;
    char consultaEmail[50];
    int i;

    do
    {
        printf("\nDigite 1 para consultar pelo Nome ou 2 para consultar pelo Email: ");
        scanf("%d", &op);
        switch (op)
        {
            case 1:
                printf("\nDigite o CPF: ");
                scanf("%d", &consultaCPF);
                for (i = 0; i < TAM; i++)
                {
                    if(cpf[i] == consultaCPF){
                        printf("\nNome: %s\nE-mail: %s\nCPF: %d", nome[i], email[i], cpf[i]);
                    }
                }
                

                break;
            case 2:
                printf("\nDigite o E-mail: ");
                scanf("%s", &consultaEmail);
                for (i = 0; i < TAM; i++)
                {
                    if(strcmp(email[i], consultaEmail) == 0){
                        printf("\nNome: %s\nE-mail: %s\nCPF: %d", nome[i], email[i], cpf[i]);
                    }
                }

                break;
            default:
                printf("\nUsuário não encontrado.");
                break;
        }
        printf("\nDigite 1 para continauar Pesquisando: ");
        scanf("%d", &op);
        
    } while (op==1);
    
}