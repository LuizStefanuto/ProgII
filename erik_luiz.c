#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct{
	char marca[20];
	char modelo[20];
} tModelo;

typedef struct{
	int livre;
	char placa[8];
	char marca[20];
	char modelo[20];
	int hora;
	int minuto;
} tVaga;

int cadastraMarca(char *p);
void listaMarcas(char *p, int q);
void cadastraModelo();
void cadastraEntrada();
void efetuaRetirada();
void listaVagas();

int main(){

	setlocale(LC_ALL,"");	//configura console para exibir caracteres especiais

	int op = 0;
	int marcas = 0;	// contador de marcas cadastradas

	char marca[100];
	tModelo modelo[100];
	tVaga vaga[100];

	do{
		system("cls");
		printf("Selecione uma opção:\n\n");
		printf("\t1 - Cadastrar marca\n");
		printf("\t2 - Cadastrar modelo\n");
		printf("\t3 - Cadastrar entrada\n");
		printf("\t4 - Efetuar retirada\n");
		printf("\t5 - Listar vagas ocupadas\n");
		printf("\t0 - Encerrar programa\n\n");
		printf("Sua opção: ");
		scanf("%d", &op);

		switch(op){
			case 1:
				if(marcas < 100)
					marcas += cadastraMarca(marca[marcas]);
				break;
			case 2:
				cadastraModelo();
				break;
			case 3:
				cadastraEntrada();
				break;
			case 4:
				efetuaRetirada();
				break;
			case 5:
				listaVagas();
				break;
		}

	}while(op > 0);

	return 0;
}

int cadastraMarca(char *p){
	printf("Digite a marca: ");
	fflush(stdin);
	gets(p);

	return 1;
}

void listaMarcas(char *p, int q){
	int i, j;
	for(i = 0; i < q; i++){
		printf("%d - ", i + 1);
			for(j = i * 20; j < (i + 1) * 20; j++)
				if(p[j] != '\0')
					printf("%c", p[j]);
				else
					break;
		printf("\n");
	}
}

void cadastraModelo(){}
void cadastraEntrada(){}
void efetuaRetirada(){}
void listaVagas(){}
