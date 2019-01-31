#ifndef PISTA_H
#define PISTA_H
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>
#include<stdbool.h>
#include<time.h>
struct Pista;
struct Tipo;
struct Lista_elementos;
struct Pista* criar_pista();
void insere_pista(struct Pista *);
struct Tipo* cria_tipo();
struct Lista_elementos *cria_lista_pista();
void imprime_parte_com_pulo();
void imprime_parte_limpa();
void imprime_parte_com_lama();
void print_pista(struct Pista *);
#endif
