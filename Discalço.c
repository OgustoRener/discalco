#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
#include<string.h>

int main() {
	setlocale(LC_ALL,"Portuguese");
	system("color ed");
    int disco, opcao, submenu, escolha; //variaveis de switch
	int lp, pl[17]; //variavel de quantidade
    int x, y, vetor=0, j=20, k=25;
    int ano[100];
    char nomedisco[100][100], nomeartista[100][100];
    float mostra, soma[17], somafinal=0, preco[100]; //variaveis relacionadas ao preço dos produtos
    COORD coord;
    for(int i = 0; i<8;i++){ //inicialização dos vetores de nome com valor "Vazio"
    	strcpy(nomedisco[i], "Vazio");
    	strcpy(nomeartista[i], "Vazio");
	}
	for(int i=0;i<16;i++){ //inicialização dos vetores de número com valor "0"
    	soma[i]=0;
    	preco[i]=0;
    	ano[i]=0;
    	pl[i]=0;
	}
    for(int i = 1; i <=118; i++){
		printf("=");
	}
	printf("=\n");
	printf("|\t\t\t\t\t\t\t\t\t                OOOOOOOOOOO \t\t      |\n");
	printf("|\t\t\t\t\t\t\t\t\t            OOOO-----------OOOOO\t      |\n");
	printf("|\t\t\t\t\t\t\t\t\t         OOOOO/OOOOOOOOOOOOOO\\OOOOO\t      |\n");
	printf("|\t\t\t\t\t\t\t\t\t       OOOOO/OOOOOOOOOOOOOOOOOOO\\OOOO\t      |\n");
	printf("|\t\t\t\t\t\t\t\t\t     OOOO/OOOOOOOOOOOOOOOOOOOOOOOO\\OOOO\t      |\n");
	printf("|");
	printf("\t\t\t\t\t\t\t Discalço\t    OOO/OOOOOOOO------------OOOOOOOO\\OOO      |\n");
	printf("|\t\t\t\t\t\t\t\t\t   OO/OOOOOOOO/OOOOOOOOOOOOOO\\OOOOOOO\\OO      |\n");
	printf("|\t\t\t\t\t\t    Sua loja de discos     OO|OOOOOOO/OOOOOOOOOOOOOOOO\\OOOOOOO|OO     |\n");
	printf("|\t\t\t\t\t\t\t de vinil \t  OOO|OOOOOO|OOOOOOO     OOOOOO|OOOOOO|OOO    |\n");
	printf("|              OOOOOOOOOOOOO\t\t\t\t\t\t  OOO|OOOOOO|OOOOOO   O   OOOOO|OOOOOO|OOO    |\n");
	printf("|           OOO-------------OOOO\t\t\t\t\t  OOO|OOOOOO|OOOOOOO     OOOOOO|OOOOOO|OOO    |\n");
	printf("|        OOOO/OOOOOOOOOOOOOOO\\OOOOO\t\t\t\t\t   OO|OOOOOOO\\OOOOOOOOOOOOOOOO/OOOOOOO|OO     |\n");
	printf("|      OOOO/OOO-------------OOOO\\OOOO\t\t\t\t\t   OO\\OOOOOOOO\\OOOOOOOOOOOOOO/OOOOOOO/OO      |\n");
	printf("|    OOOO/OOO/OOOOOOOOOOOOOOO\\OOOO\\OOOO\t\t\t\t\t    OOO\\OOOOOOOO------------OOOOOOOO/OOO      |\n");
	printf("|   OOO/OOO/OOOO------------OOOO\\OOO\\OOO\t\t\t\t     OOOO\\OOOOOOOOOOOOOOOOOOOOOOOO/OOOO       |\n");
	printf("|  OO/OOOO/OOO/OOOOOOOOOOOOOO\\OOO|OOO\\OO\t\t\t\t       OOOO\\OOOOOOOOOOOOOOOOOOOO/OOOO         |\n");
	printf("|  OO|OOO|OOO/OOOOO       OOOO\\OOO|OOO|OO\t\t\t\t         OOOOO\\OOOOOOOOOOOOOO/OOOOO           |\n");
	printf("| OOO|OOO|OO|OOOOO         OOOO|OOO|OO|OOO\t\t\t\t            OOOO------------OOOOO             |\n");
	printf("| OOO|OOO|OO|OOOO     O     OOO|OOO|OO|OOO\t\t\t\t                OOOOOOOOOOOO                  |\n");
	printf("| OOO|OOO|OO|OOOOO         OOOO|OOO|OO|OOO\t\t\t\t\t\t\t\t\t      |\n");
	printf("|  OO|OOO|OOO\\OOOOO       OOOO/OOO|OOO|OO\t\t\t\t\t\t\t\t\t      |\n");
	printf("|  OO\\OOOO\\OOO\\OOOOOOOOOOOOOO/OOO/OOO/OO\t\t   Seja   \t\t\t\t\t\t      |\n");
	printf("|   OOO\\OOO\\OOOO------------OOOO/OOO/OOO\t\t    Bem\t\t\t\t\t\t\t      |\n");
	printf("|    OOOO\\OOO\\OOOOOOOOOOOOOOOOO/OO/OOOO\t\t           Vindo! \t\t\t\t\t\t      |\n");
	printf("|      OOOO\\OOO---------------OOO/OOOO\t\t\t\t\t\t\t\t\t\t      |\n");
	printf("|        OOOO\\OOOOOOOOOOOOOOOO/OOOO\t\t\t\t\t\t\t\t\t\t      |\n");
	printf("|           OOOO-------------OOOO\t\t\t\t\t\t\t\t\t\t      |\n");
	printf("|               OOOOOOOOOOOOO\t\t\t\t\t\t\t\t\t\t\t      |\n");
	for(int i = 1; i <=119; i++){
		printf("=");
	}
	printf("\n");
	coord.X = x=42;
    coord.Y = y=28;
   	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    system("pause");
    do
    	//Menu Inicial, variavel "opção" para entrar nos submenus
	{ 
    	system("cls");
		submenu=1;
		for(int i=1; i<=118; i++){
			printf("=");
		}
		printf("=\n");
		for(int i=1; i<=6; i++){
			printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
		}
		printf("|\t\t\t\t\t     =============================\t\t\t\t\t      |\n");
		printf("|\t\t\t\t\t     |          MENU             |\t\t\t\t\t      |\n");    
		printf("|\t\t\t\t\t     =============================\t\t\t\t\t      |\n");
        printf("|\t\t\t\t\t     | 1 - Cadastro de Discos    |\t\t\t\t\t      |\n");
        printf("|\t\t\t\t\t     | 2 - Venda                 |\t\t\t\t\t      |\n");
        printf("|\t\t\t\t\t     | 3 - Relatório de Venda    |\t\t\t\t\t      |\n");
        printf("|\t\t\t\t\t     | 4 - Sobre os Discos       |\t\t\t\t\t      |\n");
        printf("|\t\t\t\t\t     | 0 - Sair do Programa      |\t\t\t\t\t      |\n");
        printf("|\t\t\t\t\t     | Digite a opção desejada:  |\t\t\t\t\t      |\n");
        printf("|\t\t\t\t\t     =============================\t\t\t\t\t      |\n");
		for(int i=1; i<=12; i++){
			printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
		}
		for(int i=1; i<120; i++){
			printf("=");
		}
 		coord.X = x=72;
    	coord.Y = y=15;
   		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
   		scanf("%d", &opcao);
        system("cls");
        switch(opcao){
        	case 1:
				//Submenu de cadastro, utilizando a varial "submenu" para voltar ou avançar
			{				
				while(submenu!=0){
					for(int i=1;i<=119;i++){
						printf("=");
					}
					printf("\n");
        			printf("| Cadastro de Discos                                                             \t\t\t\t      |\n");
        			printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        			printf("| Cadastre aqui os discos que deseja vender para que possamos vender para você.  \t\t\t\t      |\n");
        			printf("| Você tem um limite de 8 cadastros por dia.                                     \t\t\t\t      |\n");
        			printf("| 1 - Para cadastrar o seu disco                                                 \t\t\t\t      |\n");
        			printf("| 0 - Para voltar para o menu principal                                          \t\t\t\t      |\n");
        			printf("| Digite a opção desejada:                                                       \t\t\t\t      |\n");
        			for(int i=1;i<=21;i++){
						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
					}
					for(int i=1;i<=119;i++){
						printf("=");
					}
					coord.X = x=27;
    				coord.Y = y=7;
   					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        			scanf("%d", &submenu);
        			system("cls");
					escolha=1;
        			switch(submenu){
        				case 1:
        					//Tela de cadastro de disco utilizando a variavel "escolha" para continuar cadastrando ou voltar para o submenu anterior
						{ 
							if(vetor<8)
							{
	        					while(escolha!=0){
	        						fflush(stdin);
	        						for(int i=1;i<=119;i++){
										printf("=");
									}
									printf("\n");
									printf("| Cadastro de Discos                                                             \t\t\t\t      |\n");
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
	        						printf("| Insira o nome da banda/artista: \t\t\t\t\t\t\t\t\t              |\n");
	        						for(int i=1;i<=25;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
	        						coord.X = x=34;
	    							coord.Y = y=3;
	   								SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	        						scanf("%[^\n]", &nomeartista[vetor]);
	        						fflush(stdin);
	        						printf("| Insira o nome do disco:          \t\t\t\t\t\t\t\t\t              |\n");
	        						coord.X = x=26;
	    							coord.Y = y=4;
	   								SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	        						scanf("%[^\n]s", &nomedisco[vetor]);
	        						fflush(stdin);
	        						printf("| Insira o ano de lançamento do disco: \t\t\t\t\t\t\t\t\t              |\n");
	        						coord.X = x=39;
	    							coord.Y = y=5;
	   								SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	        						scanf("%d", &ano[vetor]);
	        						printf("| Insira o preço do disco:          \t\t\t\t\t\t\t\t\t              |\n");
	        						coord.X = x=27;
	    							coord.Y = y=6;
	   								SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	        						scanf("%f", &preco[vetor]);
	        						vetor++;
	        						if(vetor==8){
	        							system("cls");
	        							for(int i=1;i<=119;i++){
											printf("=");
										}
										printf("\n");
										printf("| Cadastro de Discos                                                             \t\t\t\t      |\n");
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        								printf("| Limite de cadastros diários atingido.\t\t\t\t\t\t\t\t\t\t      |\n");
        								printf("| Voltando para o menu.                \t\t\t\t\t\t\t\t\t\t      |\n");
        								for(int i=1;i<=24;i++){
											printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
										}
										for(int i=1;i<=119;i++){
											printf("=");
										}
        								for(int i=0;i<2000000000;i++);
        								system("cls"); 
										escolha=0;
										submenu=0;
									}
									else{
	        						printf("| Digite qualquer número para continuar cadastrando, ou; \t\t\t\t\t\t\t      |\n");
	        						printf("| 0 - Para voltar para o menu          \t\t\t\t\t\t\t\t\t              |\n");
	        						printf("| Opção:                                              \t\t\t\t\t\t\t\t      |\n");
	        						coord.X = x=9;
	    							coord.Y = y=9;
	   								SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	        						scanf("%d", &escolha);
	        						system("cls");
	        						}
								}
        					}
        					else
							{
        						for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
								printf("| Cadastro de Discos                                                             \t\t\t\t      |\n");
								printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        						printf("| Limite de cadastros diários atingido.\t\t\t\t\t\t\t\t\t\t      |\n");
        						printf("| Voltando para o menu.                \t\t\t\t\t\t\t\t\t\t      |\n");
        						for(int i=1;i<=24;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
        						for(int i=0;i<2000000000;i++);
        						submenu=0;
        						system("cls"); 
							}
						}
					}
					system("cls");
				}
				break;
			}
			case 2:
				//Tela de Venda dos produtos utilizando a variavel "submenu" para escolher os discos
			{
				while(submenu!=0){
					int j=20;
					int k=25;
					for(int i=1;i<=119;i++){
						printf("=");
					}
					printf("\n");
					disco=1;
        			printf("| Venda de produtos\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        			printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        			printf("| 1 - Os Mutantes - Tudo Foi Feito Pelo Sol (1974)                  R$195,00 \t\t\t\t\t      |\n");
					printf("| 2 - Gilberto Gil - Expresso 2222 (1972)                           R$275,00 \t\t\t\t\t      |\n");
					printf("| 3 - Caetano Veloso - Transa (1972)                                R$260,00 \t\t\t\t\t      |\n");
					printf("| 4 - Erasmo Carlos - Carlos, Erasmo (1971)                         R$195,00 \t\t\t\t\t      |\n");
					printf("| 5 - Arnaldo Baptista - Loki? (1974)                               R$215,00 \t\t\t\t\t      |\n");
					printf("| 6 - Rita Lee - Entradas e Bandeiras (1976)                        R$190,00 \t\t\t\t\t      |\n");
					printf("| 7 - Jorge Ben - Samba Esquema Novo (1963)                         R$225,00 \t\t\t\t\t      |\n");
					printf("| 8 - Secos e Molhados - Secos e Molhados (1973)                    R$150,00 \t\t\t\t\t      |\n");
					printf("| 9 - Tim Maia - Tim Maia (1976)                                    R$600,00 \t\t\t\t\t      |\n");
					printf("| Aqui abaixo estão todos os discos que você deseja vender         \t\t\t\t\t\t      |\n");
					printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
					int num = 10;
					for(int i=0;i<8;i++){ //printf dos discos cadastrados manualmente
						printf("| %d - %-*s - %-*s (%d)\t    R$%.2f\t\t\t\t\t      |\n", num, j, nomeartista[i], k, nomedisco[i], ano[i], preco[i]);
						num++;
					}
        			printf("| 0 - Para voltar ao menu principal                                \t\t\t\t\t\t      |\n");
        			printf("| Informe qual disco você deseja comprar:                          \t\t\t\t\t\t      |\n");
        			for(int i=1;i<=5;i++){
						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
					}
					for(int i=1;i<=119;i++){
						printf("=");
					}
					coord.X = x=42;
    				coord.Y = y=23;
   					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        			scanf("%d", &submenu);
        			system("cls");
        			switch(submenu){
        				// switch para escolha dos discos utilizando a variavel "submenu"
        				case 1:
						{
        					for(int i=0;i<1;i++){
        						for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Você selecionou o disco Tudo Foi Feito Pelo Sol de Mutantes.\t\t\t\t\t\t\t      |\n");
								printf("| Quantas unidades você deseja comprar? \t\t\t\t\t\t\t\t\t      |\n");
								for(int i=1;i<=24;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
								coord.X = x=40;
    							coord.Y = y=4;
   								SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
								scanf("%d",&lp);
								mostra=lp*195; //operação parcial apenas informando valor da ultima compra
								pl[0]=pl[0]+lp;
								soma[0]=soma[0]+lp*195; //operação que será agregada ao resultado final
								system("cls");
								//Para animação de compra
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Você selecionou o disco Tudo Foi Feito Pelo Sol de Mutantes.\t\t\t\t\t\t\t      |\n");
								printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
								printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								for(int i=1;i<=23;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
								for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
								system("cls");
								//Para animação de compra
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
       							printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
       							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Você selecionou o disco Tudo Foi Feito Pelo Sol de Mutantes.\t\t\t\t\t\t\t      |\n");
								printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
								printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Compra efetuada. Total: R$%.2f.\t\t\t\t\t\t\t\t\t\t      |\n", mostra);
								for(int i=1;i<=22;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
								for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
						 	}
							break;
						}
						case 2:
						{
							for(int i=0;i<1;i++){
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
       							printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
       							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Você selecionou o disco Expresso 2222 de Gilberto Gil.\t\t\t\t\t\t\t      |\n");
								printf("| Quantas unidades você deseja comprar? \t\t\t\t\t\t\t\t\t      |\n");
								for(int i=1;i<=24;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
								coord.X = x=40;
   								coord.Y = y=4;
  								SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
								scanf("%d", &lp);
								mostra=lp*275; //operação parcial apenas informando valor da ultima compra
								pl[1]=pl[1]+lp;
								soma[1]=soma[1]+lp*275; //operação que será agregada ao resultado final
								system("cls");
								//Para animação de compra
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Você selecionou o disco Expresso 2222 de Gilberto Gil.\t\t\t\t\t\t\t      |\n");
								printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
								printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								for(int i=1;i<=23;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
								for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
								system("cls");
								//Para animação de compra
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Você selecionou o disco Expresso 2222 de Gilberto Gil.\t\t\t\t\t\t\t      |\n");
								printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
								printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Compra efetuada. Total: R$%.2f.\t\t\t\t\t\t\t\t\t\t      |\n", mostra);
								for(int i=1;i<=22;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
								for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
							}
							break;
						}
						case 3:
						{
							for(int i=0;i<1;i++){
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Você selecionou o disco Transa de Caetano Veloso.\t\t\t\t\t\t\t              |\n");
								printf("| Quantas unidades você deseja comprar? \t\t\t\t\t\t\t\t\t      |\n");
								for(int i=1;i<=24;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
								coord.X = x=40;
    							coord.Y = y=4;
   								SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
								scanf("%d", &lp);
								mostra=lp*260; //operação parcial apenas informando valor da ultima compra
								pl[2]=pl[2]+lp;
								soma[2]=soma[2]+lp*260; //operação que será agregada ao resultado final
								system("cls");
								// Para animação de compra
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
       							printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
       							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Você selecionou o disco Transa de Caetano Veloso.\t\t\t\t\t\t\t              |\n");
								printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
								printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								for(int i=1;i<=23;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
								for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
								system("cls");
								//Para animação de compra
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
       							printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
       							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Você selecionou o disco Transa de Caetano Veloso.\t\t\t\t\t\t\t              |\n");
								printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
								printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Compra efetuada. Total: R$%.2f.\t\t\t\t\t\t\t\t\t\t      |\n", mostra);
								for(int i=1;i<=22;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
								for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
							}
							break;
						}
						case 4:
						{
							for(int i=0;i<1;i++){
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Você selecionou o disco Carlos, Erasmo de Erasmo Carlos.\t\t\t\t\t\t\t      |\n");
								printf("| Quantas unidades você deseja comprar? \t\t\t\t\t\t\t\t\t      |\n");
								for(int i=1;i<=24;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
								coord.X = x=40;
    							coord.Y = y=4;
   								SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
								scanf("%d", &lp);
								mostra=lp*195; //operação parcial apenas informando valor da ultima compra
								pl[3]=pl[3]+lp;
								soma[3]=soma[3]+lp*195; //operação que será agregada ao resultado final
								system("cls");
								//Para animação de compra
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Você selecionou o disco Carlos, Erasmo de Erasmo Carlos.\t\t\t\t\t\t\t      |\n");
								printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
								printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								for(int i=1;i<=23;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
								for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
								system("cls");
								//Para animação de compra
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Você selecionou o disco Carlos, Erasmo de Erasmo Carlos.\t\t\t\t\t\t\t      |\n");
								printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
								printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Compra efetuada. Total: R$%.2f.\t\t\t\t\t\t\t\t\t\t      |\n", mostra);
								for(int i=1;i<=22;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
								for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
							}
							break;
						}
						case 5:
						{
							for(int i=0;i<1;i++){
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Você selecionou o disco Loki? de Arnaldo Baptista.\t\t\t\t\t\t\t\t      |\n");
								printf("| Quantas unidades você deseja comprar? \t\t\t\t\t\t\t\t\t      |\n");
								for(int i=1;i<=24;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
								coord.X = x=40;
    							coord.Y = y=4;
   								SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
								scanf("%d", &lp);
								mostra=lp*215; //operação parcial apenas informando valor da ultima compra
								pl[4]=pl[4]+lp;
								soma[4]=soma[4]+lp*215; //operação que será agregada ao resultado final
								system("cls");
								//Para animação de compra
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
       							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Você selecionou o disco Loki? de Arnaldo Baptista.\t\t\t\t\t\t\t\t      |\n");
								printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
								printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								for(int i=1;i<=23;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
								for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
								system("cls");
								//Para animação de compra
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
       							printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
       							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Você selecionou o disco Loki? de Arnaldo Baptista.\t\t\t\t\t\t\t\t      |\n");
								printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
								printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Compra efetuada. Total: R$%.2f.\t\t\t\t\t\t\t\t\t\t      |\n", mostra);
								for(int i=1;i<=22;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
								for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
							}	
							break;
						}	
						case 6:
						{
							for(int i=0;i<1;i++){
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
       							printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
       							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Você selecionou o disco Entradas e Bandeiras de Rita Lee.\t\t\t\t\t\t\t      |\n");
								printf("| Quantas unidades você deseja comprar? \t\t\t\t\t\t\t\t\t      |\n");
								for(int i=1;i<=24;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
								coord.X = x=40;
    							coord.Y = y=4;
   								SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
								scanf("%d", &lp);
								mostra=lp*190; //operação parcial apenas informando valor da ultima compra
								pl[5]=pl[5]+lp;
								soma[5]=soma[5]+lp*190; //operação que será agregada ao resultado final
								system("cls");
								//Para animação de compra
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
       							printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
       							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Você selecionou o disco Entradas e Bandeiras de Rita Lee.\t\t\t\t\t\t\t      |\n");
								printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
								printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								for(int i=1;i<=23;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
								for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
								system("cls");
								//Para animação de compra
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Você selecionou o disco Entradas e Bandeiras de Rita Lee.\t\t\t\t\t\t\t      |\n");
								printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
								printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Compra efetuada. Total: R$%.2f.\t\t\t\t\t\t\t\t\t\t      |\n", mostra);
								for(int i=1;i<=22;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
								for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
							}
							break;
						}	
						case 7:
						{
							for(int i=0;i<1;i++){
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Você selecionou o disco Samba Esquema Novo de Jorge Ben.\t\t\t\t\t\t\t      |\n");
								printf("| Quantas unidades você deseja comprar? \t\t\t\t\t\t\t\t\t      |\n");
								for(int i=1;i<=24;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
								coord.X = x=40;
    							coord.Y = y=4;
   								SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
								scanf("%d", &lp);
								mostra=lp*225; //operação parcial apenas informando valor da ultima compra
								pl[6]=pl[6]+lp;
								soma[6]=soma[6]+lp*225; //operação que será agregada ao resultado final
								system("cls");
								//Para animação de compra
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Você selecionou o disco Samba Esquema Novo de Jorge Ben.\t\t\t\t\t\t\t      |\n");
								printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
								printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								for(int i=1;i<=23;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
								for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
								system("cls");
								//Para animação de compra
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Você selecionou o disco Samba Esquema Novo de Jorge Ben.\t\t\t\t\t\t\t      |\n");
								printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
								printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Compra efetuada. Total: R$%.2f.\t\t\t\t\t\t\t\t\t\t      |\n", mostra);
								for(int i=1;i<=22;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
								for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
							}
							break;
						}
						case 8:
						{
							for(int i=0;i<1;i++){
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Você selecionou o disco Secos e Molhados de Secos e Molhados.\t\t\t\t\t\t\t      |\n");
								printf("| Quantas unidades você deseja comprar? \t\t\t\t\t\t\t\t\t      |\n");
								for(int i=1;i<=24;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
								coord.X = x=40;
    							coord.Y = y=4;
   								SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
								scanf("%d", &lp);
								mostra=lp*150; //operação parcial apenas informando valor da ultima compra
								pl[7]=pl[7]+lp;
								soma[7]=soma[7]+lp*150; //operação que será agregada ao resultado final
								system("cls");
								//Para animação de compra
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Você selecionou o disco Secos e Molhados de Secos e Molhados.\t\t\t\t\t\t\t      |\n");
								printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
								printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								for(int i=1;i<=23;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
								for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
								system("cls");
								//Para animação de compra
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Você selecionou o disco Secos e Molhados de Secos e Molhados.\t\t\t\t\t\t\t      |\n");
								printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
								printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Compra efetuada. Total: R$%.2f.\t\t\t\t\t\t\t\t\t\t      |\n", mostra);
								for(int i=1;i<=22;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
								for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
							}
							break;
						}
						case 9:
						{
							for(int i=0;i<1;i++){
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
       							printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
       							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Você selecionou o disco Tim Maia 1976 de Tim Maia.\t\t\t\t\t\t\t\t      |\n");
								printf("| Quantas unidades você deseja comprar? \t\t\t\t\t\t\t\t\t      |\n");
								for(int i=1;i<=24;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
								coord.X = x=40;
    							coord.Y = y=4;
   								SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
								scanf("%d", &lp);
								mostra=lp*600; //operação parcial apenas informando valor da ultima compra
								pl[8]=pl[8]+lp;
								soma[8]=soma[8]+lp*600; //operação que será agregada ao resultado final
								system("cls");
								//Para animação de compra
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
       							printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
       							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Você selecionou o disco Tim Maia 1976 de Tim Maia.\t\t\t\t\t\t\t\t      |\n");
								printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
								printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								for(int i=1;i<=23;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
								for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
								system("cls");
								//Para animação de compra
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Você selecionou o disco Tim Maia 1976 de Tim Maia.\t\t\t\t\t\t\t\t      |\n");
								printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
								printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Compra efetuada. Total: R$%.2f.\t\t\t\t\t\t\t\t\t\t      |\n", mostra);
								for(int i=1;i<=22;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
								printf("=");
								}
								for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
							}
							break;
						}
						case 10:
						{
							for(int i=0;i<1;i++){
								if(preco[0]!=0 || ano[0]!=0){
									for(int i=1;i<=119;i++){
										printf("=");
									}
									printf("\n");
        							printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Você selecionou o disco %-*s de %-*s.\t\t\t\t\t      |\n",k, nomedisco[0], j, nomeartista[0]);
									printf("| Quantas unidades você deseja comprar? \t\t\t\t\t\t\t\t\t      |\n");
									for(int i=1;i<=24;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									coord.X = x=40;
    								coord.Y = y=4;
   									SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
									scanf("%d", &lp);
									mostra=lp*preco[0]; //operação parcial apenas informando valor da ultima compra
									pl[9]=pl[9]+lp;
									soma[9]=soma[9]+lp*preco[0]; //operação que será agregada ao resultado final
									system("cls");
									//Para animação de compra
									for(int i=1;i<=119;i++){
										printf("=");
									}
									printf("\n");
        							printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Você selecionou o disco %-*s de %-*s.\t\t\t\t\t      |\n",k, nomedisco[0], j, nomeartista[0]);
									printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
									printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									for(int i=1;i<=23;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
									system("cls");
									//Para animação de compra
									for(int i=1;i<=119;i++){
										printf("=");
									}
									printf("\n");
        							printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Você selecionou o disco %-*s de %-*s.\t\t\t\t\t      |\n",k, nomedisco[0], j, nomeartista[0]);
									printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
									printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Compra efetuada. Total: R$%.2f.\t\t\t\t\t\t\t\t\t\t      |\n", mostra);
									for(int i=1;i<=22;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
								}
								else
								{
									system("cls");
									for(int i=1;i<=119;i++){
									printf("=");
									}
									printf("\n");
        							printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Item não está cadastrado, voltando para menu de discos. \t\t\t\t\t\t\t      |\n");
									for(int i=1;i<=25;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									for(int i=0;i<2000000000;i++);
								}
							}
							break;
						}
						case 11:
						{
							for(int i=0;i<1;i++){
								if(preco[1]!=0 || ano[1]!=0){
									for(int i=1;i<=119;i++){
										printf("=");
									}
									printf("\n");
        							printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Você selecionou o disco %-*s de %-*s.\t\t\t\t\t      |\n",k, nomedisco[1], j, nomeartista[1]);
									printf("| Quantas unidades você deseja comprar? \t\t\t\t\t\t\t\t\t      |\n");
									for(int i=1;i<=24;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									coord.X = x=40;
    								coord.Y = y=4;
   									SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
									scanf("%d", &lp);
									mostra=lp*preco[1]; //operação parcial apenas informando valor da ultima compra
									pl[10]=pl[10]+lp;
									soma[10]=soma[10]+lp*preco[1]; //operação que será agregada ao resultado final
									system("cls");
									//Para animação de compra
									for(int i=1;i<=119;i++){
										printf("=");
									}
									printf("\n");
        							printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Você selecionou o disco %-*s de %-*s.\t\t\t\t\t      |\n",k, nomedisco[1], j, nomeartista[1]);
									printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
									printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									for(int i=1;i<=23;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
									system("cls");
									//Para animação de compra
									for(int i=1;i<=119;i++){
										printf("=");
									}
									printf("\n");
        							printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Você selecionou o disco %-*s de %-*s.\t\t\t\t\t      |\n",k, nomedisco[1], j, nomeartista[1]);
									printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
									printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Compra efetuada. Total: R$%.2f.\t\t\t\t\t\t\t\t\t\t      |\n", mostra);
									for(int i=1;i<=22;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
								}
								else
								{
									system("cls");
									for(int i=1;i<=119;i++){
									printf("=");
									}
									printf("\n");
        							printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Item não está cadastrado, voltando para menu de discos. \t\t\t\t\t\t\t      |\n");
									for(int i=1;i<=25;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									for(int i=0;i<2000000000;i++);
								}
							}
							break;
						}
						case 12:
						{
							for(int i=0;i<1;i++){
								if(preco[2]!=0 || ano[2]!=0){
									for(int i=1;i<=119;i++){
										printf("=");
									}
									printf("\n");
        							printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Você selecionou o disco %-*s de %-*s.\t\t\t\t\t      |\n",k, nomedisco[2], j, nomeartista[2]);
									printf("| Quantas unidades você deseja comprar? \t\t\t\t\t\t\t\t\t      |\n");
									for(int i=1;i<=24;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									coord.X = x=40;
    								coord.Y = y=4;
   									SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
									scanf("%d", &lp);
									mostra=lp*preco[2]; //operação parcial apenas informando valor da ultima compra
									pl[11]=pl[11]+lp;
									soma[11]=soma[11]+lp*preco[2]; //operação que será agregada ao resultado final
									system("cls");
									//Para animação de compra
									for(int i=1;i<=119;i++){
										printf("=");
									}
									printf("\n");
        							printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Você selecionou o disco %-*s de %-*s.\t\t\t\t\t      |\n",k, nomedisco[2], j, nomeartista[2]);
									printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
									printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									for(int i=1;i<=23;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
									system("cls");
									//Para animação de compra
									for(int i=1;i<=119;i++){
										printf("=");
									}
									printf("\n");
        							printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Você selecionou o disco %-*s de %-*s.\t\t\t\t\t      |\n",k, nomedisco[2], j, nomeartista[2]);
									printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
									printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Compra efetuada. Total: R$%.2f.\t\t\t\t\t\t\t\t\t\t      |\n", mostra);
									for(int i=1;i<=22;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
								}
								else
								{
									system("cls");
									for(int i=1;i<=119;i++){
									printf("=");
									}
									printf("\n");
        							printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Item não está cadastrado, voltando para menu de discos. \t\t\t\t\t\t\t      |\n");
									for(int i=1;i<=25;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									for(int i=0;i<2000000000;i++);
								}
							}
							break;
						}
						case 13:
						{
							for(int i=0;i<1;i++){
								if(preco[3]!=0 || ano[3]!=0){
									for(int i=1;i<=119;i++){
										printf("=");
									}
									printf("\n");
	        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
	        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Você selecionou o disco %-*s de %-*s.\t\t\t\t\t      |\n",k, nomedisco[3], j, nomeartista[3]);
									printf("| Quantas unidades você deseja comprar? \t\t\t\t\t\t\t\t\t      |\n");
									for(int i=1;i<=24;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									coord.X = x=40;
	    							coord.Y = y=4;
	   								SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
									scanf("%d", &lp);
									mostra=lp*preco[3]; //operação parcial apenas informando valor da ultima compra
									pl[12]=pl[12]+lp;
									soma[12]=soma[12]+lp*preco[3]; //operação que será agregada ao resultado final
									system("cls");
									//Para animação de compra
									for(int i=1;i<=119;i++){
										printf("=");
									}
									printf("\n");
	        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
	        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Você selecionou o disco %-*s de %-*s.\t\t\t\t\t      |\n",k, nomedisco[3], j, nomeartista[3]);
									printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
									printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									for(int i=1;i<=23;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
									system("cls");
									//Para animação de compra
									for(int i=1;i<=119;i++){
										printf("=");
									}
									printf("\n");
	        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
	        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Você selecionou o disco %-*s de %-*s.\t\t\t\t\t      |\n",k, nomedisco[3], j, nomeartista[3]);
									printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
									printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Compra efetuada. Total: R$%.2f.\t\t\t\t\t\t\t\t\t\t      |\n", mostra);
									for(int i=1;i<=22;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
								}
								else
								{
									system("cls");
									for(int i=1;i<=119;i++){
									printf("=");
									}
									printf("\n");
        							printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Item não está cadastrado, voltando para menu de discos. \t\t\t\t\t\t\t      |\n");
									for(int i=1;i<=25;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									for(int i=0;i<2000000000;i++);
								}
							}
							break;
						}
						case 14:
						{
							for(int i=0;i<1;i++){
								if(preco[4]!=0 || ano[4]!=0){
									for(int i=1;i<=119;i++){
										printf("=");
									}
									printf("\n");
	        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
	        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Você selecionou o disco %-*s de %-*s.\t\t\t\t\t      |\n",k, nomedisco[4], j, nomeartista[4]);
									printf("| Quantas unidades você deseja comprar? \t\t\t\t\t\t\t\t\t      |\n");
									for(int i=1;i<=24;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									coord.X = x=40;
	    							coord.Y = y=4;
	   								SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
									scanf("%d", &lp);
									mostra=lp*preco[4]; //operação parcial apenas informando valor da ultima compra
									pl[13]=pl[13]+lp;
									soma[13]=soma[13]+lp*preco[4]; //operação que será agregada ao resultado final
									system("cls");
									//Para animação de compra
									for(int i=1;i<=119;i++){
										printf("=");
									}
									printf("\n");
	        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
	        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Você selecionou o disco %-*s de %-*s.\t\t\t\t\t      |\n",k, nomedisco[4], j, nomeartista[4]);
									printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
									printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									for(int i=1;i<=23;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
									system("cls");
									//Para animação de compra
									for(int i=1;i<=119;i++){
										printf("=");
									}
									printf("\n");
	        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
	        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Você selecionou o disco %-*s de %-*s.\t\t\t\t\t      |\n",k, nomedisco[4], j, nomeartista[4]);
									printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
									printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Compra efetuada. Total: R$%.2f.\t\t\t\t\t\t\t\t\t\t      |\n", mostra);
									for(int i=1;i<=22;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
								}
								else
								{
									system("cls");
									for(int i=1;i<=119;i++){
									printf("=");
									}
									printf("\n");
        							printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Item não está cadastrado, voltando para menu de discos. \t\t\t\t\t\t\t      |\n");
									for(int i=1;i<=25;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									for(int i=0;i<2000000000;i++);
								}
							}
							break;
						}
						case 15:
						{
							for(int i=0;i<1;i++){
								if(preco[5]!=0 || ano[5]!=0){
									for(int i=1;i<=119;i++){
										printf("=");
									}
									printf("\n");
	        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
	        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Você selecionou o disco %-*s de %-*s.\t\t\t\t\t      |\n",k, nomedisco[5], j, nomeartista[5]);
									printf("| Quantas unidades você deseja comprar? \t\t\t\t\t\t\t\t\t      |\n");
									for(int i=1;i<=24;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									coord.X = x=40;
	    							coord.Y = y=4;
	   								SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
									scanf("%d", &lp);
									mostra=lp*preco[5]; //operação parcial apenas informando valor da ultima compra
									pl[14]=pl[14]+lp;
									soma[14]=soma[14]+lp*preco[5]; //operação que será agregada ao resultado final
									system("cls");
									//Para animação de compra
									for(int i=1;i<=119;i++){
										printf("=");
									}
									printf("\n");
	        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
	        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Você selecionou o disco %-*s de %-*s.\t\t\t\t\t      |\n",k, nomedisco[5], j, nomeartista[5]);
									printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
									printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									for(int i=1;i<=23;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
									system("cls");
									//Para animação de compra
									for(int i=1;i<=119;i++){
										printf("=");
									}
									printf("\n");
	        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
	        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Você selecionou o disco %-*s de %-*s.\t\t\t\t\t      |\n",k, nomedisco[5], j, nomeartista[5]);
									printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
									printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Compra efetuada. Total: R$%.2f.\t\t\t\t\t\t\t\t\t\t      |\n", mostra);
									for(int i=1;i<=22;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
								}
								else
								{
									system("cls");
									for(int i=1;i<=119;i++){
									printf("=");
									}
									printf("\n");
        							printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Item não está cadastrado, voltando para menu de discos. \t\t\t\t\t\t\t      |\n");
									for(int i=1;i<=25;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									for(int i=0;i<2000000000;i++);
								}
							}
							break;
						}
						case 16:
						{
							for(int i=0;i<1;i++){
								if(preco[6]!=0 || ano[6]!=0){
									for(int i=1;i<=119;i++){
										printf("=");
									}
									printf("\n");
	        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
	        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Você selecionou o disco %-*s de %-*s.\t\t\t\t\t      |\n",k, nomedisco[6], j, nomeartista[6]);
									printf("| Quantas unidades você deseja comprar? \t\t\t\t\t\t\t\t\t      |\n");
									for(int i=1;i<=24;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									coord.X = x=40;
	    							coord.Y = y=4;
	   								SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
									scanf("%d", &lp);
									mostra=lp*preco[6]; //operação parcial apenas informando valor da ultima compra
									pl[15]=pl[15]+lp;
									soma[15]=soma[15]+lp*preco[6]; //operação que será agregada ao resultado final
									system("cls");
									//Para animação de compra
									for(int i=1;i<=119;i++){
										printf("=");
									}
									printf("\n");
	        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
	        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Você selecionou o disco %-*s de %-*s.\t\t\t\t\t      |\n",k, nomedisco[6], j, nomeartista[6]);
									printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
									printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									for(int i=1;i<=23;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
									system("cls");
									//Para animação de compra
									for(int i=1;i<=119;i++){
										printf("=");
									}
									printf("\n");
	        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
	        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Você selecionou o disco %-*s de %-*s.\t\t\t\t\t      |\n",k, nomedisco[6], j, nomeartista[6]);
									printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
									printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Compra efetuada. Total: R$%.2f.\t\t\t\t\t\t\t\t\t\t      |\n", mostra);
									for(int i=1;i<=22;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
								}
								else
								{
									system("cls");
									for(int i=1;i<=119;i++){
									printf("=");
									}
									printf("\n");
        							printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Item não está cadastrado, voltando para menu de discos. \t\t\t\t\t\t\t      |\n");
									for(int i=1;i<=25;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									for(int i=0;i<2000000000;i++);
								}
							}
							break;
						}
						case 17:
						{
							for(int i=0;i<1;i++){
								if(preco[7]!=0 || ano[7]!=0){
									for(int i=1;i<=119;i++){
										printf("=");
									}
									printf("\n");
	        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
	        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Você selecionou o disco %-*s de %-*s.\t\t\t\t\t      |\n",k, nomedisco[7], j, nomeartista[7]);
									printf("| Quantas unidades você deseja comprar? \t\t\t\t\t\t\t\t\t      |\n");
									for(int i=1;i<=24;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									coord.X = x=40;
	    							coord.Y = y=4;
	   								SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
									scanf("%d", &lp);
									mostra=lp*preco[7]; //operação parcial apenas informando valor da ultima compra
									pl[16]=pl[16]+lp;
									soma[16]=soma[16]+lp*preco[7]; //operação que será agregada ao resultado final
									system("cls");
									//Para animação de compra
									for(int i=1;i<=119;i++){
										printf("=");
									}
									printf("\n");
	        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
	        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Você selecionou o disco %-*s de %-*s.\t\t\t\t\t      |\n",k, nomedisco[7], j, nomeartista[7]);
									printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
									printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									for(int i=1;i<=23;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
									system("cls");
									//Para animação de compra
									for(int i=1;i<=119;i++){
										printf("=");
									}
									printf("\n");
	        						printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
	        						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Você selecionou o disco %-*s de %-*s.\t\t\t\t\t      |\n",k, nomedisco[7], j, nomeartista[7]);
									printf("| Quantas unidades você deseja comprar? %d\t\t\t\t\t\t\t\t\t      |\n", lp);
									printf("| Aguarde... Comprando.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Compra efetuada. Total: R$%.2f.\t\t\t\t\t\t\t\t\t\t      |\n", mostra);
									for(int i=1;i<=22;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									for(int i=0;i<1500000000;i++); //Para pequeno delay no sistema
								}
								else
								{
									system("cls");
									for(int i=1;i<=119;i++){
									printf("=");
									}
									printf("\n");
        							printf("| Venda de produtos \t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        							printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
									printf("| Item não está cadastrado, voltando para menu de discos. \t\t\t\t\t\t\t      |\n");
									for(int i=1;i<=25;i++){
										printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
									}
									for(int i=1;i<=119;i++){
										printf("=");
									}
									for(int i=0;i<2000000000;i++);
								}
							}
							break;
						}
					}
					system("cls");
				}
				somafinal=0;
				for(int i=0;i<17;i++){
					somafinal=somafinal+soma[i];
				}
				break;
			}
			case 3:
				//Tela de relatório de vendas utilizando variavel "submenu" para voltar para o menu principal
			{
				
				while(submenu!=0){
					int i=0;
					for(int i=1;i<=119;i++){
						printf("=");
					}
					printf("\n");
		        	printf("| Resumo das vendas\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
        			printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
		        	printf("| Aqui você fica por dentro de quanto tem gastado com nossos discos\t\t\t\t\t\t      |\n");
		        	printf("| %d unidades de Os Mutantes - Tudo Foi Feito Pelo Sol\t\t\t\t    R$%.2f\t\t\t      |\n", pl[0], soma[0]);
					printf("| %d unidades de Gilberto Gil - Expresso 2222         \t\t\t\t    R$%.2f\t\t\t      |\n", pl[1], soma[1]);
					printf("| %d unidades de Caetano Veloso - Transa              \t\t\t\t    R$%.2f\t\t\t      |\n", pl[2], soma[2]);
					printf("| %d unidades de Erasmo Carlos - Carlos, Erasmo       \t\t\t\t    R$%.2f\t\t\t      |\n", pl[3], soma[3]);
					printf("| %d unidades de Arnaldo Baptista - Loki?             \t\t\t\t    R$%.2f\t\t\t      |\n", pl[4], soma[4]);
					printf("| %d unidades de Rita Lee - Entradas e Bandeiras      \t\t\t\t    R$%.2f\t\t\t      |\n", pl[5], soma[5]);
					printf("| %d unidades de Jorge Ben - Samba Esquema Novo       \t\t\t\t    R$%.2f\t\t\t      |\n", pl[6], soma[6]);
					printf("| %d unidades de Secos e Molhados - Secos e Molhados  \t\t\t\t    R$%.2f\t\t\t      |\n", pl[7], soma[7]);
					printf("| %d unidades de Tim Maia - Tim Maia 1976             \t\t\t\t    R$%.2f\t\t\t      |\n", pl[8], soma[8]);
					for(int i=0;i<8;i++){
					printf("| %d unidades de %-*s - %-*s      \t\t    R$%.2f\t\t\t      |\n", pl[i+9], k, nomedisco[i], j, nomeartista[i], soma[i+9]);
					}
		        	printf("| Você está R$%.2f mais pobre, mas 100%% mais feliz.\t\t\t\t\t\t\t\t      |\n", somafinal);
		        	printf("| 0 - Para voltar para menu principal               \t\t\t\t\t\t\t\t      |\n");
		        	printf("| Opção:                                     \t\t\t\t\t\t\t\t\t      |\n");
		        	for(int i=1;i<=5;i++){
						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
					}
					for(int i=1;i<=119;i++){
						printf("=");
					}
 					coord.X = x=9;
    				coord.Y = y=23;
   					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
   					scanf("%d", &submenu);
					system("cls");
		       	}

				break;
			}
			case 4:
				//Tela de informações sobre os discos, utilizando a variavel "submenu" para escolher o disco ou voltar para o menu principal
			{

				while(submenu!=0){
					disco=1;
					for(int i=1;i<=119;i++){
						printf("=");
					}
					printf("\n");
					printf("|\t\t\t\t\t               Sobre os Discos\t\t\t\t\t\t      |\n");
					printf("|");
					for(int i=1;i<=117;i++){
						printf(" ");	
					}
					printf("|\n");
					
					printf("|\t\t\tAqui estão algumas informações sobre os discos disponíveis para compra.\t\t\t      |\n");
					printf("|\t\t\tLembrando que nossos discos são reedições e estão todos lacrados.\t\t\t      |\n");
					printf("|\t\t\tDigite o número do disco que você quer ler sobre\t\t\t\t\t      |\n");
					printf("|");
					for(int i=1;i<=117;i++){
						printf(" ");	
					}
					printf("|\n");
					printf("|\t\t\t\t   1 - Os Mutantes - Tudo Foi Feito Pelo Sol (1974)\t\t\t\t      |\n");
					printf("|\t\t\t\t   2 - Gilberto Gil - Expresso 2222 (1972)         \t\t\t\t      |\n");
					printf("|\t\t\t\t   3 - Caetano Veloso - Transa (1972)              \t\t\t\t      |\n");
					printf("|\t\t\t\t   4 - Erasmo Carlos - Carlos, Erasmo (1971)       \t\t\t\t      |\n");
					printf("|\t\t\t\t   5 - Arnaldo Baptista - Loki? (1974)             \t\t\t\t      |\n");
					printf("|\t\t\t\t   6 - Rita Lee - Entradas e Bandeiras (1976)      \t\t\t\t      |\n");
					printf("|\t\t\t\t   7 - Jorge Ben - Samba Esquema Novo (1963)       \t\t\t\t      |\n");
					printf("|\t\t\t\t   8 - Secos e Molhados - Secos e Molhados (1973)  \t\t\t\t      |\n");
					printf("|\t\t\t\t   9 - Tim Maia - Tim Maia (1976)                  \t\t\t\t      |\n");
					printf("|\t\t\t\t   0 - Para voltar para o menu principal           \t\t\t\t      |\n");
					printf("|\t\t\t\t   Opção:                                          \t\t\t\t      |\n");
					for(int i=1;i<=11;i++){
						printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
					}
					for(int i=1;i<=119;i++){
						printf("=");
					}
 					coord.X = x=42;
    				coord.Y = y=17;
   					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
					scanf("%d", &submenu);
					system("cls");
					switch(submenu){
						//telas com as informações sobre os discos, utilizando a variável "disco" para voltar para o submenu
						case 1:
						{
							while(disco!=0){
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
								printf("|\t\t\t\t1 - Os Mutantes - Tudo Foi Feito Pelo Sol (1974)\t\t\t\t      |\n");
								printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								printf("|\tTudo Foi Feito pelo Sol é um álbum marcante por apresentar uma mudança significativa na sonoridade dos\t      |\n| Mutantes. ");
								printf("Nesse ponto de suas carreiras, a banda havia passado por diversas transformações musicais e mudanças de   |\n| formação. ");
								printf("O álbum é caracterizado por uma abordagem mais voltada para o rock progressivo, com influências do rock   |\n| sinfônico e da música erudita.\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("|\tAs letras do álbum, compostas principalmente por Arnaldo Baptista e Rita Lee, tratam de temas cósmicos,       |\n| espirituais e de amor. ");
								printf("A faixa-título Tudo Foi Feito pelo Sol uma das mais conhecidas do disco e apresenta uma      |\n| atmosfera mística e contemplativa.\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Faixas:                                    \t\t\t\t\t\t\t\t\t      |\n");
								printf("| A1 Deixe Entrar Um Pouco d'Água No Quintal \t\t\t\t\t\t\t\t\t      |\n");
								printf("| A2 Pitagoras                               \t\t\t\t\t\t\t\t\t      |\n");
								printf("| A3 Desanuviar                              \t\t\t\t\t\t\t\t\t      |\n");
								printf("| B1 Eu Só Penso Em Te Ajudar                \t\t\t\t\t\t\t\t\t      |\n");
								printf("| B2 Cidadão Da Terra                        \t\t\t\t\t\t\t\t\t      |\n");
								printf("| B3 O Contrário De Nada É Nada              \t\t\t\t\t\t\t\t\t      |\n");
								printf("| B4 Tudo Foi Feito Pelo Sol                 \t\t\t\t\t\t\t\t\t      |\n");
								printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| 0 - Para voltar para os discos             \t\t\t\t\t\t\t\t\t      |\n");
								printf("| Opção:                                     \t\t\t\t\t\t\t\t\t      |\n");
								for(int i=1;i<=7;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
 								coord.X = x=9;
    							coord.Y = y=21;
   								SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
								scanf("%d", &disco);
								system("cls");

							}
							break;
						}
						case 2:
						{
							while(disco!=0){
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
								printf("|\t\t\t\t\t2 - Gilberto Gil - Expresso 2222 (1972)\t\t\t\t\t      |\n");
								printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("|\tExpresso 2222 apresenta uma fusão inovadora de diversos gêneros musicais, como o samba, o rock, o reggae      |\n| e elementos da música nordestina. ");
								printf("A sonoridade do álbum é marcada por arranjos sofisticados e experimentação        |\n| sonora, refletindo a diversidade cultural do Brasil.\t\t\t\t\t\t\t\t      |\n");
								printf("|\tAs letras de Gil são carregadas de poesia e engajamento social. Elas abordam uma ampla gama de temas,         |\n|");
								printf(" desde questões políticas e sociais até reflexões sobre amor, espiritualidade e a identidade brasileira.\t      |\n|");
								printf(" A faixa-título, Expresso 2222, é um hino de celebração da diversidade cultural brasileira e da força transformadora |\n| da música.\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Faixas:                                    \t\t\t\t\t\t\t\t\t      |\n");
								printf("| A1 Pipoca Moderna                          \t\t\t\t\t\t\t\t\t      |\n");
								printf("| A2 Back In Bahia                           \t\t\t\t\t\t\t\t\t      |\n");
								printf("| A3 O Canto Da Ema                          \t\t\t\t\t\t\t\t\t      |\n");
								printf("| A4 Chiclete Com Banana                     \t\t\t\t\t\t\t\t\t      |\n");
								printf("| A5 Êle E Eu                                \t\t\t\t\t\t\t\t\t      |\n");
								printf("| B1 Sai Do Sereno                           \t\t\t\t\t\t\t\t\t      |\n");
								printf("| B2 Expresso 2222                           \t\t\t\t\t\t\t\t\t      |\n");
								printf("| B3 O Sonho Acabou                          \t\t\t\t\t\t\t\t\t      |\n");
								printf("| B4 Oriente                                 \t\t\t\t\t\t\t\t\t      |\n");
								printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| 0 - Para voltar para os discos             \t\t\t\t\t\t\t\t\t      |\n");
								printf("| Opção:                                     \t\t\t\t\t\t\t\t\t      |\n");
								for(int i=1;i<=5;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
 								coord.X = x=9;
    							coord.Y = y=23;
   								SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
								scanf("%d", &disco);
								system("cls");
							}
							break;
						}
						case 3:
						{
							while(disco!=0){
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
								printf("|\t\t\t\t\t3 - Caetano Veloso - Transa (1972)\t\t\t\t\t      |\n");
								printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("|\tA sonoridade de Transa é um casamento perfeito entre influências tropicais e o som característico do rock     |\n| britânico da época. ");
								printf("Caetano Veloso funde elementos da música brasileira, como a bossa nova e o samba, com guitarras |\n| elétricas, arranjos ");
								printf("psicodélicos e experimentação sonora, criando uma sonoridade única e sofisticada.\t\t      |\n");
								printf("|\tAs letras de Caetano em Transa são poéticas e carregadas de significado. Elas abordam temas como amor,        |\n| política, ");
								printf("identidade e a busca por liberdade pessoal e artística. A faixa de abertura, You Don't Know Me, é um      |\n|");
								printf(" exemplo brilhante dessa fusão musical e lírica, com uma letra em inglês que expressa uma mistura de emoções e       |\n| questionamentos.\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Faixas:                                             \t\t\t\t\t\t\t\t      |\n");
								printf("| A1 You Don't Know Me                                \t\t\t\t\t\t\t\t      |\n");
								printf("| A2 Nine Out Of Ten                                  \t\t\t\t\t\t\t\t      |\n");
								printf("| A3 Triste Bahia                                     \t\t\t\t\t\t\t\t      |\n");
								printf("| B1 It's A Long Way                                  \t\t\t\t\t\t\t\t      |\n");
								printf("| B2 Mora Na Filosofia                                \t\t\t\t\t\t\t\t      |\n");
								printf("| B3 Neolithic Man                                    \t\t\t\t\t\t\t\t      |\n");
								printf("| B4 Nostalgia (That's What Rock'n Roll Is All About) \t\t\t\t\t\t\t\t      |\n");
								printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| 0 - Para voltar para os discos                      \t\t\t\t\t\t\t\t      |\n");
								printf("| Opção:                                              \t\t\t\t\t\t\t\t      |\n");
								for(int i=1;i<=7;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
 								coord.X = x=9;
    							coord.Y = y=21;
   								SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
								scanf("%d", &disco);
								system("cls");
							}
							break;
						}
						case 4:
						{
							while(disco!=0){
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
								printf("|\t\t\t\t    4 - Erasmo Carlos - Carlos, Erasmo (1971)\t\t\t\t\t      |\n");
								printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("|\tNeste álbum, Erasmo Carlos apresenta uma sonoridade que mescla influências do rock, soul, funk e música       |\n| brasileira. ");
								printf("Com arranjos sofisticados e uma produção impecável, Carlos, Erasmo! captura a essência da música        |\n| popular ");
								printf("brasileira da época e traz uma abordagem moderna e eletrizante.\t\t\t\t\t      |\n|");
								printf("\tAs letras do álbum são cheias de poesia e expressam uma mistura de amor, liberdade, saudade e reflexões       |\n| sobre a vida. ");
								printf("Erasmo Carlos demonstra sua habilidade como compositor e intérprete, transmitindo\t\t      |\n| emoções e contando histórias por meio de suas letras envolventes.");
								printf("por meio de suas letras envolventes.\t\t      |\n");
								printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Faixas:                                             \t\t\t\t\t\t\t\t      |\n");
								printf("| A1 De Noite Na Cama                                 \t\t\t\t\t\t\t\t      |\n");
								printf("| A2 Masculino, Feminino                              \t\t\t\t\t\t\t\t      |\n");
								printf("| A3 É Preciso Dar Um Jeito, Meu Amigo                \t\t\t\t\t\t\t\t      |\n");
								printf("| A4 Dois Animais Na Selva Suja Da Rua                \t\t\t\t\t\t\t\t      |\n");
								printf("| A5 Gente Aberta                                     \t\t\t\t\t\t\t\t      |\n");
								printf("| A6 Agora Ninguém Chora Mais                         \t\t\t\t\t\t\t\t      |\n");
								printf("| B1 Sodoma E Gomorra                                 \t\t\t\t\t\t\t\t      |\n");
								printf("| B2 Mundo Deserto                                    \t\t\t\t\t\t\t\t      |\n");
								printf("| B3 Não Te Quero Santa                               \t\t\t\t\t\t\t\t      |\n");
								printf("| B4 Ciça, Cecília                                    \t\t\t\t\t\t\t\t      |\n");
								printf("| B5 Em Busca Das Canções Perdidas Nº 2               \t\t\t\t\t\t\t\t      |\n");
								printf("| B6 26 Anos De Vida Normal                           \t\t\t\t\t\t\t\t      |\n");
								printf("| B7 Maria Joana                                      \t\t\t\t\t\t\t\t      |\n");
								printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| 0 - Para voltar para os discos                      \t\t\t\t\t\t\t\t      |\n");
								printf("| Opção:                                              \t\t\t\t\t\t\t\t      |\n");
								for(int i=1;i<=2;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
 								coord.X = x=9;
    							coord.Y = y=26;
   								SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);				
								scanf("%d", &disco);
								system("cls");							
							}
							break;
						}
						case 5:
						{
							while(disco!=0){
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
								printf("|\t\t\t\t\t5 - Arnaldo Baptista - Loki? (1974)\t\t\t\t\t      |\n");
								printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("|\tLoki? apresenta uma abordagem musical inovadora, combinando elementos do rock psicodélico, progressivo e      |\n| experimental.");
								printf(" Arnaldo Baptista, ex-integrante dos Mutantes, utiliza sua genialidade musical para criar um álbum     |\n| repleto");
								printf(" de arranjos complexos, melodias cativantes e uma dose única de experimentação sonora.\t\t\t      |\n|");
								printf("\tAs letras de Loki? são profundas e introspectivas, revelando a complexidade emocional e a turbulência         |\n| interior do próprio Arnaldo. ");
								printf("Elas tratam de temas como amor, loucura, liberdade e espiritualidade, refletindo as    |\n| experiências e os desafios pessoais enfrentados pelo artista.\t\t\t\t\t\t\t      |\n");
								printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Faixas:                                             \t\t\t\t\t\t\t\t      |\n");
								printf("| A1 Será Que Eu Vou Virar Bolor?                     \t\t\t\t\t\t\t\t      |\n");
								printf("| A2 Uma Pessoa Só                                    \t\t\t\t\t\t\t\t      |\n");
								printf("| A3 Não Estou Nem Aí                                 \t\t\t\t\t\t\t\t      |\n");
								printf("| A4 Vou Me Afundar Na Lingerie                       \t\t\t\t\t\t\t\t      |\n");
								printf("| A5 Honky Tonky                                      \t\t\t\t\t\t\t\t      |\n");
								printf("| B1 Cê Tá Pensando Que Eu Sou Loki?                  \t\t\t\t\t\t\t\t      |\n");
								printf("| B2 Desculpe                                         \t\t\t\t\t\t\t\t      |\n");
								printf("| B3 Navegar De Novo                                  \t\t\t\t\t\t\t\t      |\n");
								printf("| B4 Te Amo Podes Crer                                \t\t\t\t\t\t\t\t      |\n");
								printf("| B5 É Fácil                                          \t\t\t\t\t\t\t\t      |\n");
								printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| 0 - Para voltar para os discos                      \t\t\t\t\t\t\t\t      |\n");
								printf("| Opção:                                              \t\t\t\t\t\t\t\t      |\n");
								for(int i=1;i<=5;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
 								coord.X = x=9;
    							coord.Y = y=23;
   								SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
								scanf("%d", &disco);
								system("cls");
							}
							break;
						}
						case 6:
						{
							while(disco!=0){
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
								printf("|\t\t\t\t\t6 - Rita Lee - Entradas e Bandeiras (1976)\t\t\t\t      |\n");
								printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("|\tAs letras do álbum são reflexivas e cheias de personalidade, revelando a inteligência e o humor\t\t      |\n| característicos de Rita Lee. ");
								printf("Ela aborda temas como amor, liberdade, sociedade e sua própria identidade como artista |\n| mostrando uma consciência afiada ");
								printf("e uma visão crítica do mundo ao seu redor.\t\t\t\t\t      |\n");
								printf("|\tO álbum contém músicas marcantes, como Coisas da Vida, Bruxa Amarela e a faixa-título Entradas e Bandeiras.   |\n| ");
								printf("Essas canções evidenciam o talento de Rita Lee em criar melodias cativantes e letras memoráveis, que se tornaram    |\n| ");
								printf("verdadeiros clássicos da música brasileira.\t\t\t\t\t\t\t\t              |\n");
								printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Faixas:                                             \t\t\t\t\t\t\t\t      |\n");
								printf("| A1 Corista De Rock                                  \t\t\t\t\t\t\t\t      |\n");
								printf("| A2 Lady Babel                                       \t\t\t\t\t\t\t\t      |\n");
								printf("| A3 Coisas Da Vida                                   \t\t\t\t\t\t\t\t      |\n");
								printf("| A4 Bruxa Amarela                                    \t\t\t\t\t\t\t\t      |\n");
								printf("| A5 Departamento De Criação                          \t\t\t\t\t\t\t\t      |\n");
								printf("| B1 Superstafa                                       \t\t\t\t\t\t\t\t      |\n");
								printf("| B2 Com A Boca No Mundo (Tico-Tico)                  \t\t\t\t\t\t\t\t      |\n");
								printf("| B3 Posso Contar Comigo                              \t\t\t\t\t\t\t\t      |\n");
								printf("| B4 Troca-Toca                                       \t\t\t\t\t\t\t\t      |\n");
								printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| 0 - Para voltar para os discos                      \t\t\t\t\t\t\t\t      |\n");
								printf("| Opção:                                              \t\t\t\t\t\t\t\t      |\n");
								for(int i=1;i<=6;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
 								coord.X = x=9;
    							coord.Y = y=22;
   								SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
								scanf("%d", &disco);
								system("cls");
							}
							break;
						}
						case 7:
						{
							while(disco!=0){
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
								printf("|\t\t\t\t\t7 - Jorge Ben - Samba Esquema Novo (1963)\t\t\t\t      |\n");
								printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("|\tSamba Esquema Novo apresenta uma fusão inovadora de ritmos brasileiros, como o samba, o bossa nova\t      |\n| ");
								printf("e o samba-rock, com influências do jazz e do rhythm and blues. A sonoridade contagiante do álbum é resultado\t      |\n| ");
								printf("da genialidade musical de Jorge Ben, que combina batidas animadas com arranjos sofisticados e melodias cativantes.  |\n");
								printf("|\tAs letras de Jorge Ben em Samba Esquema Novo são inteligentes e repletas de poesia, abordando uma\t      |\n| ");
								printf("variedade de temas, desde o amor e a alegria de viver até reflexões sobre a cultura brasileira e a sociedade. Suas  |\n| ");
								printf("letras exalam otimismo e uma atitude positiva, características que se tornariam marcas registradas de sua carreira. |\n");
								printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Faixas:                                             \t\t\t\t\t\t\t\t      |\n");
								printf("| A1 Mas, Que Nada!                                   \t\t\t\t\t\t\t\t      |\n");
								printf("| A2 Tim Dom Dom                                      \t\t\t\t\t\t\t\t      |\n");
								printf("| A3 Balança Pema                                     \t\t\t\t\t\t\t\t      |\n");
								printf("| A4 Vem Morena                                       \t\t\t\t\t\t\t\t      |\n");
								printf("| A5 Chove Chuva                                      \t\t\t\t\t\t\t\t      |\n");
								printf("| A6 É Só Sambar                                      \t\t\t\t\t\t\t\t      |\n");
								printf("| B1 Rosa, Menina Rosa                                \t\t\t\t\t\t\t\t      |\n");
								printf("| B2 Quero Esquecer Você                              \t\t\t\t\t\t\t\t      |\n");
								printf("| B3 Uála Uálalá                                      \t\t\t\t\t\t\t\t      |\n");
								printf("| B4 A Tamba                                          \t\t\t\t\t\t\t\t      |\n");
								printf("| B5 Menina Bonita Não Chora                          \t\t\t\t\t\t\t\t      |\n");
								printf("| B6 Por Causa De Você, Menina                        \t\t\t\t\t\t\t\t      |\n");
								printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| 0 - Para volar para os discos                       \t\t\t\t\t\t\t\t      |\n");
								printf("| Opção:                                              \t\t\t\t\t\t\t\t      |\n");
								for(int i=1;i<=3;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
 								coord.X = x=9;
    							coord.Y = y=25;
   								SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
								scanf("%d", &disco);
								system("cls");
							}	
							break;
						}
						case 8:
						{
							while(disco!=0){
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
								printf("|\t\t\t\t\t8 - Secos e Molhados - Secos e Molhados (1973)\t\t\t\t      |\n");
								printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("|\tSecos e Molhados apresenta uma mistura única de estilos musicais, combinando elementos do rock progressivo,   |\n| ");
								printf("da música folclórica brasileira e da música popular. A sonoridade do álbum é caracterizada por arranjos ricos e     |\n| ");
								printf("elaborados, com harmonias vocais marcantes e uma ampla gama de instrumentação, que inclui violões, violinos,\t      |\n| ");
								printf("flautas e até mesmo um berimbau.\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("|\tAs letras do disco são marcantes e líricas, tratando de temas universais como amor, vida, morte, política     |\n| e liberdade. ");
								printf("Elas são escritas de maneira poética e simbólica, convidando o ouvinte a uma viagem metafórica\t      |\n| e introspectiva. ");
								printf("A voz intensa e dramática de Ney Matogrosso, o vocalista do grupo, dá vida às letras e adiciona    |\n| um toque teatral à performance.\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Faixas:                                             \t\t\t\t\t\t\t\t      |\n");
								printf("| A1 Sangue Latino                                    \t\t\t\t\t\t\t\t      |\n");
								printf("| A2 O Vira                                           \t\t\t\t\t\t\t\t      |\n");
								printf("| A3 O Patrão Nosso De Cada Dia                       \t\t\t\t\t\t\t\t      |\n");
								printf("| A4 Amor                                             \t\t\t\t\t\t\t\t      |\n");
								printf("| A5 Primavera Nos Dentes                             \t\t\t\t\t\t\t\t      |\n");
								printf("| B1 Assim Assado                                     \t\t\t\t\t\t\t\t      |\n");
								printf("| B2 Mulher Barriguda                                 \t\t\t\t\t\t\t\t      |\n");
								printf("| B3 El Rey                                           \t\t\t\t\t\t\t\t      |\n");
								printf("| B4 Rosa De Hiroshima                                \t\t\t\t\t\t\t\t      |\n");
								printf("| B5 Prece Cósmica                                    \t\t\t\t\t\t\t\t      |\n");
								printf("| B6 Rondó Do Capitão                                 \t\t\t\t\t\t\t\t      |\n");
								printf("| B7 As Andorinhas                                    \t\t\t\t\t\t\t\t      |\n");
								printf("| B8 Fala                                             \t\t\t\t\t\t\t\t      |\n");
								printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| 0 - Para voltar para os discos                      \t\t\t\t\t\t\t\t      |\n");
								printf("| Opção:                                              \t\t\t\t\t\t\t\t      |\n");
								for(int i=1;i<=119;i++){
									printf("=");
								}
 								coord.X = x=9;
    							coord.Y = y=28;
   								SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
								scanf("%d", &disco);
								system("cls");
							}
							break;
						}
						case 9:
						{
							while(disco!=0){
								for(int i=1;i<=119;i++){
									printf("=");
								}
								printf("\n");
								printf("|\t\t\t\t\t\t9 - Tim Maia - Tim Maia (1976)\t\t\t\t\t      |\n");
								printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("|\tTim Maia 1976 apresenta uma fusão irresistível de diversos gêneros musicais, incluindo soul, funk, música     |\n| brasileira ");
								printf("e até mesmo influências do rock. Com sua voz poderosa e inconfundível, Tim Maia entrega performances     |\n| ");
								printf("vocais marcantes que capturam a essência de suas letras envolventes.\t\t\t\t\t\t      |\n");
								printf("|\tAs letras do álbum são um destaque, abordando temas universais como amor, relacionamentos, questões sociais   |\n| e espirituais. ");
								printf("Com seu estilo autêntico e direto, Tim Maia transmite mensagens emocionantes e reflexivas,\t      |\n| conectando-se com o público em um nível profundo.\t\t\t\t\t\t\t\t      |\n");
								printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| Faixas:                                              \t\t\t\t\t\t\t\t      |\n");
								printf("| A1 Dance Enquanto É Tempo                            \t\t\t\t\t\t\t\t      |\n");
								printf("| A2 É Preciso Amar                                    \t\t\t\t\t\t\t\t      |\n");
								printf("| A3 Rodésia                                           \t\t\t\t\t\t\t\t      |\n");
								printf("| A4 Márcio Leonardo E Telmo                           \t\t\t\t\t\t\t\t      |\n");
								printf("| A5 Sentimental                                       \t\t\t\t\t\t\t\t      |\n");
								printf("| A6 Nobody Can Live Forever                           \t\t\t\t\t\t\t\t      |\n");
								printf("| B1 Me Enganei                                        \t\t\t\t\t\t\t\t      |\n");
								printf("| B2 Manhã De Sol Florida, Cheia De Coisas Maravilhosas\t\t\t\t\t\t\t\t      |\n");
								printf("| B3 Brother, Father, Sister And Mother                \t\t\t\t\t\t\t\t      |\n");
								printf("| B4 Batata Frita, O Ladrão De Bicicleta               \t\t\t\t\t\t\t\t      |\n");
								printf("| B5 The Dance Is Over                                 \t\t\t\t\t\t\t\t      |\n");
								printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");
								printf("| 0 - Para voltar para os discos                       \t\t\t\t\t\t\t\t      |\n");
								printf("| Opção:                                               \t\t\t\t\t\t\t\t      |\n");
								for(int i=1;i<=4;i++){
									printf("|\t\t\t\t\t\t\t\t\t\t\t\t\t\t      |\n");	
								}
								for(int i=1;i<=119;i++){
									printf("=");
								}
 								coord.X = x=9;
    							coord.Y = y=24;
   								SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
								scanf("%d", &disco);
								system("cls");
							}	
							break;
						}
					}
				}
				break;
			}
			case 0:
			{
				for(int i = 1; i <=118; i++){
					printf("=");
				}
				printf("=\n");
				printf("|\t\t\t\t\t\t\t\t\t                OOOOOOOOOOO \t\t      |\n");
				printf("|\t\t\t\t\t\t\t\t\t            OOOO-----------OOOOO\t      |\n");
				printf("|\t\t\t\t\t\t\t\t\t         OOOOO/OOOOOOOOOOOOOO\\OOOOO\t      |\n");
				printf("|\t\t\t\t\t\t\t\t\t       OOOOO/OOOOOOOOOOOOOOOOOOO\\OOOO\t      |\n");
				printf("|\t\t\t\t\t\t\t\t\t     OOOO/OOOOOOOOOOOOOOOOOOOOOOOO\\OOOO\t      |\n");
				printf("|");
				printf("\t\t\t\t\t\t\t Discalço\t    OOO/OOOOOOOO------------OOOOOOOO\\OOO      |\n");
				printf("|\t\t\t\t\t\t\t\t\t   OO/OOOOOOOO/OOOOOOOOOOOOOO\\OOOOOOO\\OO      |\n");
				printf("|\t\t\t\t\t\t    Sua loja de discos     OO|OOOOOOO/OOOOOOOOOOOOOOOO\\OOOOOOO|OO     |\n");
				printf("|\t\t\t\t\t\t\t de vinil \t  OOO|OOOOOO|OOOOOOO     OOOOOO|OOOOOO|OOO    |\n");
				printf("|              OOOOOOOOOOOOO\t\t\t\t\t\t  OOO|OOOOOO|OOOOOO   O   OOOOO|OOOOOO|OOO    |\n");
	    		printf("|           OOO-------------OOOO\t\t\t\t\t  OOO|OOOOOO|OOOOOOO     OOOOOO|OOOOOO|OOO    |\n");
	    		printf("|        OOOO/OOOOOOOOOOOOOOO\\OOOOO\t\t\t\t\t   OO|OOOOOOO\\OOOOOOOOOOOOOOOO/OOOOOOO|OO     |\n");
	    		printf("|      OOOO/OOO-------------OOOO\\OOOO\t\t\t\t\t   OO\\OOOOOOOO\\OOOOOOOOOOOOOO/OOOOOOO/OO      |\n");
	    		printf("|    OOOO/OOO/OOOOOOOOOOOOOOO\\OOOO\\OOOO\t\t\t\t\t    OOO\\OOOOOOOO------------OOOOOOOO/OOO      |\n");
	    		printf("|   OOO/OOO/OOOO------------OOOO\\OOO\\OOO\t\t\t\t     OOOO\\OOOOOOOOOOOOOOOOOOOOOOOO/OOOO       |\n");
	    		printf("|  OO/OOOO/OOO/OOOOOOOOOOOOOO\\OOO|OOO\\OO\t\t\t\t       OOOO\\OOOOOOOOOOOOOOOOOOOO/OOOO         |\n");
	    		printf("|  OO|OOO|OOO/OOOOO       OOOO\\OOO|OOO|OO\t\t\t\t         OOOOO\\OOOOOOOOOOOOOO/OOOOO           |\n");
	    		printf("| OOO|OOO|OO|OOOOO         OOOO|OOO|OO|OOO\t\t\t\t            OOOO------------OOOOO             |\n");
	    		printf("| OOO|OOO|OO|OOOO     O     OOO|OOO|OO|OOO\t\t\t\t                OOOOOOOOOOOO                  |\n");
	    		printf("| OOO|OOO|OO|OOOOO         OOOO|OOO|OO|OOO\t\t\t\t\t\t\t\t\t      |\n");
	    		printf("|  OO|OOO|OOO\\OOOOO       OOOO/OOO|OOO|OO\t\t\t\t\t\t\t\t\t      |\n");
	    		printf("|  OO\\OOOO\\OOO\\OOOOOOOOOOOOOO/OOO/OOO/OO\t\t OBRIGADO\t\t\t\t\t\t      |\n");
	    		printf("|   OOO\\OOO\\OOOO------------OOOO/OOO/OOO\t\t   PELA\t\t\t\t\t\t\t      |\n");
	    		printf("|    OOOO\\OOO\\OOOOOOOOOOOOOOOOO/OO/OOOO\t\t       PREFERENCIA!\t\t\t\t\t\t      |\n");
	    		printf("|      OOOO\\OOO---------------OOO/OOOO\t\t\t\t\t\t\t\t\t\t      |\n");
	    		printf("|        OOOO\\OOOOOOOOOOOOOOOO/OOOO\t\t\t\t\t\t\t\t\t\t      |\n");
				printf("|           OOOO-------------OOOO\t\t\t\t\t\t\t\t\t\t      |\n");
				printf("|               OOOOOOOOOOOOO\t\t\t\t\t\t\t\t\t\t\t      |\n");
				for(int i = 1; i <=119; i++){
					printf("=");
				}
				break;
			}
			default:
			{
				system("cls");
				printf("Insira uma opção válida.\a\n");
				
				for (int i=1 ; i<1000000000 ; i++) ;
			}
		}
	}
	while(opcao!=0);
	coord.X = x=42;
   	coord.Y = y=28;
   	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
   	system("pause");
	return 0;
}