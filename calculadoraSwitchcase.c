#include <stdio.h>
#include <stdlib.h>

// Calculadora 0.1

int main() {
	
	
		float numero1, numero2;
		int opcao;
		
		
		printf("\n\t\t**Bem-vindo a Calculadora 0.1**\n\n");
		
		
		printf("\nEscolha uma das opçoes abaixo: \n\n");
		printf("\t1 - Adicao\n");
		printf("\t2 - Subtracao\n");
		printf("\t3 - Multiplicacao\n");
		printf("\t4 - Divisao\n\n");
		printf("\t5 - Sair\n");
		
		scanf("\t\t%i", &opcao);
		
		printf("Agora digite o primeiro numero: ");
		scanf("%f", &numero1);
		printf("O segundo numero: ");
		scanf("%f", &numero2);
		
					
		switch(opcao){
				
				
			float adicao, subtracao, multiplicacao, divisao;
			
			case 1:
			
			adicao = numero1+numero2;
		
			printf("\tA soma dos numeros eh: %.2f\n", adicao);
			
			break;
			
				case 2:
			
				subtracao = numero1-numero2;
			
				printf("\tA subtracao dos numeros eh: %.2f\n", subtracao);
			
				break;
			
					case 3:
							
					multiplicacao = numero1*numero2;
				
					printf("\tA multiplicacao dos numeros eh: %.2f\n", multiplicacao);
				
					break;
			
						case 4:
								
						divisao = numero1/numero2;
						
						if(numero2 == 0){
							
							printf("Nao existe!");
						}
						
						return 0;
					
						printf("\tA divisao dos numeros eh: %.2f\n", divisao);
						
						
							
							default:
			
							printf("Opcao invalida! Tente novamente...");	
				
			return 0;	
		}
		
	system("PAUSE");
	return 0;
}
