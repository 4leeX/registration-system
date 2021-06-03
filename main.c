#include<stdio.h>
#define TAM 255

char nome[TAM][50];
char email[TAM][50];
int cpf[TAM];
char carro[TAM][50];
int tempo[TAM];

int op;
void cadastro();

int main(void){
    cadastro();
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

        printf("\nDigite 1 para continuar ou outro valor para sair.");
        scanf("%d", &op);

        linha++;

    } while (op==1);
    
}