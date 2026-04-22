#include <stdio.h>
#include <stdlib.h>
// 1b


void E(char *entrada){
	switch(*entrada){// testa o in´ıcio da palavra
		case '+':
			entrada++;
			E(*entrada);
			break;
		case '*':
			entrada++;
			E(*entrada);
			break;
		case 'a':
			entrada++; // consome a (deriva a)
			(*entrada); //chama o terminal E()
			break;
		case 'b':
			entrada++; // consome b (deriva b)
			(*entrada); // chama o terminal E()
			break;
		default:
			printf("\nerro.");
			exit(1); // finaliza o programa
	}
}

int main(){
    char *entrada = "+*aba";
	printf("analisando a entrada %s\n",entrada);
	E(entrada); // s´ımbolo inicial a gram´atica
	// se chegou ao final da palavra, sem erro,
	// a palavra pertence `a linguagem gerada pela gram´atica.
	if( *entrada == '\x0')// fim de entrada
		printf("\npalavra pertence a.\n");
	else
		printf("\nerro.");
	printf("\nfim de programa.\n");
	return 0;
}

