-ENUNCIADO ATIVIDADE-
FACULDADES INTEGRADAS DE CARATINGA
CURSO DE CIÊNCIA DA COMPUTAÇÃO
DISCIPLINA: Laboratório de Estrutura de Dados
PROFESSOR: Maicon Ribeiro
TURMAS: 2º Período SEMESTRE / ANO: 2º / 2018
DATA DE ENTREGA: 09/11/2018
Desenvolvido por Tallyson Lucas
Enunciado:

Fazer um sistema que avalia o tempo médio de uma determinada corrida para identificar possíveis
infratores.
Acerca do tempo de corrida:
	Um carneiro de 40kg costuma correr cerca de 15km/h. Cada quilo a menos ou a mais modifica a velocidade em 1km/h, para mais ou para menos.
Naturalmente, carneiros mais leves são mais rápidos
	Os obstáculos do tipo pulo, atrasam a corrida em 5 segundos para cada 500 gramas do animal.
	Os obstáculos do tipo lamaçal, atrasam a corrida em 10 segundos para cada dois quilos do animal.
	Existem áreas limpas durante a corrida, são basicamente regiões da pista em que não há nenhum obstáculo para atrapalhar os carneiros.
Acerca das regras das corridas:
	As corridas são competições entre os criadores (sempre três fazendeiros)
	Cada criador apresenta 5 carneiros
	Os carneiros não correm ao mesmo tempo, quando um carneiro passa pela linha de chegada, o outro carneiro começa a correr.
	Ganha o criador que tiver o menor tempo total das corridas dos 5 carneiros.
	Os carneiros precisam ter entre 30 e 50 kg.
Acerca da mecânica do evento:
	• Cada um dos três fazendeiros forma uma FILA com seus carneiros antes deiniciar a corrida.
	? A intenção é que os carneiros sejam enfileirados no começo da corrida, o primeiro carneiro da fila é o primeiro a correr, o segundo carneiro da fila correrá após o primeiro, e assim, até que os cinco carneiros de cada fazendeiro tenham corrido.
	? Assim sendo, são três filas, uma para cada fazendeiro – cada uma delas com cinco carneiros
	• A pista de corrida em si, corresponde a uma LISTA de obstáculos e regiões limpas.
	? Devem haver dez itens na lista que corresponde a pista. Esses itens podem ser regiões limpas ou obstáculos.
	? Apenas uma lista de pista deve haver. Afinal, uma única pista de corrida é necessária para que todos os carneiros corram.
	? Efetivamente, não há necessidade de que os carneiros passem pela pista para calcular o tempo de corrida. Basta percorrer a pista por completo e considerar as características de cada carneiro.
	• Ou seja, para cada carneiro que for saindo da fila inicial, percorrerse- á a lista de pista por completo para calcular o tempo de cada carneiro
	• Há ainda a necessidade de criarmos um pódio para os fazendeiros.
	? O pódio corresponde a uma PILHA de fazendeiros.
	? Depois que todos os carneiros tiverem corrido, organize-os no pódio de modo que o topo da pilha tenha o fazendeiro cujo tempo total (soma do tempo dos seus cinco carneiros) tenha sido o menor. Abaixo do topo da pilha, haverá o fazendeiro cujo tempo total de seus carneiros seja o segundo colocado. Assim como a base da pilha deve ser o fazendeiro mais lento.
Seu programa deve ser capaz de permitir o cadastro e exibição das corridas.
Observe o seguinte menu de utilidades:
	 Cadastrar pista de corrida
	 Informar cada um dos elementos que compõe a pista
	 Cadastrar Criadores (inclui cadastro dos carneiros)
	 Executar corridas
	 Todos os criadores deverão colocar seus carneiros para correr, cada criador espera o outro terminar, para depois efetuar as corridas.
	? O usuário apenas determina que isso ocorra, seu programa o fará automaticamente.
	? Os carneiros correm respeitando a ordem de corrida.
	? Calcule o tempo de cada carneiro
	? Mostre o tempo de cada carneiro
	? Use a criatividade para mostrar as corridas
	 Mostrar resultados (requer que a corrida tenha sido executada)
	? Mostre o ranking de criadores seguido do tempo total de cada fazendeiro