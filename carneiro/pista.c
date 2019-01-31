#ifndef PISTA_C
#define PISTA_C
#include "pista.h"
//estrutura para o tipo de atraso e areas da pista
typedef struct Tipo{
	int atraso;
	char desc[20];
	struct Tipo *prox;
	struct Tipo *ant;
}tipo;
typedef struct Lista_elementos{
	tipo *primeiro;
	tipo *ultimo;
}lista_elemento;
//pista de corrida
typedef struct Pista{
	float tam_da_pista;
	lista_elemento *lis;
	int total;
}pista;
//CRIANDO UM ELEMENTO DA PISTA
tipo * cria_tipo(){
	tipo *t=(tipo*) malloc (sizeof(tipo));
	if(t!= NULL){
		t->prox= NULL;
		t->ant=NULL;
	}
}
//LISTA DE ELEMENTOS DA PISTA
lista_elemento *cria_lista_pista(){
	lista_elemento *l=(lista_elemento* )malloc (sizeof(lista_elemento));
	if(l !=NULL){
		l->primeiro=NULL;
		l->ultimo=NULL;
	}
}
//criando pista de corrida
pista* criar_pista(){
	float tam;
	pista *p=(pista*) malloc(sizeof(pista));
	if(p != NULL){
		p->total=0;
		printf("\t\t\t\t\t\t\tDigite o tamanho da pista em KM.\n");
		scanf("%f",&tam);
		p->tam_da_pista=tam*1000;//transformando a pista em metros
		p->lis=NULL;
		return p;
	}
	printf("Erro ao criar  a pista.\n");
}
//inserindo áreas da pista
void insere_pista(pista *p){	
	int i=0,j=0,ant;
	system("cls");
	lista_elemento *l=cria_lista_pista();
	printf("Isto pode demorar um pouco\n.....Aguarde....\n");//rand sorteando cerca de 50 numeros iguais, para melhorar eficiencia, impedi
	//o sorteio de numeros repetidos em sequencia.... por isso a demora
	for(j=0;j<10;j++){
		tipo *aux=cria_tipo();
		do{
			ant=i;
			srand(time(NULL));
			i=rand()%3;
			if(i==0){
				ant=i;
			}
		}
		while(ant==i && j>0);
		switch(i){
			case 0:
				aux->atraso=0;
				strcpy(aux->desc,"limpa");
			break;
			case 1:
				aux->atraso=10;
				strcpy(aux->desc,"lamaçal");
			break;
			case 2:
				aux->atraso=5;
				strcpy(aux->desc,"pulo");
			break;
		}
		if(l->primeiro==NULL){
			aux->ant=NULL;
			aux->prox=NULL;
			l->primeiro=aux;
			l->ultimo=aux;
		}else{
			l->ultimo->prox=aux;
			aux->ant=l->ultimo;
			l->ultimo=aux;
		}
		printf("%d-",l->ultimo->atraso);
	}
	p->lis=l;
}
void print_pista(pista *p){
		if(p!= NULL){
			tipo *aux;
			aux=p->lis->primeiro;
			while(aux != NULL){
				printf("Atraso %d.\n",aux->atraso);
				if(aux->prox==NULL){
					aux=NULL;
				}else{
					aux=aux->prox;
				}
			}
		}
}
void imprime_parte_com_pulo(){
	int i=0;
	while(i<=4){
	 	if(i==0){
			printf("\n                     _,._\t\t\t");
			printf("\n                 __.'   _)\t\t\t");
			printf("\n                <_,)'.-'a\\\t\t\t");
			printf("\n                  /' (    \\\t\t\t");
			printf("\n      _.-----..,-'   (`'--^\t\t\t");
			printf("\n     //              |\t\t\t");
			printf("\n    (|   `;      ,   |\t\t\t\t\t\t\t\t\t\t_________________________");
			printf("\n      \\   ;.----/   ,/\t\t\t\t\t\t\t\t\t\t|                        |");
			printf("\n       ) // /  | |\\ \\\t\t\t\t\t\t\t\t\t\t|                        |");
			printf("\n   jgs \\ \\`\\   | |/ /\t\t\t\t\t\t\t\t\t\t|                        |");
			printf("\n        \\ \\ \\  | |\\/\t\t\t\t\t\t\t\t\t\t|                        |");
			printf("\n         `' `'  `'`");
			printf("\n_____________________________________________________________________________________________________________________________________________________\n");
			usleep(100000);
			system("cls");	
		}
		if(i==1){
			printf("\n\t\t                     _,._\t\t\t\t\t");
			printf("\n\t\t                 __.'   _)\t\t\t\t\t");
			printf("\n\t\t                <_,)'.-'a\\\t\t\t\t\t");
			printf("\n\t\t                  /' (    \\\t\t\t\t\t");
			printf("\n\t\t      _.-----..,-'   (`'--^\t\t\t\t\t");
			printf("\n\t\t     //              |\t\t\t\t\t");
			printf("\n\t\t    (|   `;      ,   |\t\t\t\t\t");
			printf("\n\t\t    (|   `;      ,   |\t\t\t\t_________________________");
			printf("\n\t\t      \\   ;.----/   ,/\t\t\t\t|                        |");
			printf("\n\t\t       ) // /  | |\\ \\\t\t\t\t|                        |");
			printf("\n\t\t   jgs \\ \\`\\   | |/ /\t\t\t\t|                        |");
			printf("\n\t\t        \\ \\ \\  | |\\/\t\t\t\t|                        |");
			printf("\n_____________________________________________________________________________________________________________________________________________________\n");
			usleep(100000);
			system("cls");
		}
		if(i==2){
			printf("\n\t\t\t\t\t                     _,._\t\t\t");
			printf("\n\t\t\t\t\t                 __.'   _)\t\t\t");
			printf("\n\t\t\t\t\t                <_,)'.-'a\\\t\t\t");
			printf("\n\t\t\t\t\t                  /' (    \\\t\t\t");
			printf("\n\t\t\t\t\t      _.-----..,-'   (`'--^\t\t\t");
			printf("\n\t\t\t\t\t     //              |\t\t\t");
			printf("\n\t\t\t\t\t    (|   `;      ,   |\t\t\t");
			printf("\n\t\t\t\t\t      \\   ;.----/   ,/\t\t\t");
			printf("\n\t\t\t\t\t       ) // /  | |\\ \\\t\t\t");
			printf("\n\t\t\t\t\t   jgs \\ \\`\\   | |/ /\t\t\t");
			printf("\n\t\t\t\t\t        \\ \\ \\  | |\\/\t\t\t");
			printf("\n\t\t\t\t\t         `' `'  `'`");
			printf("\n");
			printf("\t\t\t\t\t\t\t_________________________\n");
			printf("\t\t\t\t\t\t\t|                        |\n");
			printf("\t\t\t\t\t\t\t|                        |\n");
			printf("\t\t\t\t\t\t\t|                        |\n");
			printf("\t\t\t\t\t\t\t|                        |\n");
			printf("\n_____________________________________________________________________________________________________________________________________________________\n");
			usleep(100000);
			system("cls");
		}
			if(i==3){
			printf("\n\t\t\t\t\t\t\t\t                     _,._\t\t\t");
			printf("\n\t\t\t\t\t\t\t\t                 __.'   _)\t\t\t");
			printf("\n\t\t\t\t\t\t\t\t                <_,)'.-'a\\\t\t\t");
			printf("\n\t\t\t\t\t\t\t\t                  /' (    \\\t\t\t");
			printf("\n\t\t\t\t\t\t\t\t      _.-----..,-'   (`'--^\t\t\t");
			printf("\n\t\t\t\t\t\t\t\t     //              |\t\t\t");
			printf("\n\t\t\t\t\t\t\t\t    (|   `;      ,   |\t\t\t");
			printf("\n\t\t\t\t\t\t\t\t      \\   ;.----/   ,/\t\t\t");
			printf("\n\t\t\t\t\t\t\t\t       ) // /  | |\\ \\\t\t\t");
			printf("\n\t\t\t\t\t\t\t\t   jgs \\ \\`\\   | |/ /\t\t\t");
			printf("\n\t\t\t\t\t\t\t\t        \\ \\ \\  | |\\/\t\t\t");
			printf("\n\t\t\t\t\t\t\t\t         `' `'  `'`");
			printf("\n");
			printf("\t\t\t\t\t\t\t_________________________\n");
			printf("\t\t\t\t\t\t\t|                        |\n");
			printf("\t\t\t\t\t\t\t|                        |\n");
			printf("\t\t\t\t\t\t\t|                        |\n");
			printf("\t\t\t\t\t\t\t|                        |\n");
			printf("\n_____________________________________________________________________________________________________________________________________________________\n");
			usleep(100000);
			system("cls");
		}
		if(i==4){
			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t                     _,._");
			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t                 __.'   _)");
			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t                <_,)'.-'a\\");
			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t                  /' (    \\");
			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t      _.-----..,-'   (`'--^");
			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t     //              |");
			printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t    (|   `;      ,   |");
			printf("\n\t\t\t\t_________________________\t\t\t\t\t\t    (|   `;      ,   |");
			printf("\n\t\t\t\t|                        |\t\t\t\t\t\t      \\   ;.----/   ,/");
			printf("\n\t\t\t\t|                        |\t\t\t\t\t\t       ) // /  | |\\ \\");
			printf("\n\t\t\t\t|                        |\t\t\t\t\t\t   jgs \\ \\`\\   | |/ /");
			printf("\n\t\t\t\t|                        |\t\t\t\t\t\t        \\ \\ \\  | |\\/");
			printf("\n_____________________________________________________________________________________________________________________________________________________\n");
			usleep(100000);
			system("cls");
		}
		i++;
	}
}

