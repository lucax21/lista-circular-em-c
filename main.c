#include <stdio.h>
#include "lista_circular.h"

int main(){

	Lista *li;
	struct ED_LE ed;
	int num;
	char op;

	do{
		printf("0 - Sair\n");
		printf("1 - Criar lista\n");
		printf("2 - Liberar lista\n");
		printf("3 - Inserir no inicio\n");
		printf("4 - Inserir no final\n");
		printf("5 - Inserir ordenado\n");
		printf("6 - Remove no inicio\n");
		printf("7 - Remove no final\n");
		printf("8 - Remove no ordenado(meio)\n");
		printf("9 - Consulta pelo conteudo\n");
		printf("10 - Consulta pela posicao\n");
		printf("11 - Imprimir lista\n");

		scanf("%d", &op);

		switch(op){
			case 1:
	//			printf("Informe o tamanho da lista\n");
	//			scanf("%d", &num);
				li = cria_lista();
				if(li != NULL)
					printf("Lista crida\n");
				else
					printf("Ops - Erro ao criar a lista\n");
				break;

		/*	case 2:
				libera_lista(li);
				printf("Lista liberada\n");
				break;

			case 3:
				printf("Inserir no inicio.\nDigite o valor: ");
				scanf("%d", &ed.dado);
				printf("valor digitado %d\n", ed.dado);
				if(insere_lista_inicio(li,ed))
					printf("Sucesso\n");
				else
					printf("Ops\n");
				break;
			case 4:
				printf("Inserir no final.\nDigite o valor: ");
				scanf("%d", &ed.dado);
				printf("valor digitado %d\n", ed.dado);
				if(insere_lista_final(li,ed))
					printf("Sucesso\n");
				else
					printf("Ops\n");
				break;

			case 5:
				printf("Inserir ordenado.\nDigite o valor: ");
				scanf("%d", &ed.dado);
				printf("valor digitado %d\n", ed.dado);
				if(insere_lista_ordenado(li,ed))
					printf("Sucesso\n");
				else
					printf("Ops\n");
				break;
			case 6:
				if(remove_lista_inicio(li))
					printf("Sucesso ao remover no inicio da lista\n");
				else
					printf("Ops\n");
				break;

			case 7:
				if(remove_lista_final(li))
					printf("Sucesso ao remover no final de lista\n");
				else
					printf("Ops\n");
				break;
			
			case 8:
				printf("Remover um valor escolhido.\nDigite o valor: ");
				scanf("%d", &num);
				printf("valor digitado %d\n", num);
				if(remove_lista(li, num))
					printf("Sucesso ao remover valor escolhido\n");
				else
					printf("Ops\n");
				break;
			case 9:
				printf("Digite o valor para consulta: ");
				scanf("%d", &num);
				if(consulta_lista_conteudo(li, num, &ed))
					printf("Achou o valor %d na lista\n", ed.dado);
				else
					printf("Ops\n");
				break;
			

			case 10:
				printf("Digite a posicao para consulta: ");
				scanf("%d", &num);
				if(consulta_lista_pos(li, num, &ed))
					printf("A posicao %d contem o dado %d\n", num, ed.dado);
				else
					printf("Ops\n");
				break;
			case 11:
				imprime_lista(li);
				break;
	*/		default:
				//printf("opcao invalida\n");
				break;

		}
	}while(op);

	return 0;
}
