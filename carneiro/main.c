#include "carneiro.c"
#include "pista.c"
#include "corrida.c"
#include "podio.c"
main(){
	setlocale(LC_ALL,"portuguese");
	int i=0,j;
	fila_car *fila_corrida=criar_fila_car();
	fazendeiro *aux;
	printf("**************************POR FAVOR COLOQUE O PROGRAMA EM TELA CHEIA PARA MELHOR VISUALIZAÇÃO*****************************\n");
	system("pause");
	system("cls");
	system("color Bc");
	printf("					-------------------------------------------------------------------------			\n");
	printf("					|    Bem vindo a corrida anual de carneiro de Massachussets do Oeste     |			\n");
	printf("					-------------------------------------------------------------------------			\n");
	printf("\t\t\t\t\t                   __________________________\n");
	printf("\t\t\t\t\t                    /  (\\__/)    ===           \\\n");
	printf("\t\t\t\t\t              ___  /   |O  O|                   \\  ___\n");
	printf("\t\t\t\t\t             |___|/___@@\\__/@@___________________\\|___|          .\n");
	printf("\t\t\t\t\t                 /________________________________\\                .\n");
	printf("\t\t\t\t\t                 ||      \\=======*=======/       ||             .    .\n");
	printf("\t\t\t\t\t                 ##################################           ...\n");
	printf("\t\t\t\t\t.... . .  ..   \\____________|BAA 1|_____________/         . ....\n");
	printf("\t\t\t\t\t      . . . ..   ####         -------          ####     ... .   . .\n");
	printf("\t\t\t\t\t         . ..... ####                          ####  .. ... .. .\n");
	printf("Aguarde...");
	sleep(5);
	system("color 8f");
	system("cls");
	pista* p=criar_pista();
	system("color Bc");
	insere_pista(p);
	//print_pista(p);
	system("cls");
	fila *fila_de_fazendeiros=cria_fila();
	printf("Agora vamos cadastrar os fazendeiros e seus respectivos carneiros.\n");
	sleep(1);
	system("color E0");
	do{
		aux=cadastra_fazendeiros(p->tam_da_pista);
		if(fila_de_fazendeiros->primeiro==NULL){
			aux->frente=NULL;
			aux->atras=NULL;
			fila_de_fazendeiros->primeiro=aux;
			fila_de_fazendeiros->ultimo=aux;
		}else{
			aux->frente=NULL;
			aux->atras=NULL;
			aux->frente=fila_de_fazendeiros->ultimo;
			fila_de_fazendeiros->ultimo->atras=aux;
			fila_de_fazendeiros->ultimo=aux;
		}
		i++;
		system("color Bc");
		saber_fila_de_fazendeiros(fila_de_fazendeiros);
		system("color E0");
	}
	while(i<3);
	printf("Os fazedneiros foram cadastrados e os carneiros também.\n");
	system("color 80");
	envia_para_correr(fila_de_fazendeiros,p);
	podio *pd=ordena_podio(fila_de_fazendeiros);
	imprime_podio(pd);
}
