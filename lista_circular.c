#include <stdlib.h>
#include <stdio.h>
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

char insere_lista_inicio(Lista *li, struct ED_LE ed){
	if(li == NULL)
		return 0;
	Elem *no = (Elem*)malloc(sizeof(Elem));
	if(no == NULL)
		return 0;
	no->dados = ed;

	// caso a lista esteja vazia: insere no inicio
	if((*li) == NULL){
		*li = no;
		no->prox = no;
	}
	else {
		Elem *aux = *li;
		while(aux->prox != (*li))
			aux = aux->prox;

		aux->prox = no;
		no->prox = *li;
		*li = no;
	}

	return 1;
}

char insere_lista_final(Lista *li, struct ED_LE ed){
	if(li == NULL)
		return 0;
	Elem *no = (Elem*)malloc(sizeof(Elem));
	if(no == NULL)
		return 0;
	no->dados = ed;
	if((*li) == NULL){
		*li = no;
		no->prox = no;
	}
	else{
		Elem *aux = *li;
		while (aux->prox != (*li))
			aux= aux->prox;

		aux->prox = no;
		no->prox = *li;
	}
	return 1;
}

char insere_lista_ordenada(Lista *li, struct ED_LE ed){
	if(li == NULL)
		return 0;
	Elem *no = (Elem*)malloc(sizeof(Elem));
	if(no == NULL)
		return 0;

	no->dados = ed;
	if((*li) == NULL){
		*li = no;
		no->prox = no;
		return 1;
	}
	else{
		if((*li)->dados.dado > ed.dado){
			Elem *atual = *li;
			while(atual->prox != (*li))
				atual = atual->prox;
			no->prox = *li;
			atual->prox = no;
			*li = no;
			return 1;
		}
		Elem *ant = (*li), *atual = (*li)->prox;
		while(atual != (*li) && atual->dados.dado < ed.dado){
			ant = atual;
			atual = atual->prox;
		}
		ant->prox = no;
		no->prox = atual;
		return 1;
	}
}

char remove_lista_inicio(Lista *li){
	if(li == NULL || (*li) == NULL)
		return 0;

	if((*li) == (*li)->prox){
		free(li);
		*li = NULL;
		return 1;
	}
	Elem *atual = *li;
	while(atual->prox != (*li))
		atual = atual->prox;
	Elem *no = *li;
	atual->prox = no->prox;
	*li = no->prox;
	free(no);
	return 1;
}

char remove_lista_final(Lista *li){
	if(li == NULL || (*li) == NULL)
		return 0;
	if((*li) == (*li)->prox){
		free(*li);
		*li=NULL;
		return 1;
	}
	Elem *ant,*no = *li;
	while(no->prox != NULL){
		ant = no;
		no=no->prox;
	}
	ant->prox = no->prox;
	free(no);
	return 1;
}

char remove_lista(Lista *li, int dado){
	if(li == NULL ||(*li) == NULL)
		return 0;
	Elem *no=*li;
	if(no->dados.dado == dado){
		if(no == no->prox){
			free(no);
			*li = NULL;
			return 1;
		}
		else{
			Elem *ult = *li;
			while(ult->prox != (*li))
				ult = ult->prox;
			*li = (*li)->prox;
			free(no);
		}
	}
	Elem *ant = no;
	no = no->prox;
	while(no != (*li) && no->dados.dado != dado){
		ant = no;
		no = no->prox;
	}
	if(no == *li)
		return 0;
	ant->prox = no->prox;
	free(no);
	return 1;
}

void imprime_lista(Lista *li){
	if(li == NULL || (*li)== NULL)
}
