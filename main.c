#include <stdio.h>

#define TAMANHO_MAXIMO 10

typedef struct{
        int elementos[TAMANHO_MAXIMO];
        int topo;
}PILHA;

void inicializarPilha(PILHA* pilha);
void limpaPilha(PILHA* pilha);
void imprimirPilha(PILHA* pilha);
int push(PILHA* pilha, int valor);
void pop(PILHA* pilha);
int length(PILHA* pilha);

int main() {
         PILHA minhaPilha;

         inicializarPilha(&minhaPilha);

         push(&minhaPilha, 2);
         push(&minhaPilha, 4);
         push(&minhaPilha, 6);

         //imprimirPilha(&minhaPilha);

         pop(&minhaPilha);

         //imprimirPilha(&minhaPilha);

         limpaPilha(&minhaPilha);

         imprimirPilha(&minhaPilha);

}

void pop(PILHA* pilha){
        if (length(pilha)>0){
           pilha ->topo -= 1;
        }

}

int push(PILHA* pilha, int valor){
         if(length(pilha) < TAMANHO_MAXIMO){
                  pilha-> topo +=1;
                  pilha->elementos[pilha->topo] = valor;

                  return 1;

         }

  return 0;
}
void inicializarPilha(PILHA* pilha){
        pilha->topo = -1;
}
void limpaPilha(PILHA* pilha){
        pilha->topo = -1;
}
int length(PILHA* pilha){
        return pilha-> topo + 1;
}

void imprimirPilha(PILHA* pilha){
       printf("PILHA :)\n");

       for (int i = pilha->topo; i>=0; i--)
                printf("|_%d_|\n", pilha->elementos[i]);

        printf("\n\n");        
}