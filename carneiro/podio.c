#include "podio.h"
typedef struct Faz_do_podio{
	fazendeiro *f;
	struct Faz_do_podio *abaixo;
}faz_do_podio;
typedef struct Podio{
	faz_do_podio *top;
	//faz_podio *base;
}podio;
podio* cria_podio(){
	podio *p=(podio*)malloc(sizeof(podio));
	if(p!= NULL){
	//	podio->base=NULL;
		p->top=NULL;
		return p;
	}
}
faz_do_podio *cria_faz_podio(){
	faz_do_podio *f=(faz_do_podio*) malloc (sizeof(faz_do_podio));
	if(f != NULL){
		f->abaixo=NULL;
		return f;
	}
}
//ORDENAÇÃO DO PODIO /////
podio* ordena_podio(fila *fila_do_faz){
	int i,j;
	float times[3];
	podio *pod=cria_podio();
	faz_do_podio *fp[3],*aux;
	fazendeiro *para_guardar=fila_do_faz->primeiro;
	i=0;
	while(para_guardar != NULL ){
		fp[i]=cria_faz_podio();
		fp[i]->f=para_guardar;
		para_guardar=para_guardar->atras;
		i++;
	}
	for (i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(fp[i]->f->tempo_corrida_animais<fp[j]->f->tempo_corrida_animais){
				aux=fp[j];
				fp[j]=fp[i];
				fp[i]=aux;
			}
		}
	}
	for(i=2;i>=0;i--){
		if(i==2){
			pod->top=fp[i];
		}else{
			aux=pod->top;
			pod->top=fp[i];
			pod->top->abaixo=aux;
		}
	}
	return pod;
}
void imprime_podio(podio *p){
	podio *aux=p;
	system("color Bc");
	int i;
	fazendeiro *faz;
	system("f0");
	printf("\t\t\t-----------------------------------------------PODIO-----------------------------------------\n");
	printf("\t\t\t                                                o( )o\n");
	printf("\t\t\t                             1º__________________%s________________\n",aux->top->f->nome);
	printf("\t\t\t          \\()/\n");
	printf("\t\t2º_______________%s___________________\n",aux->top->f->nome);
	printf("\t\t\t                                                                                         (o)\n");
	printf("\t\t\t                                                                       3º_______________%s___________________\n",aux->top->f->nome);
	printf("\t\t\t\t\t\t\t\t\tEsta é a classificação do torneio.\n");
		for(i=0;i<3;i++){
			printf("Classificação:%d.\n",i+1);
			printf("Nome: %s.\n",aux->top->f->nome);
			printf("Tempo de corrida: %f.\n",aux->top->f->tempo_corrida_animais);
			aux->top=aux->top->abaixo;
		}
}
