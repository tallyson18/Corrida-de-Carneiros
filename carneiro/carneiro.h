#ifndef CARNEIRO_H
#define CARNEIRO_H
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>
#include<stdbool.h>
#include<time.h>
#include "pista.c"
struct Carneiro;
struct Fazendeiro;
struct Fila;
struct Fila_car;
struct Fazendeiro *cria_fazendeiro();
struct Carneiro *cria_carneiro();
struct Fila *cria_fila();
struct Fazendeiro* cadastra_fazendeiros(float );
void edita_fazendeiro(struct Fazendeiro *,float );
void cadastra_carneiros(struct Fazendeiro *,float);
struct Fila_car *criar_fila_car();
void velocidade(struct Carneiro *,float );
struct Fila_car *criar_fila_car();
void enfileirar_carneiros(struct Fazendeiro *,struct Fila_car*);
void insere_fila_do_fazendeiro(struct Fila_car *,struct Carneiro *);
void saber_fila_de_fazendeiros(struct Fila *);
void saber_fila_de_carneiros(struct Fila_car *);
#endif

