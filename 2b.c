#include <stdio.h>
#include <stdlib.h>

void A(char *entrada){
	switch(*entrada){// testa o in´ıcio da palavra
		case 'b':
			entrada++; // consome a (deriva a)
			B(*entrada);
            if(entrada != 'b'){
                printf("\nerro.");
			    exit(1);
            }
			break;
		default:
			printf("\nerro.");
			exit(1); // finaliza o programa
	}
}

void B(char *entrada){
    switch (*entrada){
    case 'c':
        C(*entrada);
        break;
    case 'e':
        D(*entrada);
        break;
    default:
        printf("\nerro.");
	    exit(1);
    }
}

void C(char *entrada){
    switch (*entrada){
    case 'a':
        A(*entrada);
        break;
    default:
        printf("\nerro.");
	    exit(1);
    }
}


void D(char *entrada){
    switch (*entrada){
    case 'd':
        A(*entrada);
        break;
    default:
        printf("\nerro.");
	    exit(1);
    }
}


int main(){
    char *entrada = "bcabcbb";
	printf("analisando a entrada %s\n",entrada);
	A(*entrada); // símbolo inicial a gramática
	// se chegou ao final da palavra, sem erro,
	// a palavra pertence `a linguagem gerada pela gram´atica.
	if( *entrada == '\x0')// fim de entrada
		printf("\npalavra pertence a.\n");
	else
		printf("\nerro.");
	printf("\nfim de programa.\n");
	return 0;
}

