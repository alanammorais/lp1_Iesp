#include <stdio.h>
#include <locale.h>

void main()  {  
      char opcao;
	  
	  setlocale(LC_ALL, "Portuguese");
  
      do  {  
          printf("\t M E N U    P R I N C I P A L\n");  
          printf("\n\n\t\t c- Clientes"); 
          printf("\n\n\t\t f- Fornecedores"); 
          printf("\n\n\t\t e- Encomendas"); 
          printf("\n\n\t\t s- Sair");
          printf("\n\n\n\t\tDigite a Op��o:");
          scanf(" %c", &opcao); 
          
	  fflush(stdin); /* Limpar o Buffer do teclado */ 
          switch (opcao) { 
               case 'c':  
               case 'C': 
					printf("Op��o CLIENTES \n"); 
					
					break;  
			   case 'f':  
			   case 'F': 
					printf("Op��o FORNECEDORES \n"); 
					break; 
			   case 'e': 
			   case 'E': 
					puts("Op��o ENCOMENDAS \n"); 
					break;
			   case 's': 
			   case 'S':
			   		puts("Programa encerrado \n");
					break; 
			   default : 
					puts("Op��o INV�LIDA!!! \n"); 
		 } 
		getchar(); /* Pausa no menu da tela */ 
		
		} while (opcao!= 's' && opcao != 'S');
}
