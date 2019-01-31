#ifndef PODIO_H
#define PODIO_H
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<locale.h>
#include<stdbool.h>
#include<time.h>
struct Faz_do_podio;
struct Podio;
struct Podio* cria_podio();
struct Podio* ordena_podio(struct Fila *);
void imprime_podio(struct Podio*);
struct Faz_do_podio *cria_faz_podio();
#endif
