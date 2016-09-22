#include <stdio.h>
#include <locale.h>

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

void cadastraMarca();
void cadastraModelo();
void cadastraEntrada();
void efetuaRetirada();
void listaVagas();

int main(){

	setlocale(LC_ALL,"");	//configura console para exibir caracteres especiais

	int op = 0;

	char marca[100][20];
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
				cadastraMarca();
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

void cadastraMarca(){}
void cadastraModelo(){}
void cadastraEntrada(){}
void efetuaRetirada(){}
void listaVagas(){}