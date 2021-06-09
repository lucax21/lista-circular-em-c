struct ED_LE {
	int dado;
};

typedef struct elemento *Lista;

Lista *cria_lista();

void libera_lista(Lista *li);

int tamanho_lista(Lista *li);

char lista_vazia(Lista *li);

char insere_lista_inicio(Lista *li, struct ED_LE ed);

char insere_lista_final(Lista *li, struct ED_LE ed);

char insere_lista_ordenada(Lista *li, struct ED_LE ed);

char remove_lista_inicio(Lista *li);

char remove_lista_final(Lista *li);

char remove_lista(Lista *li, int dado);

void imprime_lista(Lista *li);

char consulta_lista_pos(Lista *li, int pos, struct ED_LE *ed);

char consulta_lista_conteudo(Lista *li, int dado, struct ED_LE *ed);
