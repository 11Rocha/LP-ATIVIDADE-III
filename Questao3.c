#include <stdio.h>
#include <string.h>

#define MAX_CONTATOS 100

struct Contato {
    
 
char nome[50];
    char numero[15];
};

void adicionarContato(struct Contato agenda[], int *totalContatos) {
    if (*totalContatos < MAX_CONTATOS) {
        printf("Digite o nome do contato: ");
        
      
scanf("%s", agenda[*totalContatos].nome);
        printf("Digite o número do contato: ");
        scanf("%s", agenda[*totalContatos].numero);
        (*totalContatos)++;
        
        (*totalContatos)++;
printf("Contato adicionado com sucesso!\n");
    } else {
        printf("A agenda está cheia. Não é possível adicionar mais contatos.\n");
    }
}

void mostrarContatos(struct Contato agenda[], int totalContatos) {
    if (totalContatos == 0) {
        
        
printf("Nenhum contato cadastrado.\n");
    } else {
        printf("Contatos cadastrados:\n");
        for (int i = 0; i < totalContatos; i++) {
            printf("Nome: %s, Número: %s\n", agenda[i].nome, agenda[i].numero);
        }
    }
}

int main() {
    
  
struct Contato agenda[MAX_CONTATOS];
    int totalContatos = 0;
    int escolha;

    while (1) {
        printf("\n1 - Adicionar Contato\n");
        printf("2 - Mostrar Contatos\n");
        printf("3 - Encerrar\n");

        printf("Escolha uma opção (1/2/3): ");
        
        
scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                adicionarContato(agenda, &totalContatos);
                
                adicionarContato(agenda, &totalContatos);
                

                
break;
            case 2:
                mostrarContatos(agenda, totalContatos);
                
                mostrarContatos(agenda, totalContatos);

          
break;
            case 3:
                printf("Encerrando o programa. Até mais!\n");
                
      
return 0;
            
        
default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}