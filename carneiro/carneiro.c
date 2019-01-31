#include "carneiro.h"
/*CARNEIRO*/
typedef struct Carneiro{
	char apelido[30];
	float peso;
	int id;
	float tempo_de_corrida;
	float velocidade;
	struct Carneiro *frente;
	struct Carneiro *atras;
}carneiro;
/*FILA DE CARNEIRO*/
typedef struct Fila_car{
	carneiro *primeiro;
	carneiro *ultimo;
}fila_car;
/*FAZENDEIRO*/
typedef struct Fazendeiro{
	int id;
	char nome[40];
	fila_car *f;
	float tempo_corrida_animais;
	struct Fazendeiro *frente;
	struct Fazendeiro *atras;
}fazendeiro;
/*FILA DE FAZENDEIRO*/
typedef struct Fila{
	fazendeiro *primeiro;
	fazendeiro *ultimo;
}fila;
//cria carneiro
carneiro *cria_carneiro(){
	carneiro *a=(carneiro*) malloc (sizeof(carneiro));
	if(a != NULL){
		a->atras=NULL;
		a->frente=NULL;
		return a;
	}
	printf("Erro.\n");
}
//cria fila de carneiro
fila_car *criar_fila_car(){
	fila_car *c=(fila_car*) malloc (sizeof(fila_car));
	if(c !=NULL){
		c->primeiro=NULL;
		c->ultimo=NULL;
		return c;
	}
}
//cria fazendeiros
fazendeiro *cria_fazendeiro(){
	fazendeiro *f=(fazendeiro*) malloc (sizeof(fazendeiro));
	if(f !=NULL){
		f->tempo_corrida_animais=0;
		return f;
	}
}
//cria fila de fazendeiros
fila *cria_fila(){
	fila *f=(fila*) malloc (sizeof(fila));
	if(f !=NULL){
		f->primeiro=NULL;
		f->ultimo=NULL;
		return f;
	}
}
//cadastrando carneiros
void cadastra_carneiros(fazendeiro *f,float tam){
	fila_car *fila_do_faz=criar_fila_car();
	int i,comp=0;
	if(f!=NULL){
		for(i=0;i<5;i++){
			carneiro *aux=cria_carneiro();
			do{
				do{
					printf("Digite o apelido do carneiro %d.\n",i+1);
					fflush(stdin);
					gets(aux->apelido);
				}
				while(comp==1);
				printf("Digite o peso do carneiro.\n");
				scanf("%f",&aux->peso);
				if(aux->peso<30 ||aux->peso>50){
					printf("Que pena %s você não está no peso ideal para corrida ;(\n",aux->apelido);
					printf("Cadastre um com peso maior que 30 e memor que 50.\n");
					printf(".....\n");
					system("pause");
					system("cls");
				}
			}
			while(aux->peso<30 ||aux->peso>50);
			//VELOCIDADE DO CARNEIRO//
			velocidade(aux,tam);
			insere_fila_do_fazendeiro(fila_do_faz,aux);
			printf("Carneiro Cadastrado.\n");
			system("cls");
		}
		system("cls");
	}
	f->f=fila_do_faz;
}
//colocando carneiros do fazendiero em fila
void insere_fila_do_fazendeiro(fila_car *f, carneiro* c){
	carneiro *aux=c;
	if(f!= NULL && c != NULL){
		if(f->primeiro==NULL){
			f->primeiro=aux;
			f->ultimo=aux;
		}else{
			aux->frente=f->ultimo;
			f->ultimo->atras=aux;
			f->ultimo=aux;
		}
	}
}
//cadastrnado informaçãoes do fazendeiro
void edita_fazendeiro(fazendeiro *f,float tam){
	if(f!=NULL){
		system("cls");
		printf("Digite o nome do fazendeiro.\n");
		fflush(stdin);
		gets(f->nome);
		printf("Salvo.\n");
		system("cls");
		cadastra_carneiros(f,tam);
	}
}
//cria o fazendeiro
fazendeiro* cadastra_fazendeiros(float tam){
	fazendeiro *f;
	printf("Vamos cadastrar um fazendeiro....\n");
	sleep(1);
	f=cria_fazendeiro();
	edita_fazendeiro(f,tam);
	return f;
}
//atribui a velocidade do carneiro com base no  seu peso. 1km/h para cada quilo a mais ou a menos
void velocidade(carneiro *c,float tamanho){
	float tot=0;
	if(c != NULL){
		if(c->peso==40){
			c->velocidade=15/3.6;
		}
		else{
			if(c->peso>40){
				tot=c->peso-40;
				c->velocidade=((15-tot)/3.6);
			}	
			else{
				tot=40-c->peso;
				c->velocidade=((15+tot)/3.6);
			}	
		}
		c->tempo_de_corrida=tamanho/c->velocidade;
	}
}
//enfileirando os carneiros para corrida
/*void enfileirar_carneiros(fazendeiro *ult,fila_car *f){
	carneiro *aux;
	if(ult !=NULL){
		while(aux !=NULL){
			if(f->primeiro==NULL){
				f->primeiro=aux;
				f->ultimo=aux;
			}else{
				aux->frente=f->ultimo;
				f->ultimo=aux;
			}
			if(aux->atras==NULL){
				aux=NULL;
			}else{
				aux=aux->atras;
			}
		}
	}
}*/
void saber_fila_de_fazendeiros(fila *fila_de_fazendeiros){
	fazendeiro *aux=fila_de_fazendeiros->primeiro;
	printf("Fazendeiros cadastrados e seus carneiros.\n");
	if(aux != NULL){
		while(aux != NULL){
			printf("Nome: %s.\n",aux->nome);
			printf("\n\n");
			saber_fila_de_carneiros(aux->f);
			if(aux->atras==NULL){
				aux=NULL;
			}
			else{
				aux=aux->atras;
			}
			system("cls");
		}
	}
}
void saber_fila_de_carneiros(fila_car *f){
	carneiro *aux=f->primeiro;
	if(f != NULL){
		while(aux != NULL){
			printf("Apelido: %s.\n",aux->apelido);
			printf("Peso %.2f.\n",aux->peso);
			printf("Velocidade %.2f.\n",aux->velocidade);
			aux=aux->atras;
		}
	}
	system("pause");
}
