#include <stdlib.h>
#include "lista_circular.h"

struct elemento {
	struct ED_LE dados;
	struct elemento *prox;
};

typedef struct elemento Elem;

Lista *cria_lista(){
	Lista *li= (Lista*)malloc(sizeof(Lista));
	if(li != NULL)
		*li = NULL;

	return li;
}

void libera_lista(Lista *li){
	if(li != NULL && (*li) != NULL){
		Elem *aux, *no = *li;
		while((*li) != no->prox){
			aux = no;
			no = no->prox;
			free(aux);
		}
		free(no);
		free(li);
	}
}

int tamanho_lista(Lista *li){
	if(li == NULL || (*li) == NULL)
		return 0;

	int cont =0;
	Elem *no = *li;
	do{
		cont++;
		no = no->prox;
	} while(no != NULL);

	return cont;
}

char lista_vazia(Lista *li){
	if(li == NULL || (*li) == NULL)
		return 1;
	else
		return 0;
}
