#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main ()
{
	srand(time(0));	

	int dificuldade;
	int numero = rand() % 10;
	int resposta;
	int facil = 10;
	int medio = 5;
	int dificil = 3;
	int t = 1;
	int reiniciar;
	int pontos;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Bem vindo ao jogo da Adivinha��o  \n\n");
	system("\n\nPAUSE");
	
	do {
	dificuldade = 0;
	resposta = 0;
	printf("\n\nEscolha uma dificuldade:\n\n1 - Beb�: 20 Tentativas\n2 - Adolescente: 16 Tentativas\n3 - Adulto: 10 Tentativas\n4 - Master: 5 Tentativas\n5 - Expert: 3 Tentativas\n\nSua escolha: ");
	scanf("%i", &dificuldade);
	fflush(stdin);
		
		switch (dificuldade){
			
			case 1:
			
				printf("\n\nDificuldade Beb�.");
			
				while (t <= 20 && resposta != numero){
					printf("\n\nDigite um n� entre 0 e 100: ");
					scanf("%d", &resposta);
					fflush(stdin);
					
					printf("\nEsse � o seu n�: %d", resposta);
					printf("\nTentativas: %i", t);
					t++;
					
					if(resposta == numero){
						
						printf("\n\nParab�ns, voc� acertou!");
						t--;
						pontos = 1000 - (t*100);
						t=1;
						printf("\n\nSua pontua��o �: %i", pontos);
							
						do {
							printf("\n\nDeseja recome�ar? \n\n1 - Sim.\n2 - N�o.\n\nSua escolha: ");
							scanf("%i", &reiniciar);
							
								if (reiniciar > 2) {
									printf("------------------------------------------Escolha um valor v�lido.------------------------------------------");
								}else if (reiniciar == 2) {
									continue;
								}else if (reiniciar == 1) {
									system("cls");
									
								}
								
						} while (reiniciar > 2);
						
					}else if (resposta < 0) { 
						printf("\n\nEscolha um valor positivo.\n");
						t--;
					}else if (resposta > numero) {
						printf("\n\nBah, tu errou. O n� � menor que %i.\n", resposta);
					}else {
						printf("\n\nBah, tu errou. O n� � maior que %i.\n", resposta);
					}
					printf("\n******************************************************\n");
				}
				
				do {
			printf("\n\nInfelizmente voc� n�o tem mais tentativas. Deseja recome�ar? \n\n1 - Sim.\n2 - N�o.\n\nSua escolha: ");
			scanf("%i", &reiniciar);
																				
			if (reiniciar > 2) {
				printf("------------------------------------------Escolha um valor v�lido.------------------------------------------");
			}else if (reiniciar == 2) {
				continue;
			}else if (reiniciar == 1) {
				system("cls");
			}
																					
		} while (reiniciar > 2);
				
				break;
			
			case 2:
				printf("\n\nDificuldade Adolescente.");
			
				while (t <= 16 && resposta != numero){
					printf("\n\nDigite um n� entre 0 e 100: ");
					scanf("%d", &resposta);
					fflush(stdin);
					
					printf("\nEsse � o seu n�: %d", resposta);
					printf("\nTentativas: %i", t);
					t++;
					
					if(resposta == numero){
						printf("\n\nParab�ns, voc� acertou!");
						t--;
						pontos = 1000 - (t*100);
						printf("\n\nSua pontua��o �: %i", pontos);
							
						do {
							printf("\n\nDeseja recome�ar? \n\n1 - Sim.\n2 - N�o.\n\nSua escolha: ");
							scanf("%i", &reiniciar);
							
								if (reiniciar > 2) {
									printf("------------------------------------------Escolha um valor v�lido.------------------------------------------");
								}else if (reiniciar == 2) {
									continue;
								}else if (reiniciar == 1) {
									system("cls");
								}
								
						} while (reiniciar > 2);
					}else if (resposta < 0) { 
						printf("\n\nEscolha um valor positivo.\n");
						t--;
					}else if (resposta > numero) {
						printf("\n\nBah, tu errou. O n� � menor que %i.\n", resposta);
					}else {
						printf("\n\nBah, tu errou. O n� � maior que %i.\n", resposta);
					}
					printf("\n******************************************************\n");
				}
				
				do {
			printf("\n\nInfelizmente voc� n�o tem mais tentativas. Deseja recome�ar? \n\n1 - Sim.\n2 - N�o.\n\nSua escolha: ");
			scanf("%i", &reiniciar);
																				
			if (reiniciar > 2) {
				printf("------------------------------------------Escolha um valor v�lido.------------------------------------------");
			}else if (reiniciar == 2) {
				continue;
			}else if (reiniciar == 1) {
				system("cls");
			}
																					
		} while (reiniciar > 2);
					
				break;
				
			case 3:
				printf("\n\nDificuldade Adulto.");
			
				while (t <= 10 && resposta != numero){
					printf("\n\nDigite um n� entre 0 e 100: ");
					scanf("%d", &resposta);
					fflush(stdin);
					
					printf("\nEsse � o seu n�: %d", resposta);
					printf("\nTentativas: %i", t);
					t++;
					
					if(resposta == numero){
						printf("\n\nParab�ns, voc� acertou!");
						t--;
						pontos = 1000 - (t*100);
						printf("\n\nSua pontua��o �: %i", pontos);
							
						do {
							printf("\n\nDeseja recome�ar? \n\n1 - Sim.\n2 - N�o.\n\nSua escolha: ");
							scanf("%i", &reiniciar);
							
								if (reiniciar > 2) {
									printf("------------------------------------------Escolha um valor v�lido.------------------------------------------");
								}else if (reiniciar == 2) {
									continue;
								}else if (reiniciar == 1) {
									system("cls");
								}
								
						} while (reiniciar > 2);
					}else if (resposta < 0) { 
						printf("\n\nEscolha um valor positivo.\n");
						t--;
					}else if (resposta > numero) {
						printf("\n\nBah, tu errou. O n� � menor que %i.\n", resposta);
					}else {
						printf("\n\nBah, tu errou. O n� � maior que %i.\n", resposta);
					}
					printf("\n******************************************************\n");
				}
				
				do {
			printf("\n\nInfelizmente voc� n�o tem mais tentativas. Deseja recome�ar? \n\n1 - Sim.\n2 - N�o.\n\nSua escolha: ");
			scanf("%i", &reiniciar);
																				
			if (reiniciar > 2) {
				printf("------------------------------------------Escolha um valor v�lido.------------------------------------------");
			}else if (reiniciar == 2) {
				continue;
			}else if (reiniciar == 1) {
				system("cls");
			}
																					
		} while (reiniciar > 2);
				
				break;
					
			case 4:
				printf("\n\nDificuldade Master.");
			
				while (t <= 5 && resposta != numero){
					printf("\n\nDigite um n� entre 0 e 100: ");
					scanf("%d", &resposta);
					fflush(stdin);
					
					printf("\nEsse � o seu n�: %d", resposta);
					printf("\nTentativas: %i", t);
					t++;
					
					if(resposta == numero){
						printf("\n\nParab�ns, voc� acertou!");
						t--;
						pontos = 1000 - (t*100);
						printf("\n\nSua pontua��o �: %i", pontos);
							
						do {
							printf("\n\nDeseja recome�ar? \n\n1 - Sim.\n2 - N�o.\n\nSua escolha: ");
							scanf("%i", &reiniciar);
							
								if (reiniciar > 2) {
									printf("------------------------------------------Escolha um valor v�lido.------------------------------------------");
								}else if (reiniciar == 2) {
									continue;
								}else if (reiniciar == 1) {
									system("cls");
								}
								
						} while (reiniciar > 2);
					}else if (resposta < 0) { 
						printf("\n\nEscolha um valor positivo.\n");
						t--;
					}else if (resposta > numero) {
						printf("\n\nBah, tu errou. O n� � menor que %i.\n", resposta);
					}else {
						printf("\n\nBah, tu errou. O n� � maior que %i.\n", resposta);
					}
					printf("\n******************************************************\n");
				}
				
				do {
			printf("\n\nInfelizmente voc� n�o tem mais tentativas. Deseja recome�ar? \n\n1 - Sim.\n2 - N�o.\n\nSua escolha: ");
			scanf("%i", &reiniciar);
																				
			if (reiniciar > 2) {
				printf("------------------------------------------Escolha um valor v�lido.------------------------------------------");
			}else if (reiniciar == 2) {
				continue;
			}else if (reiniciar == 1) {
				system("cls");
			}
																					
		} while (reiniciar > 2);
				
				break;
					
			case 5:
				printf("\n\nDificuldade Expert.");
			
				while (t <= 3 && resposta != numero){
					printf("\n\nDigite um n� entre 0 e 100: ");
					scanf("%d", &resposta);
					fflush(stdin);
					
					printf("\nEsse � o seu n�: %d", resposta);
					printf("\nTentativas: %i", t);
					t++;
					
					if(resposta == numero){
						printf("\n\nParab�ns, voc� acertou!");
						t--;
						pontos = 1000 - (t*100);
						printf("\n\nSua pontua��o �: %i", pontos);
							
						do {
							printf("\n\nDeseja recome�ar? \n\n1 - Sim.\n2 - N�o.\n\nSua escolha: ");
							scanf("%i", &reiniciar);
							
								if (reiniciar > 2) {
									printf("------------------------------------------Escolha um valor v�lido.------------------------------------------");
								}else if (reiniciar == 2) {
									continue;
								}else if (reiniciar == 1) {
									system("cls");
								
								}
								
						} while (reiniciar > 2);
					}else if (resposta < 0) { 
						printf("\n\nEscolha um valor positivo.\n");
						t--;
					}else if (resposta > numero) {
						printf("\n\nBah, tu errou. O n� � menor que %i.\n", resposta);
					}else {
						printf("\n\nBah, tu errou. O n� � maior que %i.\n", resposta);
					}					
					
					printf("\n******************************************************\n");
				}
				
				do {
			printf("\n\nInfelizmente voc� n�o tem mais tentativas. Deseja recome�ar? \n\n1 - Sim.\n2 - N�o.\n\nSua escolha: ");
			scanf("%i", &reiniciar);
																				
			if (reiniciar > 2) {
				printf("------------------------------------------Escolha um valor v�lido.------------------------------------------");
			}else if (reiniciar == 2) {
				continue;
			}else if (reiniciar == 1) {
				system("cls");
			}
																					
		} while (reiniciar > 2);
				
			break;
					
			default: printf("\n\nEscolha um valor v�lido.");
		}
		
	if (t==20 || t==16 || t==10 || t==5 || t==3) {
		

	}			 
						
		} while ((dificuldade > 5) || (reiniciar == 1));
		
			
	}
