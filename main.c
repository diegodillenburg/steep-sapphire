#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct structVaccination {
	int	id,
		dog_id;
	char *name,
		 *date,
		 *responsible;
};

struct structPet {
	int id;
	char *breed,
		 *name;
};

typedef struct structVaccination vaccination;
typedef struct structPet pet;

char printMenu();

int main() {
	
	return 0;
}

char printMenu()
{
    char op;
    system("clear");
    printf("Escolha uma opcao: ");
    scanf("%c", &op);
    return op;
}