#include<stdio.h>
#include<string.h>
#include<time.h>
main(){
	system("f0");
	printf("\t\t\t-----------------------------------------------PODIO-----------------------------------------\n");
	printf("\t\t\t                                                o( )o\n");
	printf("\t\t\t                             1º__________________%s________________\n",aux->top->f->nome);
	printf("\t\t\t          \\()/\n");
	printf("\t\t2º_______________%s___________________\n",aux->top->f->nome);
	printf("\t\t\t                                                                                         (o)\n");
	printf("\t\t\t                                                                       3º_______________%s___________________\n"aux->top->f->nome);
	printf("\t\t\t\t\t\t\t\t\tEsta é a classificação do torneio.\n");
		for(i=0;i<3;i++){
			printf("Classificação:%d.\n",i+1);
			printf("Nome: %s.\n",aux->top->f->nome);
			printf("Tempo de corrida: %f.\n",aux->top->f->tempo_corrida_animais);
			aux->top=aux->top->abaixo;
		}
    

