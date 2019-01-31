void realiza_corrida(carneiro *c,pista *p){
	tipo *aux=p->lis->primeiro;
	while(aux != NULL){
		if(aux->atraso==0){
			imprime_parte_limpa();
		}
		else if(aux->atraso==5){
			c->tempo_de_corrida+=5*(c->peso/0.5);
			imprime_parte_com_pulo();
		}else if(aux->atraso==10){
			c->tempo_de_corrida+=10*(c->peso/2);
			imprime_parte_com_lama();
		}
		if(aux->prox==NULL){
			aux=NULL;
		}
		else{
			aux=aux->prox;
		}
	}
}
void envia_para_correr(fila *fil,pista *p){
	fazendeiro *aux=fil->primeiro;
	float soma_tempo=0;
	if(fil!=NULL){
		printf("Vamos dar início a corrida \\/\n");
		system("pause");
		while(aux != NULL){
			printf("Enviar os carneiros de:%s.\n",aux->nome);
			system("pause");
			system("cls");
			soma_tempo=0;
			carneiro *fcar=aux->f->primeiro;
			while(fcar !=NULL){
				system("pause");
				system("cls");
				realiza_corrida(fcar,p);
				chegada();
				soma_tempo+=fcar->tempo_de_corrida;
				if(fcar->atras==NULL){
					fcar=NULL;
				}else{
					fcar=fcar->atras;
				}
			}
			aux->tempo_corrida_animais=soma_tempo;
			printf("TEMPO DE CORRIDA DOS CARNEIROS DE %s =%.2f.\n",aux->nome,aux->tempo_corrida_animais);
			system("pause");
			system("cls");
			aux=aux->atras;
		}
	}
}
chegada(){
	printf("\t\t\t\t\t\n");
printf("\t\t\t\t\t                                     ||\n");
printf("\t\t\t\t\t                                     ||\n");
printf("\t\t\t\t\t                                     ||\n");
printf("\t\t\t\t\t                                     ||    __\n");
printf("\t\t\t\t\t                                     |\\\\   ||\n");
printf("\t\t\t\t\t                                     ||\\\\  ||\n");
printf("\t\t\t\t\t                                     || \\\\ ||\n");
printf("\t\t\t\t\t                                     ||  \\\\||\n");
printf("\t\t\t\t\t                                     ||___\\\\||________________________\n");
printf("\t\t\t\t\t                                     ||\\   ||                 .  ....\\\n");
printf("\t\t\t\t\t                                     || \\  ||              .    . . . \\\n");
printf("\t\t\t\t\t                                     ||  \\ ||                  .   .   \\\n");
printf("\t\t\t\t\t                                     ||   \\||            .       .   .  \\\n");
printf("\t\t\t\t\t                                       \\   ||       _______________       \\\n");
printf("\t\t\t\t\t                                        \\  ||______ |  CHEGADA    | ______ \\\n");
printf("\t\t\t\t\t                                         \\ |||      \\_____________/\n");
printf("\t\t\t\t\t                                          \\|||            |||\n");
printf("\t\t\t\t\t                                           |||____________||______________|\n");
printf("\t\t\t\t\t                                                          ||\n");
printf("\t\t\t\t\t                                                          ||\n");
printf("\t\t\t\t\t                                                          ||\n");
printf("\t\t\t\t\t                                                          ~~\n");
}
