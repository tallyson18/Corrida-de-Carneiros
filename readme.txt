-ENUNCIADO ATIVIDADE-
FACULDADES INTEGRADAS DE CARATINGA
CURSO DE CI�NCIA DA COMPUTA��O
DISCIPLINA: Laborat�rio de Estrutura de Dados
PROFESSOR: Maicon Ribeiro
TURMAS: 2� Per�odo SEMESTRE / ANO: 2� / 2018
DATA DE ENTREGA: 09/11/2018
Desenvolvido por Tallyson Lucas
Enunciado:

Fazer um sistema que avalia o tempo m�dio de uma determinada corrida para identificar poss�veis
infratores.
Acerca do tempo de corrida:
	Um carneiro de 40kg costuma correr cerca de 15km/h. Cada quilo a menos ou a mais modifica a velocidade em 1km/h, para mais ou para menos.
Naturalmente, carneiros mais leves s�o mais r�pidos
	Os obst�culos do tipo pulo, atrasam a corrida em 5 segundos para cada 500 gramas do animal.
	Os obst�culos do tipo lama�al, atrasam a corrida em 10 segundos para cada dois quilos do animal.
	Existem �reas limpas durante a corrida, s�o basicamente regi�es da pista em que n�o h� nenhum obst�culo para atrapalhar os carneiros.
Acerca das regras das corridas:
	As corridas s�o competi��es entre os criadores (sempre tr�s fazendeiros)
	Cada criador apresenta 5 carneiros
	Os carneiros n�o correm ao mesmo tempo, quando um carneiro passa pela linha de chegada, o outro carneiro come�a a correr.
	Ganha o criador que tiver o menor tempo total das corridas dos 5 carneiros.
	Os carneiros precisam ter entre 30 e 50 kg.
Acerca da mec�nica do evento:
	� Cada um dos tr�s fazendeiros forma uma FILA com seus carneiros antes deiniciar a corrida.
	? A inten��o � que os carneiros sejam enfileirados no come�o da corrida, o primeiro carneiro da fila � o primeiro a correr, o segundo carneiro da fila correr� ap�s o primeiro, e assim, at� que os cinco carneiros de cada fazendeiro tenham corrido.
	? Assim sendo, s�o tr�s filas, uma para cada fazendeiro � cada uma delas com cinco carneiros
	� A pista de corrida em si, corresponde a uma LISTA de obst�culos e regi�es limpas.
	? Devem haver dez itens na lista que corresponde a pista. Esses itens podem ser regi�es limpas ou obst�culos.
	? Apenas uma lista de pista deve haver. Afinal, uma �nica pista de corrida � necess�ria para que todos os carneiros corram.
	? Efetivamente, n�o h� necessidade de que os carneiros passem pela pista para calcular o tempo de corrida. Basta percorrer a pista por completo e considerar as caracter�sticas de cada carneiro.
	� Ou seja, para cada carneiro que for saindo da fila inicial, percorrerse- � a lista de pista por completo para calcular o tempo de cada carneiro
	� H� ainda a necessidade de criarmos um p�dio para os fazendeiros.
	? O p�dio corresponde a uma PILHA de fazendeiros.
	? Depois que todos os carneiros tiverem corrido, organize-os no p�dio de modo que o topo da pilha tenha o fazendeiro cujo tempo total (soma do tempo dos seus cinco carneiros) tenha sido o menor. Abaixo do topo da pilha, haver� o fazendeiro cujo tempo total de seus carneiros seja o segundo colocado. Assim como a base da pilha deve ser o fazendeiro mais lento.
Seu programa deve ser capaz de permitir o cadastro e exibi��o das corridas.
Observe o seguinte menu de utilidades:
	 Cadastrar pista de corrida
	 Informar cada um dos elementos que comp�e a pista
	 Cadastrar Criadores (inclui cadastro dos carneiros)
	 Executar corridas
	 Todos os criadores dever�o colocar seus carneiros para correr, cada criador espera o outro terminar, para depois efetuar as corridas.
	? O usu�rio apenas determina que isso ocorra, seu programa o far� automaticamente.
	? Os carneiros correm respeitando a ordem de corrida.
	? Calcule o tempo de cada carneiro
	? Mostre o tempo de cada carneiro
	? Use a criatividade para mostrar as corridas
	 Mostrar resultados (requer que a corrida tenha sido executada)
	? Mostre o ranking de criadores seguido do tempo total de cada fazendeiro