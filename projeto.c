#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>


//estrutura de um produto.
typedef struct
{

    int id;
    char nome[15];
    float preco;
    int quantidade;

}PRODUTO;

//imprime a interface do menu.
void menu(){

        printf("mercadinho do sidney!!\n\n");
        printf("1-Inserir um produto\n");
        printf("2-Buscar um produto\n");
        printf("3-\n");
        printf("4-\n");
        printf("5-\n");

}

/*Fun��o que insere um produto no mercado(primeiro parametro passa a estrutura produto a ser preenchida e o segundo passa
 um ponteiro que cont�m o numero da posi��o do produto no vetor de estrutura).*/
PRODUTO inserirProduto(int *posicaoP)
{
    PRODUTO produto;

    printf("digite o id do produto que deseja registrar\n");
    scanf("%d",&produto.id);

    printf("digite o nome do produto que deseja registrar\n");
    scanf("%s",produto.nome);

    printf("digite o preco do produto que deseja registrar\n");
    scanf("%f",&produto.preco);

    printf("digite a quantidade do produto que deseja registrar\n");
    scanf("%d",&produto.quantidade);
    printf("\n");

    (*posicaoP)++;
    return produto;

}

//Fun��o que busca um produto do mercado.

void buscarProduto(PRODUTO produtosptr[20],int *quantp){

PRODUTO comparadorS;

printf("Digite o id do produto que deseja buscar!\n");
scanf("%d",&comparadorS.id);
int cont = 0;
int i;

while(cont<(*quantp)){

if((produtosptr[cont]).id == comparadorS.id) {

    printf("Produto encontrado!!\n");
    printf("NOME: %s\n",(produtosptr[cont]).nome);
    printf("ID : %d\n",(produtosptr[cont]).id);
    printf("PRECO : %f\n",(produtosptr[cont]).preco);
    printf("QUANTIDADE : %d\n",(produtosptr[cont]).quantidade);

}
cont++;
}

}

int main ()
{

    int cont;

//inicializa vari�vel que cont�m a posi��o do produto que ser� armazenado no vetor.

    int quantp = 0;

//Declara��o de um vetor de estrutura que cont�m as vagas para os produtos.

    PRODUTO produtos[20];

//Declara��o da variavel que controla o menu.
    int key;

//Declara��o do produto20 para teste do funcionamento do mercado.

    PRODUTO produto20;

    strncpy(produto20.nome,"coca-cola",9);
    produto20.id = 1;
    produto20.preco = 4.5;
    produto20.quantidade = 50;

//Declara��o do produto21 para teste do funcionamento do mercado.

    PRODUTO produto21;

    strncpy(produto21.nome,"chocolate",9);
    produto21.id = 2;
    produto21.preco = 2.0;
    produto21.quantidade = 30;

    printf("   Bem Vindo ao ");

//Loop que far� com que o menu apare�a constantemente enquanto o programa estiver rodando.

    do
    {


//Interface do menu.
menu();

//Armazenamento da vari�vel que controla o menu.
        scanf("%i",&key);

//MENU
        switch(key)
        {

//op��o 1(Inserir um produto).
        case 1 :
        {


          produtos[quantp] = inserirProduto(&quantp);
            break;

        }

//op��o 2(Buscar um produto).
        case 2 :
        {

            buscarProduto(produtos,&quantp);
            break;
        }

//op��o 3.
        case 3 :
        {

            printf("voce escolheu a opcao 3\n");
            break;
        }

        default :
        {

            if(key!=0)
            {
                printf("opcao invalida!,digite uma opcao valida!!\n");
            }
            break;
        }

        }
    }
    while(key!=0);

}