void imprime_parte_limpa(){
	int i=0;
	while(i<1){
		printf("\n                     _,._\t\t\t");
		printf("\n                 __.'   _)\t\t\t");
		printf("\n                <_,)'.-'a\\\t\t\t");
		printf("\n                  /' (    \\\t\t\t");
		printf("\n      _.-----..,-'   (`'--^\t\t\t");
		printf("\n     //              |\t\t\t");
		printf("\n    (|   `;      ,   |\t\t\t");
		printf("\n      \\   ;.----/   ,/\t\t\t");
		printf("\n       ) // /  | |\\ \\\t\t\t");
		printf("\n   jgs \\ \\`\\   | |/ /\t\t\t");
		printf("\n        \\ \\ \\  | |\\/\t\t\t");
		printf("\n         `' `'  `'`");
		printf("\n_____________________________________________________________________________________________________________________________________________________\n");
		usleep(100000);
		system("cls");
		printf("\t\t");
		printf("\t\t\t\t");
		printf("\n\t\t\t                     _,._\t\t\t");
		printf("\n\t\t\t                 __.'   _)\t\t\t");
		printf("\n\t\t\t                <_,)'.-'a\\\t\t\t");
		printf("\n\t\t\t                  /' (    \\\t\t\t");
		printf("\n\t\t\t      _.-----..,-'   (`'--^\t\t\t");
		printf("\n\t\t\t     //              |\t\t\t");
		printf("\n\t\t\t    (|   `;      ,   |\t\t\t");
		printf("\n\t\t\t      \\   ;.----/   ,/\t\t\t");
		printf("\n\t\t\t       ) // /  | |\\ \\\t\t\t");
		printf("\n\t\t\t   jgs \\ \\`\\   | || |\t\t\t");
		printf("\n\t\t\t        \\ \\ \\  | || |\t\t\t");
		printf("\n\t\t\t         ' '   ' '' '");
		printf("\n_____________________________________________________________________________________________________________________________________________________\n");
		usleep(100000);
		system("cls");
		printf("\n\t\t\t\t\t                     _,._\t\t\t");
		printf("\n\t\t\t\t\t                 __.'   _)\t\t\t");
		printf("\n\t\t\t\t\t                <_,)'.-'a\\\t\t\t");
		printf("\n\t\t\t\t\t                  /' (    \\\t\t\t");
		printf("\n\t\t\t\t\t      _.-----..,-'   (`'--^\t\t\t");
		printf("\n\t\t\t\t\t     //              |\t\t\t");
		printf("\n\t\t\t\t\t    (|   `;      ,   |\t\t\t");
		printf("\n\t\t\t\t\t      \\   ;.----/   ,/\t\t\t");
		printf("\n\t\t\t\t\t       ) // /  | |\\ \\\t\t\t");
		printf("\n\t\t\t\t\t   jgs \\ \\`\\   | |/ /\t\t\t");
		printf("\n\t\t\t\t\t        \\ \\ \\  | |\\/\t\t\t");
		printf("\n\t\t\t\t\t         `' `'  `'`");
		printf("\n_____________________________________________________________________________________________________________________________________________________\n");
		usleep(100000);
		system("cls");
		printf("\n\t\t\t\t\t\t\t\t                     _,._\t\t\t");
		printf("\n\t\t\t\t\t\t\t\t                 __.'   _)\t\t\t");
		printf("\n\t\t\t\t\t\t\t\t                <_,)'.-'a\\\t\t\t");
		printf("\n\t\t\t\t\t\t\t\t                  /' (    \\\t\t\t");
		printf("\n\t\t\t\t\t\t\t\t      _.-----..,-'   (`'--^\t\t\t");
		printf("\n\t\t\t\t\t\t\t\t     //              |\t\t\t");
		printf("\n\t\t\t\t\t\t\t\t    (|   `;      ,   |\t\t\t");
		printf("\n\t\t\t\t\t\t\t\t      \\   ;.----/   ,/\t\t\t");
		printf("\n\t\t\t\t\t\t\t\t       ) // /  | |\\ \\\t\t\t");
		printf("\n\t\t\t\t\t\t\t\t   jgs \\ \\`\\   | || |\t\t\t");
		printf("\n\t\t\t\t\t\t\t\t        \\ \\ \\  | || |\t\t\t");
		printf("\n\t\t\t\t\t\t\t\t         ' '   ' '' '");
		printf("\n_____________________________________________________________________________________________________________________________________________________\n");
		usleep(100000);
		system("cls");
		printf("\n\t\t\t\t\t\t\t\t\t\t\t                     _,._");
		printf("\n\t\t\t\t\t\t\t\t\t\t\t                 __.'   _)");
		printf("\n\t\t\t\t\t\t\t\t\t\t\t                <_,)'.-'a\\");
		printf("\n\t\t\t\t\t\t\t\t\t\t\t                  /' (    \\");
		printf("\n\t\t\t\t\t\t\t\t\t\t\t      _.-----..,-'   (`'--^");
		printf("\n\t\t\t\t\t\t\t\t\t\t\t     //              |");
		printf("\n\t\t\t\t\t\t\t\t\t\t\t    (|   `;      ,   |");
		printf("\n\t\t\t\t\t\t\t\t\t\t\t      \\   ;.----/   ,/");
		printf("\n\t\t\t\t\t\t\t\t\t\t\t       ) // /  | |\\ \\");
		printf("\n\t\t\t\t\t\t\t\t\t\t\t   jgs \\ \\`\\   | || |");
		printf("\n\t\t\t\t\t\t\t\t\t\t\t        \\ \\ \\  | || |");
		printf("\n\t\t\t\t\t\t\t\t\t\t\t         ' '   ' '' '");
		printf("\n_____________________________________________________________________________________________________________________________________________________\n");
		system("cls");
		printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t                     _,._");
		printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t                 __.'   _)");
		printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t                <_,)'.-'a\\");
		printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t                  /' (    \\");
		printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t      _.-----..,-'   (`'--^");
		printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t     //              |");
		printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t    (|   `;      ,   |");
		printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t      \\   ;.----/   ,/");
		printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t       ) // /  | |\\ \\");
		printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t   jgs \\ \\`\\   | || |");
		printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t        \\ \\ \\  | || |");
		printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t         ' '   ' '' '");
		printf("\n_____________________________________________________________________________________________________________________________________________________\n");
		usleep(100000);
		system("cls");
		i++;
	}
}
void imprime_parte_com_lama(){
	int i=0;
	while(i<=4){
	 	if(i==0){
	 		printf("\n                     _,._\t\t\t");
			printf("\n                 __.'   _)\t\t\t");
			printf("\n                <_,)'.-'a\\\t\t\t");
			printf("\n                  /' (    \\\t\t\t");
			printf("\n      _.-----..,-'   (`'--^\t\t\t");
			printf("\n     //              |\t\t\t");
			printf("\n    (|   `;      ,   |\t\t\t\t\t\t\t\t\t\t");
			printf("\n      \\   ;.----/   ,/\t\t\t\t\t\t\t\t\t\t");
			printf("\n       ) // /  | |\\ \\\t\t\t\t\t\t\t\t\t\t");
			printf("\n   jgs \\ \\`\\   | |/ /\t\t\t\t\t\t\t\t\t\t");
			printf("\n        \\ \\ \\  | |\\/\t\t\t\t\t\t\t\t\t\t");
			printf("\n         `' `'  `'`");
			printf("\n_____________________________________________________________________________________________________________________________                       _");
			printf("                                                                                                                              \\  ~~~~~~~~ ~~~~~~~~ /");
			printf("                                                                                                                                \\__________________/");
			usleep(100000);
			system("cls");	
		}
		if(i==1){
			
			printf("\n                     _,._\t\t\t");
			printf("\n                 __.'   _)\t\t\t");
			printf("\n                <_,)'.-'a\\\t\t\t");
			printf("\n                  /' (    \\\t\t\t");
			printf("\n      _.-----..,-'   (`'--^\t\t\t");
			printf("\n     //              |\t\t\t");
			printf("\n    (|   `;      ,   |\t\t\t\t\t\t\t\t\t\t");
			printf("\n      \\   ;.----/   ,/\t\t\t\t\t\t\t\t\t\t");
			printf("\n       ) // /  | |\\ \\\t\t\t\t\t\t\t\t\t\t");
			printf("\n   jgs \\ \\`\\   | |/ /\t\t\t\t\t\t\t\t\t\t");
			printf("\n        \\ \\ \\  | |\\/\t\t\t\t\t\t\t\t\t\t");
			printf("\n         `' `'  `'`");
			printf("\n_____________________________________________________________________________                       _________________________________________________");
			printf("                                                                             \\  ~~~~~~~~ ~~~~~~~~ /                                               ");
			printf("                                                                                 \\__________________/                                                ");		
			usleep(100000);
			system("cls");	
		}
		if(i==2){
			printf("\n\t\t                     _,._\t\t\t\t\t");
			printf("\n\t\t                 __.'   _)\t\t\t\t\t");
			printf("\n\t\t                <_,)'.-'a\\\t\t\t\t\t");
			printf("\n\t\t                  /' (    \\\t\t\t\t\t");
			printf("\n\t\t      _.-----..,-'   (`'--^\t\t\t\t\t");
			printf("\n\t\t     //              |\t\t\t\t\t");
			printf("\n\t\t    (|   `;      ,   |\t\t\t\t\t");
			printf("\n\t\t    (|   `;      ,   |\t\t\t\t");
			printf("\n\t\t      \\   ;.----/   ,/\t\t\t\t");
			printf("\n\t\t       ) // /  | |\\ \\\t\t\t\t");
			printf("\n\t\t   jgs \\ \\`\\   | |/ /\t\t\t\t");
			printf("\n\t\t        \\ \\ \\  | |\\/\t\t\t\t");
			printf("\n________________________________________                       ______________________________________________________________________________________");
			printf("                                          \\  ~~~~~~~~ ~~~~~~~~ /                                                                                  ");
			printf("                                              \\__________________/                                                                                   ");
			usleep(100000);
			system("cls");	
		}
		if(i==3){
			printf("\t\t\t\t\t\t\t\t\t\t\t\t _______\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t|       |\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t|  SOS  |\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t|       |\n");
			printf("\t\t\t\t\t\t\t\t\t\t\t\t _______\n");
			printf("");
			printf("\n\t\t\t\t\t                     _,._\t\t\t");
			printf("\n\t\t\t\t\t                 __.'   _)\t\t\t");
			printf("\n\t\t\t\t\t                <_,)'.-'a\\\t\t\t");
			printf("\n\t\t\t\t\t                  /' (    \\\t\t\t");
			printf("\n\t\t\t\t\t      _.-----..,-'   (`'--^\t\t\t");
			printf("\n\t\t\t\t\t     //              |\t\t\t");
			printf("\n\t\t\t\t\t    (|   `;      ,   |\t\t\t");
			printf("\n\t\t\t\t\t      \\   ;.----/   ,/\t\t\t");
			printf("\n_____________________________________________s \\ \\`\\   | |/ /   ____________________________________________________________________________________");
			printf("\n                                             \\ ~~~\\~~~~~~~~|~| /                                                                         ");
			printf("\n                                              \\_______________/                                                                      ");
			printf("\n");
			printf("\n");
			printf("                                                                                                                              ");
			printf("                                                                                                                                ");
			sleep(1);
			system("cls");	
		}
		if(i==4){
			printf("\n\t\t\t\t\t\t\t\t\t\t                     _,._");
			printf("\n\t\t\t\t\t\t\t\t\t\t                 __.'   _)");
			printf("\n\t\t\t\t\t\t\t\t\t\t                <_,)'.-'a\\");
			printf("\n\t\t\t\t\t\t\t\t\t\t                  /' (    \\");
			printf("\n\t\t\t\t\t\t\t\t\t\t      _.-----..,-'   (`'--^");
			printf("\n\t\t\t\t\t\t\t\t\t\t     //              |");
			printf("\n\t\t\t\t\t\t\t\t\t\t    (|   `;      ,   |");
			printf("\n\t\t\t\t\t\t\t\t\t\t    (|   `;      ,   |");
			printf("\n\t\t\t\t\t\t\t\t\t\t      \\   ;.----/   ,/");
			printf("\n\t\t\t\t\t\t\t\t\t\t       ) // /  | |\\ \\");
			printf("\n\t\t\t\t\t\t\t\t\t\t   jgs \\ \\`\\   | |/ /");
			printf("\n\t\t\t\t\t\t\t\t\t\t        \\ \\ \\  | |\\/");
			printf("\n____                       __________________________________________________________________________________________________________________________");
			printf("    \\  ~~~~~~~~ ~~~~~~~~ /                                                                                                                          ");
			printf("     \\__________________/                                                                                                                           ");
			usleep(100000);
			system("cls");		
		}
		i++;
	}
}
#endif

