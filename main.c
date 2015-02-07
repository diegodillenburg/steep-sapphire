#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*DECLARAÇÃO DAS STRUCTS*/
struct structVaccination {
	int	id,		// primary key for indexing records
		pet_id;
	char *name,
		 *date,
		 *responsible;
};

struct structPet {
	int id;		// primary key for indexing records
	char *breed,
		 *name;
};

typedef struct structVaccination vaccination;
typedef struct structPet pet;

/*PROTÓTIPO DAS FUNÇÕES*/

void printMenu();

/*FUNÇÃO MAIN*/
int main() {

    /*o código abaixo muda a cor do fundo e do texto de acordo com os dados abaixo:
        (o primeiro valor muda o fundo e o segundo muda o texto)
        0 = Black   1 = Blue    2 = Green   3 = Aqua    4 = Red
        5 = Purple  6 = Yellow  7 = White   8 = Gray    9 = Light Blue
        A = Light Green     B = Light Aqua      C = Light Red
        D = Light Purple    E = Light Yellow    F = Bright White*/
    system("COLOR 97"); // só funciona no Windows.

    printMenu();

    return 0;

}//fim main


/*FUNÇÃO PARA IMPRIMIR O MENU NA TELA*/
void printMenu(){
    int op;
    do{
        //system("clear");  // comando usado no Linux para limpar a tela
        system("cls");      // comando usado no Windows para limpar a tela
        printf("\n\t\t\t -- MENU PRINCIPAL --\n\n");
        printf("\t\t1 - CADASTRAR NOVAS VACINACOES\n");
        printf("\t\t2 - ALTERAR VACINACAO EXISTENTE\n");
        printf("\t\t3 - REMOVER VACINACAO\n");
        printf("\t\t4 - COMPACTAR ARQUIVO\n");
        printf("\t\t5 - PESQUISAR (por codigo de controle)\n");
        printf("\t\t6 - PESQUISAR (por nome da vacina)\n");
        printf("\t\t0 - SAIR\n\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);

        switch(op){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 0: exit(0);
                break;
            default: printf("\nDigite um valor valido");
            getch();
        }//fim switch

    } while(op!=0);//fim do-while
}

