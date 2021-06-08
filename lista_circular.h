struct ED_LE {
	int dado;
};

typedef struct elemento *Lista;

Lista *cria_lista();

void libera_lista(Lista *li);

int tamanho_lista(Lista *li);

char lista_vazia(Lista *li);
