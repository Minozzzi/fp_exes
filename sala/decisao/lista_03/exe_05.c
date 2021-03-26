/*
5) Uma árvore de decisão obtém a decisão pela execução de uma sequência de testes. Cada nó interno da árvore
corresponde a um teste do valor de uma das propriedades e os ramos deste nó são identificados com os possíveis
valores do teste. Cada nó folha da árvore especifica o valor de retorno se a folha for atingida.
5.1) A figura a seguir apresenta um exemplo fictício de árvore de decisão, tomando atributos de clientes de uma
instituição financeira. Elabore um programa que implemente essa árvore de decisão. As entradas podem ser do tipo
char, portanto, considere a primeira letra de cada palavra como entrada. Caso o usuário informe um caractere diferente
dos aceitáveis, apresente a mensagem "Caractere inválido".
5.2) Considera-se o problema de esperar para jantar em um restaurante. O objetivo é o programa aprender a definição
para DeveEsperar? Existem os seguintes atributos para descrever as situações:
Fregueses: Quantas pessoas estão no restaurante (nenhuma, algumas, cheio)?
Tempo de espera (em minutos): 0-10, 10-30, 30-60, >60.
Alternativa: Há um restaurante alternativo na redondeza?
Reserva: Foi feita uma reserva?
Bar: Existe um bar confortável onde possa se esperar?
Sex/Sab: É sexta ou sábado?
Faminto: Está com fome?
Chovendo: Está chovendo lá fora?
As entradas são do tipo char, exceto o tempo de espera que pode ser do tipo int. Portanto, estabeleça uma letra para
cada entrada esperada, por exemplo 'S' para sim e 'N' para não.
*/