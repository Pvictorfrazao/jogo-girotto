#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


int main(void) {
setlocale(LC_ALL, "Portuguese");
int escolha_menu;
int continuar_jogo1 = 0;
int continuar_jogo2 = 0;
int continuar_jogo3 = 0;  
while((continuar_jogo1 == 0) && (continuar_jogo2 == 0) && (continuar_jogo3 == 0)){
	
	
  printf("*  ###                                            ##                 ### *\n");  
  printf("*   ##                                                                ## *\n");
  printf("*   ##       ####    ##  ##            ##  ##    ###     #####        ##    #### *\n");
  printf("*   #####   ##  ##   #######           ##  ##     ##     ##  ##    #####   ##  ## *\n");
  printf("*   ##  ##  ######   ## # ##           ##  ##     ##     ##  ##   ##  ##   ##  ## *\n");
  printf("*   ##  ##  ##       ##   ##            ####      ##     ##  ##   ##  ##   ##  ## *\n");
  printf("*  ######    #####   ##   ##             ##      ####    ##  ##    ######   #### *\n \n \n \n");
  printf("|==================================================================================|\n \n \n");
  printf(" 1. SHOW DO MEIO MILHÃO \n 2. COBRA NA CAIXA! \n 3. GOUSMAS WAR \n \n \n");
  printf("|==============================================================================|\n \n");
  printf("O QUE VOCÊ DESEJA FAZER? (1, 2, 3 OU 4 (sair)): ");
   scanf("%d", &escolha_menu);
  while((escolha_menu>4) || (escolha_menu<1)){

    printf(" escolha inválida \n tente novamente.\n");
    printf("O QUE VOCÊ DESEJA FAZER? (1, 2, 3 OU 4 (sair)): ");
     scanf("%d", &escolha_menu);
  
    }

    system("cls || clear");
    
  switch(escolha_menu){  
    
  	  case (1):
		
continuar_jogo1 = 1;				
	 char resp,inicio;
	 char cert='s';
	 char nome[40];
	 int certo_1=0,errado_1=0,contp_1=1,totp_1=1;
	 int certo_2=0,errado_2=0,contp_2=1,totp_2=1;
	 int certo_3=0,errado_3=0,contp_3=1,totp_3=1;
	 while(continuar_jogo1 == 1){ 	
	 printf("BEM VINDO AO SHOW DO MEIO MILHÃO!");
	 printf ("\ndigite o seu nome e aperte \"enter\".\n\n");
	printf ("\nnome do participante : ");
	fflush(stdin);
	gets(nome);
	system("cls||clear");
	printf ("\nSEJA BEM VINDO \"%s\"\n",nome);
	printf ("-------------------------------------------------------------------------------\n");
	printf ("Este e um jogo divertido de perguntas e respostas. O jogador devera escolher\n");
	printf ("dentre as 4 alternativas apenas uma e em seguida pressionar \"enter\".\n\n");
	printf ("-------------------------------------------------------------------------------\n");
	printf ("bom jogo\n\n");
//pergunta 1 
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system ("cls || clear");
printf ("*--------------------------------*\n");
printf ("|  Pergunta n. %.2d  |\n",contp_1++);
printf ("*--------------------------------*\n\n");
printf ("Que animal brasileiro está presente na nota de dez reais?\n");
printf ("A) jabuti\n");
printf ("B) onça\n");
printf ("C) arara\n");
printf ("D) tucano\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='c')||(resp=='C'))
{
printf ("Resposta correta\n");
certo_1++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"c\"\n");
errado_1++;
}
printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls||clear");
  //perguta 2 
printf ("*--------------------------------*\n");
printf ("|  Pergunta n. %.2d  |\n",contp_1++);
printf ("*--------------------------------*\n\n");
printf ("quingentésimo corresponde a qual número?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) 500\n");
printf ("B) 5000\n");
printf ("C) 50\n");
printf ("D) 15\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='a')||(resp=='A'))
{
printf ("Resposta correta\n");
certo_1++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"a\"\n");
errado_1++;
}
//pergunta 3 
  printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls||clear"); 
printf ("*--------------------------------*\n");
printf ("|  Pergunta n. %.2d  |\n",contp_1++);
printf ("*--------------------------------*\n\n");
printf ("qual flor é o simbolo nacional do Egito e foi considerada sagrada na antiguidade?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) rosa\n");
printf ("B) lírio\n");
printf ("C) jasmim\n");
printf ("D) lotús\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='d')||(resp=='D'))
{
printf ("Resposta correta\n");
certo_1++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"D\"\n");
errado_1++;
}
//pergunta 4 
  printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls||clear"); 
printf ("*--------------------------------*\n");
printf ("|  Pergunta n. %.2d  |\n",contp_1++);
printf ("*--------------------------------*\n\n");
printf ("como é conhecido o inventor da lampada elétrica?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) Thomas Jefferson\n");
printf ("B) Thomas de Aquino\n");
printf ("C) Thomas Edison\n");
printf ("D) Elon Musk\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='c')||(resp=='C'))
{
printf ("Resposta correta\n");
certo_1++;
}
else
{
	
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"C\"\n");
errado_1++;
}
  //pergunta 5
  printf ("-------------------------------------------------------------------------------\n");
getchar();printf ("Pressione \"enter\" para continuar...");
getchar();system("cls||clear"); 
printf ("*--------------------------------*\n");
printf ("|  Pergunta n. %.2d  |\n",contp_1++);
printf ("*--------------------------------*\n\n");
printf ("Qual é o nome do triangulo que tem todos os lados diferentes?\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("A) Equilatero\n");
printf ("B) Isóceles\n");
printf ("C) Escaleno\n");
printf ("D) Retangulo\n");
printf ("-------------------------------------------------------------------------------\n");
printf ("Qual a resposta certa?\n");
scanf ("%s",&resp);
if ((resp=='c')||(resp=='C'))
{
printf ("Resposta correta\n");
certo_1++;
}
else
{
printf ("Resposta errada\n");
printf ("Resposta correta: Letra \"C\"\n");
errado_1++;
}
  printf("%s acertou: %d\n", nome, certo_1);
  printf("%s errou: %d\n", nome, errado_1);


	printf("O que voce deseja fazer? \n");
	printf("Continuar jogando (1) \n");
	printf("Voltar ao menu principal (0) \n");
	printf("R: ");
	scanf("%d", &continuar_jogo1);
	system("cls || clear");
		}
   continuar_jogo1 = 0;
      system("cls || clear");
      break;
  
      case (2):
      	continuar_jogo2 = 1;
  int cobra, caixa1, caixa2, caixa3 , jogador_1, jogador_2, botao, escolha1_1, escolha1_2, escolha2_1, escolha2_2;
  int turno1 = 1;
  int turno2 = 0;
  int turno3 = 0;
  int turno4 = 0;
  int fim = 0;
  char nome1 [40];
  char nome2 [40];

 while(continuar_jogo2 == 1){
srand(time(NULL));
fflush(stdin);
printf("bem vindo ao jogo cobra na caixa!\n"); 
printf("digite o nome do jogador 1: \n");
 gets(nome1);
printf("digite o nome do jogador 2: \n "); 
 gets(nome2);
  system("cls || clear");
  cobra = 1 + (rand() % 5);
    do {
        botao = 1 + (rand() % 5);
    } while (botao == cobra);
    do {
        caixa1 = 1 + (rand() % 5);
    } while (caixa1 == cobra || caixa1 == botao);
    do {
        caixa2 = 1 + (rand() % 5);
    } while (caixa2 == cobra || caixa2 == botao || caixa2 == caixa1);
    do {
        caixa3 = 1 + (rand() % 5);
    } while (caixa3 == cobra || caixa3 == botao || caixa3 == caixa1 || caixa3 == caixa2);

  printf("cobra: %d \n", cobra);
  printf("botão: %d \n", botao);
  printf("caixa1: %d \n", caixa1);
  printf("caixa2: %d \n", caixa2);
  printf("caixa3: %d \n", caixa3);
  srand(time(NULL));
do{
  jogador_1 = 1 + (rand() % 2);
  jogador_2 = 1 + (rand() % 2);
}while(jogador_1 == jogador_2);
if(jogador_1 > jogador_2){

  printf("%s começa jogando! \n", nome1);
}else{
  printf("%s começa jogando! \n", nome2);
}
getchar();printf ("Pressione \"enter\" para continuar... \n");
  getchar();
   system ("cls || clear");
 
    
  while(fim == 0){

  
  if(jogador_1 > jogador_2){
    turno1 = 1;
 while((turno1 == 1) && (fim == 0)){
 
printf("%s, escolha uma caixa de 1 a 5: ", nome1);
scanf("%d", &escolha1_1); 
   while((1>escolha1_1) && (escolha1_1>5)){
    printf("\n Escolha inválida. \n");
     printf("Tente novamente. \n");
    printf("%s, escolha uma caixa de 1 a 5: ", nome1);
    scanf("%d", &escolha1_1); 
   }
      if(escolha1_1 == cobra){
   printf("dentro dessa caixa havia a cobra! \n");
   printf("O vencedor é: %s \n", nome2);
     
     getchar();printf ("Pressione \"enter\" para continuar... \n");
  getchar();
     system ("cls || clear");
     
     fim = 1;
     break;
     }else if(escolha1_1 == botao){
   printf("dentro dessa caixa havia o botão! \n");
   printf("O vencedor é: %s \n", nome1);
     
     getchar();printf ("Pressione \"enter\" para continuar... \n");
  getchar();
     system ("cls || clear");
     
     fim = 1;
     break;
    }else{
     printf("A caixa está vazia.");
     printf("Próximo jogador.");
     
     printf("\n \n \n \n");
   }
   turno1 = 0;
   turno2 = 1;
   turno3 = 0;
   turno4 = 0;
 } 
  while((turno2 == 1) && (fim == 0)){
  printf("%s, escolha uma caixa de 1 a 5 (fora a %d): ", nome2, escolha1_1);
scanf("%d", &escolha2_1); 
   while(((1>escolha2_1) && (escolha2_1>5)) || (escolha2_1 == escolha1_1)){
    printf("\n Escolha inválida. \n");
     printf("Tente novamente. \n");
    printf("%s, escolha uma caixa de 1 a 5 (fora a %d): ", nome2, escolha1_1);
    scanf("%d", &escolha2_1); 
   }
    if(escolha2_1 == cobra){
   printf("dentro dessa caixa havia a cobra! \n");
   printf("O vencedor é: %s \n", nome1);
     
     getchar();printf ("Pressione \"enter\" para continuar... \n");
  getchar();
     system ("cls || clear");
     
     fim = 1;
     break;
      }else if(escolha2_1 == botao){
   printf("dentro dessa caixa havia o botão! \n");
   printf("O vencedor é: %s \n", nome2);
     
     getchar();printf ("Pressione \"enter\" para continuar... \n");
  getchar();
     system ("cls || clear");
     
     fim = 1;
     break;
      }else{
     printf("A caixa está vazia.");
     printf("Próximo jogador.");

     printf("\n \n \n \n");
   }


   turno1 = 0;
   turno2 = 0;
   turno3 = 1;
   turno4 = 0;
 } 
  while((turno3 == 1) && (fim == 0)){
printf("%s, escolha uma caixa de 1 a 5 (fora as %d e %d): ", nome1, escolha1_1, escolha2_1);
scanf("%d", &escolha1_2); 
   while(((1>escolha1_2) && (escolha1_2>5)) || (escolha1_2 == escolha1_1) || (escolha1_2 == escolha2_1)){
    printf("\n Escolha inválida. \n");
     printf("Tente novamente. \n");
    printf("%s, escolha uma caixa de 1 a 5 (fora as %d e %d): ", nome1, escolha1_1, escolha2_1);
    scanf("%d", &escolha1_2); 
   }
    if(escolha1_2 == cobra){
   printf("dentro dessa caixa havia a cobra! \n");
   printf("O vencedor eh: %s \n", nome2);
     
     getchar();printf ("Pressione \"enter\" para continuar... \n");
  getchar();
     system ("cls || clear");
     
     fim = 1;
     break;
      }else if(escolha1_2 == botao){
   printf("dentro dessa caixa havia o botão! \n");
   printf("O vencedor é: %s \n", nome1);
     
     getchar();printf ("Pressione \"enter\" para continuar... \n");
  getchar();
     system ("cls || clear");
     
     fim = 1;
     break;
      }else{
     printf("A caixa está vazia.");
     printf("Próximo jogador.");

     printf("\n \n \n \n");
   }


   turno1 = 0;
   turno2 = 0;
   turno3 = 0;
   turno4 = 1;
    
  }
    while ((turno4 == 1) && (fim == 0)){

      printf("%s, escolha uma caixa de 1 a 5 (fora as %d, %d e %d): ", nome2, escolha1_1, escolha2_1, escolha1_2);
      scanf("%d", &escolha2_2); 
   while(((1>escolha2_2) && (escolha2_2>5)) || (escolha2_2 == escolha1_1) || (escolha2_2 == escolha2_1) || (escolha2_2 == escolha1_2)){
    printf("\n Escolha inválida. \n");
     printf("Tente novamente. \n");
    printf("%s, escolha uma caixa de 1 a 5 (fora as %d, %d e %d): ", nome2, escolha1_1, escolha2_1, escolha1_2);
    scanf("%d", &escolha2_2); 
   }
    if(escolha2_2 == cobra){
   printf("dentro dessa caixa havia a cobra! \n");
   printf("O vencedor eh: %s \n", nome1);
     
     getchar();printf ("Pressione \"enter\" para continuar... \n");
  getchar();
     system ("cls || clear");
     
     fim = 1;
     break;
      }else if(escolha2_2 == botao){
   printf("dentro dessa caixa havia o botão! \n");
   printf("O vencedor é: %s \n", nome2);
     
     getchar();printf ("Pressione \"enter\" para continuar... \n");
  getchar();
     system ("cls || clear");
     
     fim = 1;
     break;
}

   turno1 = 1;
   turno2 = 0;
   turno3 = 0;
   turno4 = 0;
      
    
  }
  }else{
     turno1 = 1;
 while((turno1 == 1) && (fim == 0)){
 
printf("%s, escolha uma caixa de 1 a 5: ", nome2);
scanf("%d", &escolha2_1); 
   while((1>escolha2_1) && (escolha2_1>5)){
    printf("\n Escolha inválida. \n");
     printf("Tente novamente. \n");
    printf("%s, escolha uma caixa de 1 a 5: ", nome2);
    scanf("%d", &escolha2_1); 
   }
      if(escolha2_1 == cobra){
   printf("dentro dessa caixa havia a cobra! \n");
   printf("O vencedor eh: %s \n", nome1);
     
     getchar();printf ("Pressione \"enter\" para continuar... \n");
  getchar();
     system ("cls || clear");
     
     fim = 1;
     break;
     }else if(escolha2_1 == botao){
   printf("dentro dessa caixa havia o botão! \n");
   printf("O vencedor é: %s \n", nome2);
     
     getchar();printf ("Pressione \"enter\" para continuar... \n");
  getchar();
     system ("cls || clear");
     
     fim = 1;
     break;
    }else{
     printf("A caixa está vazia.");
     printf("Próximo jogador.");
     
     printf("\n \n \n \n");
   }
   turno1 = 0;
   turno2 = 1;
   turno3 = 0;
   turno4 = 0;
 } 
  while((turno2 == 1) && (fim == 0)){
  printf("%s, escolha uma caixa de 1 a 5 (fora a %d): ", nome1, escolha2_1);
scanf("%d", &escolha1_1); 
   while(((1>escolha1_1) && (escolha1_1>5)) || (escolha1_1 == escolha2_1)){
    printf("\n Escolha inválida. \n");
     printf("Tente novamente. \n");
    printf("%s, escolha uma caixa de 1 a 5 (fora a %d): ", nome1, escolha2_1);
    scanf("%d", &escolha1_1); 
   }
    if(escolha1_1 == cobra){
   printf("dentro dessa caixa havia a cobra! \n");
   printf("O vencedor é: %s \n", nome2);
     
     getchar();printf ("Pressione \"enter\" para continuar... \n");
  getchar();
     system ("cls || clear");
     
     fim = 1;
     break;
      }else if(escolha1_1 == botao){
   printf("dentro dessa caixa havia o botão! \n");
   printf("O vencedor é: %s \n", nome1);
     
     getchar();printf ("Pressione \"enter\" para continuar... \n");
  getchar();
     system ("cls || clear");
     
     fim = 1;
     break;
      }else{
     printf("A caixa está vazia.");
     printf("Próximo jogador.");

     printf("\n \n \n \n");
   }


   turno1 = 0;
   turno2 = 0;
   turno3 = 1;
   turno4 = 0;
 } 
  while((turno3 == 1) && (fim == 0)){
printf("%s, escolha uma caixa de 1 a 5 (fora as %d e %d): ", nome2, escolha2_1, escolha1_1);
scanf("%d", &escolha2_2); 
   while(((1>escolha2_2) && (escolha2_2>5)) || (escolha2_2 == escolha1_1) || (escolha2_2 == escolha2_1)){
    printf("\n Escolha invalida. \n");
     printf("Tente novamente. \n");
    printf("%s, escolha uma caixa de 1 a 5 (fora as %d e %d): ", nome2, escolha2_1, escolha1_1);
    scanf("%d", &escolha2_2); 
   }
    if(escolha2_2 == cobra){
   printf("dentro dessa caixa havia a cobra! \n");
   printf("O vencedor eh: %s \n", nome1);
     
     getchar();printf ("Pressione \"enter\" para continuar... \n");
  getchar();
     system ("cls || clear");
     
     fim = 1;
     break;
      }else if(escolha2_2 == botao){
   printf("dentro dessa caixa havia o botão! \n");
   printf("O vencedor eh: %s \n", nome2);
     
     getchar();printf ("Pressione \"enter\" para continuar... \n");
  getchar();
     system ("cls || clear");
     
     fim = 1;
     break;
      }else{
     printf("A caixa está vazia.");
     printf("Próximo jogador.");

     printf("\n \n \n \n");
   }


   turno2 = 0;
   turno1 = 0;
   turno3 = 0;
   turno4 = 1;
    
  }
    while ((turno4 == 1) && (fim == 0)){

      printf("%s, escolha uma caixa de 1 a 5 (fora as %d, %d e %d): ", nome1, escolha2_1, escolha1_1, escolha2_2);
      scanf("%d", &escolha1_2); 
   while(((1>escolha1_2) && (escolha1_2>5)) || (escolha1_2 == escolha1_1) || (escolha1_2 == escolha2_1) || (escolha1_2 == escolha2_2)){
    printf("\n Escolha inválida. \n");
     printf("Tente novamente. \n");
    printf("%s, escolha uma caixa de 1 a 5 (fora as %d, %d e %d): ", nome1, escolha2_1, escolha1_1, escolha2_2);
    scanf("%d", &escolha1_2); 
   }
    if(escolha1_2 == cobra){
   printf("dentro dessa caixa havia a cobra! \n");
   printf("O vencedor é: %s \n", nome2);
     
     getchar();printf ("Pressione \"enter\" para continuar... \n");
  getchar();
     system ("cls || clear");
     
     fim = 1;
     break;
      }else if(escolha1_2 == botao){
   printf("dentro dessa caixa havia o botão! \n");
   printf("O vencedor é: %s \n", nome1);
     
     getchar();printf ("Pressione \"enter\" para continuar... \n");
  getchar();
     system ("cls || clear");
     
     fim = 1;
     break;
}

   turno1 = 1;
   turno2 = 0;
   turno3 = 0;
   turno4 = 0;
      
    
  }
  }
  }

   
  printf("O que você deseja fazer? \n");
	printf("Continuar jogando (1) \n");
	printf("Voltar ao menu principal (0) \n");
	printf("R: ");
	scanf("%d", &continuar_jogo2);
	while((continuar_jogo2 != 1) && (continuar_jogo2 != 0)){
		printf("escolha inválida.");
		printf("\n tente novamente.");
		printf("O que voce deseja fazer? \n");
	printf("Continuar jogando (1) \n");
	printf("Voltar ao menu principal (0) \n");
	printf("R: ");
	scanf("%d", &continuar_jogo2);
	}
	system("cls || clear");
	fim = 0;
   }
   continuar_jogo2 = 0;
   system("cls || clear");
   fim = 0;
  	
   	   	   
  break;
	  case(3):
	  	continuar_jogo3 = 1;
	  	while(continuar_jogo3 == 1){
  	
    unsigned int jogador1, jogador2, escolha1, escolha2, atacar1, atacar2, usar1, usar2, quantDividir1, quantDividir2;
    unsigned int gousmaj1_1 = 1;
    unsigned int furiaj1_1 = 1;
    unsigned int gousmaj1_2 = 1;
    unsigned int furiaj1_2 = 1;
    unsigned int gousmaj2_1 = 1;
    unsigned int furiaj2_1 = 1;
    unsigned int gousmaj2_2 = 1;
    unsigned int furiaj2_2 = 1;
    int fim3 = 0;
    int turno1 = 1;
    int turno2 = 0;
    char nome_1[50];
    char nome_2[50]; 
  	
    srand(time(NULL));
    fflush(stdin);
    printf("bem vindo ao jogo Gousmas War!\n");
    printf("digite o nome do jogador 1: \n");
    gets(nome_1);
    printf("digite o nome do jogador 2: \n "); 
    gets(nome_2); 

    do{
      jogador1 = 1 + (rand() % 2);
      jogador2 = 1 + (rand() % 2);
    }while(jogador1 == jogador2);
    if(jogador1 > jogador2){

      printf("%s começa jogando! \n", nome_1);
    }else{
      printf("%s começa jogando! \n", nome_2);
    }
    getchar();printf ("Pressione \"enter\" para continuar... \n");
    getchar();
    
  
    while(fim3 == 0){
   
      if(jogador1 > jogador2){ //nome1 começa jogando
        turno1 = 1;
        turno2 = 0;
        system ("cls || clear");
        while((turno1 == 1) && (fim3 == 0)){
          printf("Turno de %s !\n", nome_1);
          printf("Suas Gousmas:\n");
          printf("\t Furia gousma 1: %d\n", furiaj1_1);
          printf("\t Furia gousma 2: %d\n", furiaj1_2);
          printf("Gousmas de %s:\n", nome_2);
          printf("\t Furia gousma 1: %d\n", furiaj2_1);
          printf("\t Furia gousma 2: %d\n", furiaj2_2);
          printf("O que deseja fazer?\n");
          if((furiaj1_1 > 0) && (furiaj1_2 > 0)){
          
            printf("Atacar (1)\n");
            printf("R: ");
            scanf("%d", &escolha1);
          
            while(escolha1 != 1){
            system ("cls || clear");
            printf("\n escolha invalida e nao eh possível dividir pois voce ja possui duas gousmas em campo\n");
            printf("Turno de %s !\n", nome_1);
            printf("Suas Gousmas:\n");
            printf("\t Furia gousma 1: %d\n", furiaj1_1);
            printf("\t Furia gousma 2: %d\n", furiaj1_2);
            printf("Gousmas de %s:\n", nome_2);
            printf("\t Furia gousma 1: %d\n", furiaj2_1);
            printf("\t Furia gousma 2: %d\n", furiaj2_2);
            printf("O que deseja fazer?\n");
            printf("Atacar (1)\n");
            printf("R: ");
            scanf("%d", &escolha1);     
          
            
          }
          
          
          
          }else if((furiaj1_1 == 1) || (furiaj1_2 == 1)){
          
            printf("Atacar (1)\n");
            printf("R: ");
            scanf("%d", &escolha1);
          
            while(escolha1 != 1){
            system ("cls || clear");
            printf("\n escolha invalida e nao eh possível dividir gousmas com 1 de furia\n");
            printf("Turno de %s !\n", nome_1);
            printf("Suas Gousmas:\n");
            printf("\t Furia gousma 1: %d\n", furiaj1_1);
            printf("\t Furia gousma 2: %d\n", furiaj1_2);
            printf("Gousmas de %s:\n", nome_2);
            printf("\t Furia gousma 1: %d\n", furiaj2_1);
            printf("\t Furia gousma 2: %d\n", furiaj2_2);
            printf("O que deseja fazer?\n");
            printf("Atacar (1)\n");
            printf("R: ");
            scanf("%d", &escolha1);     
          
            
          }
          }else{  
            printf("Atacar (1) ou Dividir (2)\n");
           printf("R: ");
            scanf("%d", &escolha1);
          
            while((escolha1 < 1) || (escolha1 > 2)){
              system ("cls || clear");
              printf("\n escolha invalida, digite 1 ou 2\n");
              printf("Turno de %s !\n", nome_1);
              printf("Suas Gousmas:\n");
              printf("\t Furia gousma 1: %d\n", furiaj1_1);
              printf("\t Furia gousma 2: %d\n", furiaj1_2);
              printf("Gousmas de %s:\n", nome_2);
              printf("\t Furia gousma 1: %d\n", furiaj2_1);
              printf("\t Furia gousma 2: %d\n", furiaj2_2);
              printf("O que deseja fazer?\n");
              printf("Atacar (1) ou Dividir (2)\n");
              printf("R: ");
              scanf("%d", &escolha1);       
            }
          }
          if(escolha1 == 1){ // escolheu atacar
            if((furiaj2_1 > 0)  && (furiaj2_2 > 0)){


              
            
            printf("escolha qual gousma inimiga deseja atacar: 1 ou 2\n");
            printf("R: ");
            scanf("%d", &atacar1);
            while((atacar1 < 1) || (atacar1 > 2)){
              system ("cls || clear");
              printf("\n escolha invalida, digite 1 ou 2\n");
              printf("Turno de %s !\n", nome_1);
              printf("Suas Gousmas:\n");
              printf("\t Furia gousma 1: %d\n", furiaj1_1);
              printf("\t Furia gousma 2: %d\n", furiaj1_2);
              printf("Gousmas de %s:\n", nome_2);
              printf("\t Furia gousma 1: %d\n", furiaj2_1);
              printf("\t Furia gousma 2: %d\n", furiaj2_2);
              printf("escolha qual gousma inimiga deseja atacar: 1 ou 2\n");
              printf("R: ");
              scanf("%d", &atacar1);
            }
            }else if((furiaj2_1 == 0)  && (furiaj2_2 > 0)){


              
            
            printf("escolha qual gousma inimiga deseja atacar: 2\n");
            printf("R: ");
            scanf("%d", &atacar1);
            while(atacar1 != 2){
              system ("cls || clear");
              printf("\n escolha invalida, so eh possivel atacar a gousma 2 (a gousma 1 ja esta morta)\n");
              printf("Turno de %s !\n", nome_1);
              printf("Suas Gousmas:\n");
              printf("\t Furia gousma 1: %d\n", furiaj1_1);
              printf("\t Furia gousma 2: %d\n", furiaj1_2);
              printf("Gousmas de %s:\n", nome_2);
              printf("\t Furia gousma 1: %d\n", furiaj2_1);
              printf("\t Furia gousma 2: %d\n", furiaj2_2);
              printf("escolha qual gousma inimiga deseja atacar: 2\n");
              printf("R: ");
              scanf("%d", &atacar1);
            }
            }else if((furiaj2_1 > 0)  && (furiaj2_2 == 0)){


              
            
            printf("escolha qual gousma inimiga deseja atacar: 1\n");
            printf("R: ");
            scanf("%d", &atacar1);
            while(atacar1 != 1){
              system ("cls || clear");
              printf("\n escolha invalida, so eh possivel atacar a gousma 1 (a gousma 2 ja esta morta)\n");
              printf("Turno de %s !\n", nome_1);
              printf("Suas Gousmas:\n");
              printf("\t Furia gousma 1: %d\n", furiaj1_1);
              printf("\t Furia gousma 2: %d\n", furiaj1_2);
              printf("Gousmas de %s:\n", nome_2);
              printf("\t Furia gousma 1: %d\n", furiaj2_1);
              printf("\t Furia gousma 2: %d\n", furiaj2_2);
              printf("escolha qual gousma inimiga deseja atacar: 1\n");
              printf("R: ");
              scanf("%d", &atacar1);
            }



              
            }
              if(atacar1 == 1){ //atacou a gousma 1
                if((furiaj1_1 > 0)  && (furiaj1_2 > 0)){


              
            
                  printf("%s, escolha com qual gousma deseja atacar a inimiga: 1 ou 2\n", nome_1);
                  printf("R: ");
                  scanf("%d", &usar1);
                  while((usar1 < 1) || (usar1 > 2)){
                    system ("cls || clear");
                    printf("\n escolha invalida, digite 1 ou 2\n");
                    printf("Turno de %s !\n", nome_1);
                    printf("Suas Gousmas:\n");
                    printf("\t Furia gousma 1: %d\n", furiaj1_1);
                    printf("\t Furia gousma 2: %d\n", furiaj1_2);
                    printf("Gousmas de %s:\n", nome_2);
                    printf("\t Furia gousma 1: %d\n", furiaj2_1);
                    printf("\t Furia gousma 2: %d\n", furiaj2_2);
                    printf("%s, escolha com qual gousma deseja atacar a inimiga: 1 ou 2\n", nome_1);
                    printf("R: ");
                    scanf("%d", &usar1);
                  }
               }else if((furiaj1_1 == 0)  && (furiaj1_2 > 0)){


              
            
                  printf("%s, escolha com qual gousma deseja atacar a inimiga: 2\n", nome_1);
                  printf("R: ");
                  scanf("%d", &usar1);
                  while(usar1 != 2){
                    system ("cls || clear");
                    printf("\n escolha invalida, so eh possivel usar a gousma 2 (a gousma 1 ja esta morta)\n");
                    printf("Turno de %s !\n", nome_1);
                    printf("Suas Gousmas:\n");
                    printf("\t Furia gousma 1: %d\n", furiaj1_1);
                    printf("\t Furia gousma 2: %d\n", furiaj1_2);
                    printf("Gousmas de %s:\n", nome_2);
                    printf("\t Furia gousma 1: %d\n", furiaj2_1);
                    printf("\t Furia gousma 2: %d\n", furiaj2_2);
                    printf("%s, escolha com qual gousma deseja atacar a inimiga (%d): 2\n", nome_1, atacar1);
                    printf("R: ");
                    scanf("%d", &usar1);
                  }
                }else if((furiaj1_1 > 0)  && (furiaj1_2 == 0)){


              
            
                 printf("%s, escolha com qual gousma deseja atacar a inimiga (%d): 1\n", nome_1, atacar1);
                 printf("R: ");
                 scanf("%d", &usar1);
                  while(usar1 != 1){
                    system ("cls || clear");
                    printf("\n escolha invalida, so eh possivel usar a gousma 1 (a gousma 2 ja esta morta)\n");
                    printf("Turno de %s !\n", nome_1);
                    printf("Suas Gousmas:\n");
                    printf("\t Furia gousma 1: %d\n", furiaj1_1);
                    printf("\t Furia gousma 2: %d\n", furiaj1_2);
                    printf("Gousmas de %s:\n", nome_2);
                    printf("\t Furia gousma 1: %d\n", furiaj2_1);
                    printf("\t Furia gousma 2: %d\n", furiaj2_2);
                    printf("%s, escolha com qual gousma deseja atacar a inimiga (%d): 1\n", nome_1, atacar1);
                    printf("R: ");
                    scanf("%d", &usar1);
                  }
                }

              if(usar1 == 1){ // usou a gousma 1
                furiaj2_1 = furiaj2_1 + furiaj1_1;
                if(furiaj2_1 > 5){ //sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj2_1);
                  furiaj2_1 = 0;
                  gousmaj2_1 = 0;
                  printf("A gousma inimiga se autodestruiu.\n");
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  if((gousmaj2_1 == 0) && (gousmaj2_2 == 0)){


                    printf("O oponente nao possui mais nenhuma gousma!\n");
                    printf("O vencedor eh %s !!!", nome_1);
                    getchar();printf ("Pressione \"enter\" para continuar... \n");
                    getchar();
                    fim3 = 1;
                    break;
                  }else{


                    
                  turno1 = 0;
                  turno2 = 1;
                  }
              }else{ //não sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj2_1);
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  turno1 = 0;
                  turno2 = 1;
              }

              
            }else{ //usou a gousma 2
              furiaj2_1 = furiaj2_1 + furiaj1_2;
              if(furiaj2_1 > 5){ //sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj2_1);
                  furiaj2_1 = 0;
                  gousmaj2_1 = 0;
                  printf("A gousma inimiga se autodestruiu.\n");
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  if((gousmaj2_1 == 0) && (gousmaj2_2 == 0)){


                    printf("O oponente nao possui mais nenhuma gousma!\n");
                    printf("O vencedor eh %s !!!\n", nome_1);
                    getchar();printf ("Pressione \"enter\" para continuar... \n");
                    getchar();
                    fim3 = 1;
                    break;
                  }else{


                    
                  turno1 = 0;
                  turno2 = 1;
                  }
              }else{ //não sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj2_1);
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  turno1 = 0;
                  turno2 = 1;
              }
                
            }
              
              
        }else{ //atacou a gousma 2
           if((furiaj1_1 > 0)  && (furiaj1_2 > 0)){


              
            
                  printf("%s, escolha com qual gousma deseja atacar a inimiga: 1 ou 2\n", nome_1);
                  printf("R: ");
                  scanf("%d", &usar1);
                  while((usar1 < 1) || (usar1 > 2)){
                    system ("cls || clear");
                    printf("\n escolha invalida, digite 1 ou 2\n");
                    printf("Turno de %s !\n", nome_1);
                    printf("Suas Gousmas:\n");
                    printf("\t Furia gousma 1: %d\n", furiaj1_1);
                    printf("\t Furia gousma 2: %d\n", furiaj1_2);
                    printf("Gousmas de %s:\n", nome_2);
                    printf("\t Furia gousma 1: %d\n", furiaj2_1);
                    printf("\t Furia gousma 2: %d\n", furiaj2_2);
                    printf("%s, escolha com qual gousma deseja atacar a inimiga: 1 ou 2\n", nome_1);
                    printf("R: ");
                    scanf("%d", &usar1);
                  }
               }else if((furiaj1_1 == 0)  && (furiaj1_2 > 0)){


              
            
                  printf("%s, escolha com qual gousma deseja atacar a inimiga: 2\n", nome_1);
                  printf("R: ");
                  scanf("%d", &usar1);
                  while(usar1 != 2){
                    system ("cls || clear");
                    printf("\n escolha invalida, so eh possivel usar a gousma 2 (a gousma 1 ja esta morta)\n");
                    printf("Turno de %s !\n", nome_1);
                    printf("Suas Gousmas:\n");
                    printf("\t Furia gousma 1: %d\n", furiaj1_1);
                    printf("\t Furia gousma 2: %d\n", furiaj1_2);
                    printf("Gousmas de %s:\n", nome_2);
                    printf("\t Furia gousma 1: %d\n", furiaj2_1);
                    printf("\t Furia gousma 2: %d\n", furiaj2_2);
                    printf("%s, escolha com qual gousma deseja atacar a inimiga (%d): 2\n", nome_1, atacar1);
                    printf("R: ");
                    scanf("%d", &usar1);
                  }
                }else if((furiaj1_1 > 0)  && (furiaj1_2 == 0)){


              
            
                 printf("%s, escolha com qual gousma deseja atacar a inimiga (%d): 1\n", nome_1, atacar1);
                 printf("R: ");
                 scanf("%d", &usar1);
                  while(usar1 != 1){
                    system ("cls || clear");
                    printf("\n escolha invalida, so eh possivel usar a gousma 1 (a gousma 2 ja esta morta)\n");
                    printf("Turno de %s !\n", nome_1);
                    printf("Suas Gousmas:\n");
                    printf("\t Furia gousma 1: %d\n", furiaj1_1);
                    printf("\t Furia gousma 2: %d\n", furiaj1_2);
                    printf("Gousmas de %s:\n", nome_2);
                    printf("\t Furia gousma 1: %d\n", furiaj2_1);
                    printf("\t Furia gousma 2: %d\n", furiaj2_2);
                    printf("%s, escolha com qual gousma deseja atacar a inimiga (%d): 1\n", nome_1, atacar1);
                    printf("R: ");
                    scanf("%d", &usar1);
                  }
                }

              if(usar1 == 1){ // usou a gousma 1
                furiaj2_2 = furiaj2_2 + furiaj1_1;
                if(furiaj2_2 > 5){ //sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj2_2);
                  furiaj2_2 = 0;
                  gousmaj2_2 = 0;
                  printf("A gousma inimiga se autodestruiu.\n");
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  if((gousmaj2_1 == 0) && (gousmaj2_2 == 0)){


                    printf("O oponente nao possui mais nenhuma gousma!\n");
                    printf("O vencedor eh %s !!!\n", nome_1);
                    getchar();printf ("Pressione \"enter\" para continuar... \n");
                    getchar();
                    fim3 = 1;
                    break;
                  }else{


                    
                  turno1 = 0;
                  turno2 = 1;
                  }
              }else{ //não sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj2_2);
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  turno1 = 0;
                  turno2 = 1;
              }

              
            }else{ //usou a gousma 2
              furiaj2_2 = furiaj2_2 + furiaj1_2;
              if(furiaj2_2 > 5){ //sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj2_2);
                  furiaj2_2 = 0;
                  gousmaj2_2 = 0;
                  printf("A gousma inimiga se autodestruiu.\n");
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  if((gousmaj2_1 == 0) && (gousmaj2_2 == 0)){


                    printf("O oponente nao possui mais nenhuma gousma!\n");
                    printf("O vencedor eh %s !!!", nome_1);
                    getchar();printf ("Pressione \"enter\" para continuar... \n");
                    getchar();
                    fim3 = 1;
                    break;
                  }else{


                    
                  turno1 = 0;
                  turno2 = 1;
                  }
              }else{ //não sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj2_2);
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  turno1 = 0;
                  turno2 = 1;
              }
                
            }
                
             }
          }else{  //escolheu dividir
              
            
               if((furiaj1_1 > 0) && (furiaj1_2 == 0 )){

                 printf("Quanto de furia voce deseja passar para a nova gousma?\n");
                 printf("R: ");
                 scanf("%d", &quantDividir1);
                 while(((furiaj1_1 - quantDividir1) < 1) || ((furiaj1_1 - quantDividir1) > 4)){
                   system ("cls || clear");
                   printf("escolha invalida, voce nao pode passar uma quantidade de furia que faca a sua gousma atual ou a nova ficarem com menos de 1 de furia\n");
                   printf("Suas Gousmas:\n");
                   printf("\t Furia gousma 1: %d\n", furiaj1_1);
                   printf("\t Furia gousma 2: %d\n", furiaj1_2);
                   printf("Gousmas de %s:\n", nome_2);
                   printf("\t Furia gousma 1: %d\n", furiaj2_1);
                   printf("\t Furia gousma 2: %d\n", furiaj2_2);                 
                   printf("Quanto de furia voce deseja passar para a nova gousma?\n");
                   printf("R: ");
                   scanf("%d", &quantDividir1);
                   
                 }
                 furiaj1_2 = furiaj1_2 + quantDividir1;
                 furiaj1_1 = furiaj1_1 - quantDividir1;
                 printf("Os novos valores de furia das suas gousmas sao:\n");
                 printf("\t Furia gousma 1: %d\n", furiaj1_1);
                 printf("\t Furia gousma 2: %d\n", furiaj1_2);
                 turno1 = 0;
                 turno2 = 1;
              }else if((furiaj1_1 == 0) && (furiaj1_2 > 0 )){
                 printf("Quanto de furia voce deseja passar para a nova gousma?\n");
                 printf("R: ");
                 scanf("%d", &quantDividir1);
                 while(((furiaj1_2 - quantDividir1) < 1) || ((furiaj1_2 - quantDividir1) > 4)){
                   system ("cls || clear");
                   printf("escolha invalida, voce nao pode passar uma quantidade de furia que faca a sua gousma atual ou a nova ficarem com menos de 1 de furia\n");
                   printf("Suas Gousmas:\n");
                   printf("\t Furia gousma 1: %d\n", furiaj1_1);
                   printf("\t Furia gousma 2: %d\n", furiaj1_2);
                   printf("Gousmas de %s:\n", nome_2);
                   printf("\t Furia gousma 1: %d\n", furiaj2_1);
                   printf("\t Furia gousma 2: %d\n", furiaj2_2);                 
                   printf("Quanto de furia voce deseja passar para a nova gousma?\n");
                   printf("R: ");
                   scanf("%d", &quantDividir1);
                   
                 }
                 furiaj1_1 = furiaj1_1 + quantDividir1;
                 furiaj1_2 = furiaj1_2 - quantDividir1;
                 printf("\nOs novos valores de furia das suas gousmas sao:\n");
                 printf("\t Furia gousma 1: %d\n", furiaj1_1);
                 printf("\t Furia gousma 2: %d\n", furiaj1_2);
                 turno1 = 0;
                 turno2 = 1;
              }

            
          }
        }while((turno2 == 1) && (fim3 == 0)){ //começo do turno 2
          system ("cls || clear");
          printf("Turno de %s !\n", nome_2);
          printf("Suas Gousmas:\n");
          printf("\t Furia gousma 1: %d\n", furiaj2_1);
          printf("\t Furia gousma 2: %d\n", furiaj2_2);
          printf("Gousmas de %s:\n", nome_1);
          printf("\t Furia gousma 1: %d\n", furiaj1_1);
          printf("\t Furia gousma 2: %d\n", furiaj1_2);
          printf("O que deseja fazer?\n");
          if((furiaj2_1 > 0) && (furiaj2_2 > 0)){
          
            printf("Atacar (1)\n");
            printf("R: ");
            scanf("%d", &escolha2);
          
            while(escolha2 != 1){
            system ("cls || clear");
            printf("\n escolha invalida e nao eh possível dividir pois voce ja possui duas gousmas em campo\n");
            printf("Turno de %s !\n", nome_2);
            printf("Suas Gousmas:\n");
            printf("\t Furia gousma 1: %d\n", furiaj2_1);
            printf("\t Furia gousma 2: %d\n", furiaj2_2);
            printf("Gousmas de %s:\n", nome_1);
            printf("\t Furia gousma 1: %d\n", furiaj1_1);
            printf("\t Furia gousma 2: %d\n", furiaj1_2);
            printf("O que deseja fazer?\n");
            printf("Atacar (1)\n");
            printf("R: ");
            scanf("%d", &escolha2);     
          
            
          }
          }else if((furiaj2_1 == 1) || (furiaj2_2 == 1)){
          
            printf("Atacar (1)\n");
            printf("R: ");
            scanf("%d", &escolha2);
          
            while(escolha2 != 1){
            system ("cls || clear");
            printf("\n escolha invalida e nao eh possível dividir gousmas com 1 de furia\n");
            printf("Turno de %s !\n", nome_2);
            printf("Suas Gousmas:\n");
            printf("\t Furia gousma 1: %d\n", furiaj2_1);
            printf("\t Furia gousma 2: %d\n", furiaj2_2);
            printf("Gousmas de %s:\n", nome_2);
            printf("\t Furia gousma 1: %d\n", furiaj1_1);
            printf("\t Furia gousma 2: %d\n", furiaj1_2);
            printf("O que deseja fazer?\n");
            printf("Atacar (1)\n");
            printf("R: ");
            scanf("%d", &escolha2);     
          
            
          }
          }else{  
            printf("Atacar (1) ou Dividir (2)\n");
           printf("R: ");
            scanf("%d", &escolha2);
          
            while((escolha2 < 1) || (escolha2 > 2)){
              system ("cls || clear");
              printf("\n escolha invalida, digite 1 ou 2\n");
              printf("Turno de %s !\n", nome_2);
              printf("Suas Gousmas:\n");
              printf("\t Furia gousma 1: %d\n", furiaj2_1);
              printf("\t Furia gousma 2: %d\n", furiaj2_2);
              printf("Gousmas de %s:\n", nome_1);
              printf("\t Furia gousma 1: %d\n", furiaj1_1);
              printf("\t Furia gousma 2: %d\n", furiaj1_2);
              printf("O que deseja fazer?\n");
              printf("Atacar (1) ou Dividir (2)\n");
              printf("R: ");
              scanf("%d", &escolha2);       
            }
          }
          if(escolha2 == 1){ // escolheu atacar
            if((furiaj1_1 > 0)  && (furiaj1_2 > 0)){


              
            
            printf("escolha qual gousma inimiga deseja atacar: 1 ou 2\n");
            printf("R: ");
            scanf("%d", &atacar2);
            while((atacar2 < 1) || (atacar2 > 2)){
              system ("cls || clear");
              printf("\n escolha invalida, digite 1 ou 2\n");
              printf("Turno de %s !\n", nome_2);
              printf("Suas Gousmas:\n");
              printf("\t Furia gousma 1: %d\n", furiaj2_1);
              printf("\t Furia gousma 2: %d\n", furiaj2_2);
              printf("Gousmas de %s:\n", nome_1);
              printf("\t Furia gousma 1: %d\n", furiaj1_1);
              printf("\t Furia gousma 2: %d\n", furiaj1_2);
              printf("escolha qual gousma inimiga deseja atacar: 1 ou 2\n");
              printf("R: ");
              scanf("%d", &atacar2);
            }
            }else if((furiaj1_1 == 0)  && (furiaj1_2 > 0)){


              
            
            printf("escolha qual gousma inimiga deseja atacar: 2\n");
            printf("R: ");
            scanf("%d", &atacar2);
            while(atacar2 != 2){
              system ("cls || clear");
              printf("\n escolha invalida, so eh possivel atacar a gousma 2 (a gousma 1 ja esta morta)\n");
              printf("Turno de %s !\n", nome_2);
              printf("Suas Gousmas:\n");
              printf("\t Furia gousma 1: %d\n", furiaj2_1);
              printf("\t Furia gousma 2: %d\n", furiaj2_2);
              printf("Gousmas de %s:\n", nome_1);
              printf("\t Furia gousma 1: %d\n", furiaj1_1);
              printf("\t Furia gousma 2: %d\n", furiaj1_2);
              printf("escolha qual gousma inimiga deseja atacar: 2\n");
              printf("R: ");
              scanf("%d", &atacar2);
            }
            }else if((furiaj1_1 > 0)  && (furiaj1_2 == 0)){


              
            
            printf("escolha qual gousma inimiga deseja atacar: 1\n");
            printf("R: ");
            scanf("%d", &atacar2);
            while(atacar1 != 1){
              system ("cls || clear");
              printf("\n escolha invalida, so eh possivel atacar a gousma 1 (a gousma 2 ja esta morta)\n");
              printf("Turno de %s !\n", nome_2);
              printf("Suas Gousmas:\n");
              printf("\t Furia gousma 1: %d\n", furiaj2_1);
              printf("\t Furia gousma 2: %d\n", furiaj2_2);
              printf("Gousmas de %s:\n", nome_1);
              printf("\t Furia gousma 1: %d\n", furiaj1_1);
              printf("\t Furia gousma 2: %d\n", furiaj1_2);
              printf("escolha qual gousma inimiga deseja atacar: 1\n");
              printf("R: ");
              scanf("%d", &atacar2);
            }



              
            }
              if(atacar2 == 1){ //atacou a gousma 1
                if((furiaj2_1 > 0)  && (furiaj2_2 > 0)){


              
            
                  printf("%s, escolha com qual gousma deseja atacar a inimiga: 1 ou 2\n", nome_2);
                  printf("R: ");
                  scanf("%d", &usar2);
                  while((usar2 < 1) || (usar2 > 2)){
                    system ("cls || clear");
                    printf("\n escolha invalida, digite 1 ou 2\n");
                    printf("Turno de %s !\n", nome_2);
                    printf("Suas Gousmas:\n");
                    printf("\t Furia gousma 1: %d\n", furiaj2_1);
                    printf("\t Furia gousma 2: %d\n", furiaj2_2);
                    printf("Gousmas de %s:\n", nome_1);
                    printf("\t Furia gousma 1: %d\n", furiaj1_1);
                    printf("\t Furia gousma 2: %d\n", furiaj1_2);
                    printf("%s, escolha com qual gousma deseja atacar a inimiga: 1 ou 2\n", nome_2);
                    printf("R: ");
                    scanf("%d", &usar2);
                  }
               }else if((furiaj2_1 == 0)  && (furiaj2_2 > 0)){


              
            
                  printf("%s, escolha com qual gousma deseja atacar a inimiga: 2\n", nome_2);
                  printf("R: ");
                  scanf("%d", &usar2);
                  while(usar2 != 2){
                    system ("cls || clear");
                    printf("\n escolha invalida, so eh possivel usar a gousma 2 (a gousma 1 ja esta morta)\n");
                    printf("Turno de %s !\n", nome_2);
                    printf("Suas Gousmas:\n");
                    printf("\t Furia gousma 1: %d\n", furiaj2_1);
                    printf("\t Furia gousma 2: %d\n", furiaj2_2);
                    printf("Gousmas de %s:\n", nome_1);
                    printf("\t Furia gousma 1: %d\n", furiaj1_1);
                    printf("\t Furia gousma 2: %d\n", furiaj1_2);
                    printf("%s, escolha com qual gousma deseja atacar a inimiga (%d): 2\n", nome_2, atacar2);
                    printf("R: ");
                    scanf("%d", &usar2);
                  }
                }else if((furiaj2_1 > 0)  && (furiaj2_2 == 0)){


              
            
                 printf("%s, escolha com qual gousma deseja atacar a inimiga (%d): 1\n", nome_2, atacar2);
                 printf("R: ");
                 scanf("%d", &usar2);
                  while(usar1 != 1){
                    system ("cls || clear");
                    printf("\n escolha invalida, so eh possivel usar a gousma 1 (a gousma 2 ja esta morta)\n");
                    printf("Turno de %s !\n", nome_2);
                    printf("Suas Gousmas:\n");
                    printf("\t Furia gousma 1: %d\n", furiaj2_1);
                    printf("\t Furia gousma 2: %d\n", furiaj2_2);
                    printf("Gousmas de %s:\n", nome_1);
                    printf("\t Furia gousma 1: %d\n", furiaj1_1);
                    printf("\t Furia gousma 2: %d\n", furiaj1_2);
                    printf("%s, escolha com qual gousma deseja atacar a inimiga (%d): 1\n", nome_2, atacar2);
                    printf("R: ");
                    scanf("%d", &usar2);
                  }
                }

              if(usar2 == 1){ // usou a gousma 1
                furiaj1_1 = furiaj1_1 + furiaj2_1;
                if(furiaj1_1 > 5){ //sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj1_1);
                  furiaj1_1 = 0;
                  gousmaj1_1 = 0;
                  printf("A gousma inimiga se autodestruiu.\n");
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  if((gousmaj1_1 == 0) && (gousmaj1_2 == 0)){


                    printf("O oponente nao possui mais nenhuma gousma!\n");
                    printf("O vencedor eh %s !!!", nome_2);
                    getchar();printf ("Pressione \"enter\" para continuar... \n");
                    getchar();
                    fim3 = 1;
                    break;
                  }else{


                    
                  turno1 = 1;
                  turno2 = 0;
                  }
              }else{ //não sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj1_1);
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  turno1 = 0;
                  turno2 = 1;
              }

              
            }else{ //usou a gousma 2
              furiaj1_1 = furiaj1_1 + furiaj2_2;
              if(furiaj1_1 > 5){ //sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj1_1);
                  furiaj1_1 = 0;
                  gousmaj1_1 = 0;
                  printf("A gousma inimiga se autodestruiu.\n");
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  if((gousmaj1_1 == 0) && (gousmaj1_2 == 0)){


                    printf("O oponente nao possui mais nenhuma gousma!\n");
                    printf("O vencedor eh %s !!!\n", nome_2);
                    getchar();printf ("Pressione \"enter\" para continuar... \n");
                    getchar();
                    fim3 = 1;
                    break;
                  }else{


                    
                  turno1 = 1;
                  turno2 = 0;
                  }
              }else{ //não sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj1_1);
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  turno1 = 1;
                  turno2 = 0;
              }
                
            }
              
              
        }else{ //atacou a gousma 2
           if((furiaj2_1 > 0)  && (furiaj2_2 > 0)){


              
            
                  printf("%s, escolha com qual gousma deseja atacar a inimiga: 1 ou 2\n", nome_2);
                  printf("R: ");
                  scanf("%d", &usar2);
                  while((usar2 < 1) || (usar2 > 2)){
                    system ("cls || clear");
                    printf("\n escolha invalida, digite 1 ou 2\n");
                    printf("Turno de %s !\n", nome_2);
                    printf("Suas Gousmas:\n");
                    printf("\t Furia gousma 1: %d\n", furiaj2_1);
                    printf("\t Furia gousma 2: %d\n", furiaj2_2);
                    printf("Gousmas de %s:\n", nome_1);
                    printf("\t Furia gousma 1: %d\n", furiaj1_1);
                    printf("\t Furia gousma 2: %d\n", furiaj1_2);
                    printf("%s, escolha com qual gousma deseja atacar a inimiga: 1 ou 2\n", nome_2);
                    printf("R: ");
                    scanf("%d", &usar2);
                  }
               }else if((furiaj2_1 == 0)  && (furiaj2_2 > 0)){


              
            
                  printf("%s, escolha com qual gousma deseja atacar a inimiga: 2\n", nome_2);
                  printf("R: ");
                  scanf("%d", &usar2);
                  while(usar2 != 2){
                    system ("cls || clear");
                    printf("\n escolha invalida, so eh possivel usar a gousma 2 (a gousma 1 ja esta morta)\n");
                    printf("Turno de %s !\n", nome_2);
                    printf("Suas Gousmas:\n");
                    printf("\t Furia gousma 1: %d\n", furiaj2_1);
                    printf("\t Furia gousma 2: %d\n", furiaj2_2);
                    printf("Gousmas de %s:\n", nome_1);
                    printf("\t Furia gousma 1: %d\n", furiaj1_1);
                    printf("\t Furia gousma 2: %d\n", furiaj1_2);
                    printf("%s, escolha com qual gousma deseja atacar a inimiga (%d): 2\n", nome_2, atacar2);
                    printf("R: ");
                    scanf("%d", &usar2);
                  }
                }else if((furiaj2_1 > 0)  && (furiaj2_2 == 0)){


              
            
                 printf("%s, escolha com qual gousma deseja atacar a inimiga (%d): 1\n", nome_2, atacar2);
                 printf("R: ");
                 scanf("%d", &usar2);
                  while(usar2 != 1){
                    system ("cls || clear");
                    printf("\n escolha invalida, so eh possivel usar a gousma 1 (a gousma 2 ja esta morta)\n");
                    printf("Turno de %s !\n", nome_2);
                    printf("Suas Gousmas:\n");
                    printf("\t Furia gousma 1: %d\n", furiaj2_1);
                    printf("\t Furia gousma 2: %d\n", furiaj2_2);
                    printf("Gousmas de %s:\n", nome_1);
                    printf("\t Furia gousma 1: %d\n", furiaj1_1);
                    printf("\t Furia gousma 2: %d\n", furiaj1_2);
                    printf("%s, escolha com qual gousma deseja atacar a inimiga (%d): 1\n", nome_2, atacar2);
                    printf("R: ");
                    scanf("%d", &usar2);
                  }
                }

              if(usar2 == 1){ // usou a gousma 1
                furiaj1_2 = furiaj1_2 + furiaj2_1;
                if(furiaj1_2 > 5){ //sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj1_2);
                  furiaj1_2 = 0;
                  gousmaj1_2 = 0;
                  printf("A gousma inimiga se autodestruiu.\n");
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  if((gousmaj1_1 == 0) && (gousmaj1_2 == 0)){


                    printf("O oponente nao possui mais nenhuma gousma!\n");
                    printf("O vencedor eh %s !!!\n", nome_2);
                    getchar();printf ("Pressione \"enter\" para continuar... \n");
                    getchar();
                    fim3 = 1;
                    break;
                  }else{


                    
                  turno1 = 1;
                  turno2 = 0;
                  }
              }else{ //não sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj1_2);
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  turno1 = 1;
                  turno2 = 0;
              }

              
            }else{ //usou a gousma 2
              furiaj1_2 = furiaj1_2 + furiaj2_2;
              if(furiaj1_2 > 5){ //sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj1_2);
                  furiaj1_2 = 0;
                  gousmaj1_2 = 0;
                  printf("A gousma inimiga se autodestruiu.\n");
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  if((gousmaj1_1 == 0) && (gousmaj1_2 == 0)){


                    printf("O oponente nao possui mais nenhuma gousma!\n");
                    printf("O vencedor eh %s !!!", nome_2);
                    getchar();printf ("Pressione \"enter\" para continuar... \n");
                    getchar();
                    fim3 = 1;
                    break;
                  }else{


                    
                  turno1 = 1;
                  turno2 = 0;
                  }
              }else{ //não sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj1_2);
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  turno1 = 1;
                  turno2 = 0;
              }
                
            }
                
             }
          }else{  //escolheu dividir
              
            
               if((furiaj2_1 > 0) && (furiaj2_2 == 0 )){

                 printf("Quanto de furia voce deseja passar para a nova gousma?\n");
                 printf("R: ");
                 scanf("%d", &quantDividir2);
                 while(((furiaj2_1 - quantDividir2) < 1) || ((furiaj2_1 - quantDividir2) > 4)){
                   system ("cls || clear");
                   printf("escolha invalida, voce nao pode passar uma quantidade de furia que faca a sua gousma atual ou a nova ficarem com menos de 1 de furia\n");
                   printf("Suas Gousmas:\n");
                   printf("\t Furia gousma 1: %d\n", furiaj2_1);
                   printf("\t Furia gousma 2: %d\n", furiaj2_2);
                   printf("Gousmas de %s:\n", nome_1);
                   printf("\t Furia gousma 1: %d\n", furiaj1_1);
                   printf("\t Furia gousma 2: %d\n", furiaj1_2);                 
                   printf("Quanto de furia voce deseja passar para a nova gousma?\n");
                   printf("R: ");
                   scanf("%d", &quantDividir2);
                   
                 }
                 furiaj2_2 = furiaj2_2 + quantDividir2;
                 furiaj2_1 = furiaj2_1 - quantDividir2;
                 printf("Os novos valores de furia das suas gousmas sao:\n");
                 printf("\t Furia gousma 1: %d\n", furiaj2_1);
                 printf("\t Furia gousma 2: %d\n", furiaj2_2);
                 turno1 = 1;
                 turno2 = 0;
              }else if((furiaj2_1 == 0) && (furiaj2_2 > 0 )){
                 printf("Quanto de furia voce deseja passar para a nova gousma?\n");
                 printf("R: ");
                 scanf("%d", &quantDividir2);
                 while(((furiaj2_2 - quantDividir2) < 1) || ((furiaj2_2 - quantDividir2) > 4)){
                   system ("cls || clear");
                   printf("escolha invalida, voce nao pode passar uma quantidade de furia que faca a sua gousma atual ou a nova ficarem com menos de 1 de furia\n");
                   printf("Suas Gousmas:\n");
                   printf("\t Furia gousma 1: %d\n", furiaj2_1);
                   printf("\t Furia gousma 2: %d\n", furiaj2_2);
                   printf("Gousmas de %s:\n", nome_1);
                   printf("\t Furia gousma 1: %d\n", furiaj1_1);
                   printf("\t Furia gousma 2: %d\n", furiaj1_2);                 
                   printf("Quanto de furia voce deseja passar para a nova gousma?\n");
                   printf("R: ");
                   scanf("%d", &quantDividir2);
                   
                 }
                 furiaj2_1 = furiaj2_1 + quantDividir2;
                 furiaj2_2 = furiaj2_2 - quantDividir2;
                 printf("\nOs novos valores de furia das suas gousmas sao:\n");
                 printf("\t Furia gousma 1: %d\n", furiaj2_1);
                 printf("\t Furia gousma 2: %d\n", furiaj2_2);
                 turno1 = 1;
                 turno2 = 0;
              }

            
          }


          
        }
       }else{ // nome 2 começa
        turno1 = 1;
        turno2 = 0;
        system ("cls || clear");
        while((turno1 == 1) && (fim3 == 0)){ //começo do turno 1
          system ("cls || clear");
          printf("Turno de %s !\n", nome_2);
          printf("Suas Gousmas:\n");
          printf("\t Furia gousma 1: %d\n", furiaj2_1);
          printf("\t Furia gousma 2: %d\n", furiaj2_2);
          printf("Gousmas de %s:\n", nome_1);
          printf("\t Furia gousma 1: %d\n", furiaj1_1);
          printf("\t Furia gousma 2: %d\n", furiaj1_2);
          printf("O que deseja fazer?\n");
          if((furiaj2_1 > 0) && (furiaj2_2 > 0)){
          
            printf("Atacar (1)\n");
            printf("R: ");
            scanf("%d", &escolha2);
          
            while(escolha2 != 1){
            system ("cls || clear");
            printf("\n escolha invalida e nao eh possível dividir pois voce ja possui duas gousmas em campo\n");
            printf("Turno de %s !\n", nome_2);
            printf("Suas Gousmas:\n");
            printf("\t Furia gousma 1: %d\n", furiaj2_1);
            printf("\t Furia gousma 2: %d\n", furiaj2_2);
            printf("Gousmas de %s:\n", nome_1);
            printf("\t Furia gousma 1: %d\n", furiaj1_1);
            printf("\t Furia gousma 2: %d\n", furiaj1_2);
            printf("O que deseja fazer?\n");
            printf("Atacar (1)\n");
            printf("R: ");
            scanf("%d", &escolha2);     
          
            
          }
          }else if((furiaj2_1 == 1) || (furiaj2_2 == 1)){
          
            printf("Atacar (1)\n");
            printf("R: ");
            scanf("%d", &escolha2);
          
            while(escolha2 != 1){
            system ("cls || clear");
            printf("\n escolha invalida e nao eh possível dividir gousmas com 1 de furia\n");
            printf("Turno de %s !\n", nome_2);
            printf("Suas Gousmas:\n");
            printf("\t Furia gousma 1: %d\n", furiaj2_1);
            printf("\t Furia gousma 2: %d\n", furiaj2_2);
            printf("Gousmas de %s:\n", nome_2);
            printf("\t Furia gousma 1: %d\n", furiaj1_1);
            printf("\t Furia gousma 2: %d\n", furiaj1_2);
            printf("O que deseja fazer?\n");
            printf("Atacar (1)\n");
            printf("R: ");
            scanf("%d", &escolha2);     
          
            
          }
          }else{  
            printf("Atacar (1) ou Dividir (2)\n");
           printf("R: ");
            scanf("%d", &escolha2);
          
            while((escolha2 < 1) || (escolha2 > 2)){
              system ("cls || clear");
              printf("\n escolha invalida, digite 1 ou 2\n");
              printf("Turno de %s !\n", nome_2);
              printf("Suas Gousmas:\n");
              printf("\t Furia gousma 1: %d\n", furiaj2_1);
              printf("\t Furia gousma 2: %d\n", furiaj2_2);
              printf("Gousmas de %s:\n", nome_1);
              printf("\t Furia gousma 1: %d\n", furiaj1_1);
              printf("\t Furia gousma 2: %d\n", furiaj1_2);
              printf("O que deseja fazer?\n");
              printf("Atacar (1) ou Dividir (2)\n");
              printf("R: ");
              scanf("%d", &escolha2);       
            }
          }
          if(escolha2 == 1){ // escolheu atacar
            if((furiaj1_1 > 0)  && (furiaj1_2 > 0)){


              
            
            printf("escolha qual gousma inimiga deseja atacar: 1 ou 2\n");
            printf("R: ");
            scanf("%d", &atacar2);
            while((atacar2 < 1) || (atacar2 > 2)){
              system ("cls || clear");
              printf("\n escolha invalida, digite 1 ou 2\n");
              printf("Turno de %s !\n", nome_2);
              printf("Suas Gousmas:\n");
              printf("\t Furia gousma 1: %d\n", furiaj2_1);
              printf("\t Furia gousma 2: %d\n", furiaj2_2);
              printf("Gousmas de %s:\n", nome_1);
              printf("\t Furia gousma 1: %d\n", furiaj1_1);
              printf("\t Furia gousma 2: %d\n", furiaj1_2);
              printf("escolha qual gousma inimiga deseja atacar: 1 ou 2\n");
              printf("R: ");
              scanf("%d", &atacar2);
            }
            }else if((furiaj1_1 == 0)  && (furiaj1_2 > 0)){


              
            
            printf("escolha qual gousma inimiga deseja atacar: 2\n");
            printf("R: ");
            scanf("%d", &atacar2);
            while(atacar2 != 2){
              system ("cls || clear");
              printf("\n escolha invalida, so eh possivel atacar a gousma 2 (a gousma 1 ja esta morta)\n");
              printf("Turno de %s !\n", nome_2);
              printf("Suas Gousmas:\n");
              printf("\t Furia gousma 1: %d\n", furiaj2_1);
              printf("\t Furia gousma 2: %d\n", furiaj2_2);
              printf("Gousmas de %s:\n", nome_1);
              printf("\t Furia gousma 1: %d\n", furiaj1_1);
              printf("\t Furia gousma 2: %d\n", furiaj1_2);
              printf("escolha qual gousma inimiga deseja atacar: 2\n");
              printf("R: ");
              scanf("%d", &atacar2);
            }
            }else if((furiaj1_1 > 0)  && (furiaj1_2 == 0)){


              
            
            printf("escolha qual gousma inimiga deseja atacar: 1\n");
            printf("R: ");
            scanf("%d", &atacar2);
            while(atacar1 != 1){
              system ("cls || clear");
              printf("\n escolha invalida, so eh possivel atacar a gousma 1 (a gousma 2 ja esta morta)\n");
              printf("Turno de %s !\n", nome_2);
              printf("Suas Gousmas:\n");
              printf("\t Furia gousma 1: %d\n", furiaj2_1);
              printf("\t Furia gousma 2: %d\n", furiaj2_2);
              printf("Gousmas de %s:\n", nome_1);
              printf("\t Furia gousma 1: %d\n", furiaj1_1);
              printf("\t Furia gousma 2: %d\n", furiaj1_2);
              printf("escolha qual gousma inimiga deseja atacar: 1\n");
              printf("R: ");
              scanf("%d", &atacar2);
            }



              
            }
              if(atacar2 == 1){ //atacou a gousma 1
                if((furiaj2_1 > 0)  && (furiaj2_2 > 0)){


              
            
                  printf("%s, escolha com qual gousma deseja atacar a inimiga: 1 ou 2\n", nome_2);
                  printf("R: ");
                  scanf("%d", &usar2);
                  while((usar2 < 1) || (usar2 > 2)){
                    system ("cls || clear");
                    printf("\n escolha invalida, digite 1 ou 2\n");
                    printf("Turno de %s !\n", nome_2);
                    printf("Suas Gousmas:\n");
                    printf("\t Furia gousma 1: %d\n", furiaj2_1);
                    printf("\t Furia gousma 2: %d\n", furiaj2_2);
                    printf("Gousmas de %s:\n", nome_1);
                    printf("\t Furia gousma 1: %d\n", furiaj1_1);
                    printf("\t Furia gousma 2: %d\n", furiaj1_2);
                    printf("%s, escolha com qual gousma deseja atacar a inimiga: 1 ou 2\n", nome_2);
                    printf("R: ");
                    scanf("%d", &usar2);
                  }
               }else if((furiaj2_1 == 0)  && (furiaj2_2 > 0)){


              
            
                  printf("%s, escolha com qual gousma deseja atacar a inimiga: 2\n", nome_2);
                  printf("R: ");
                  scanf("%d", &usar2);
                  while(usar2 != 2){
                    system ("cls || clear");
                    printf("\n escolha invalida, so eh possivel usar a gousma 2 (a gousma 1 ja esta morta)\n");
                    printf("Turno de %s !\n", nome_2);
                    printf("Suas Gousmas:\n");
                    printf("\t Furia gousma 1: %d\n", furiaj2_1);
                    printf("\t Furia gousma 2: %d\n", furiaj2_2);
                    printf("Gousmas de %s:\n", nome_1);
                    printf("\t Furia gousma 1: %d\n", furiaj1_1);
                    printf("\t Furia gousma 2: %d\n", furiaj1_2);
                    printf("%s, escolha com qual gousma deseja atacar a inimiga (%d): 2\n", nome_2, atacar2);
                    printf("R: ");
                    scanf("%d", &usar2);
                  }
                }else if((furiaj2_1 > 0)  && (furiaj2_2 == 0)){


              
            
                 printf("%s, escolha com qual gousma deseja atacar a inimiga (%d): 1\n", nome_2, atacar2);
                 printf("R: ");
                 scanf("%d", &usar2);
                  while(usar1 != 1){
                    system ("cls || clear");
                    printf("\n escolha invalida, so eh possivel usar a gousma 1 (a gousma 2 ja esta morta)\n");
                    printf("Turno de %s !\n", nome_2);
                    printf("Suas Gousmas:\n");
                    printf("\t Furia gousma 1: %d\n", furiaj2_1);
                    printf("\t Furia gousma 2: %d\n", furiaj2_2);
                    printf("Gousmas de %s:\n", nome_1);
                    printf("\t Furia gousma 1: %d\n", furiaj1_1);
                    printf("\t Furia gousma 2: %d\n", furiaj1_2);
                    printf("%s, escolha com qual gousma deseja atacar a inimiga (%d): 1\n", nome_2, atacar2);
                    printf("R: ");
                    scanf("%d", &usar2);
                  }
                }

              if(usar2 == 1){ // usou a gousma 1
                furiaj1_1 = furiaj1_1 + furiaj2_1;
                if(furiaj1_1 > 5){ //sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj1_1);
                  furiaj1_1 = 0;
                  gousmaj1_1 = 0;
                  printf("A gousma inimiga se autodestruiu.\n");
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  if((gousmaj1_1 == 0) && (gousmaj1_2 == 0)){


                    printf("O oponente nao possui mais nenhuma gousma!\n");
                    printf("O vencedor eh %s !!!", nome_2);
                    getchar();printf ("Pressione \"enter\" para continuar... \n");
                    getchar();
                    fim3 = 1;
                    break;
                  }else{


                    
                  turno1 = 0;
                  turno2 = 1;
                  }
              }else{ //não sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj1_1);
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  turno1 = 0;
                  turno2 = 1;
              }

              
            }else{ //usou a gousma 2
              furiaj1_1 = furiaj1_1 + furiaj2_2;
              if(furiaj1_1 > 5){ //sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj1_1);
                  furiaj1_1 = 0;
                  gousmaj1_1 = 0;
                  printf("A gousma inimiga se autodestruiu.\n");
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  if((gousmaj1_1 == 0) && (gousmaj1_2 == 0)){


                    printf("O oponente nao possui mais nenhuma gousma!\n");
                    printf("O vencedor eh %s !!!\n", nome_2);
                    getchar();printf ("Pressione \"enter\" para continuar... \n");
                    getchar();
                    fim3 = 1;
                    break;
                  }else{


                    
                  turno1 = 0;
                  turno2 = 1;
                  }
              }else{ //não sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj1_1);
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  turno1 = 0;
                  turno2 = 1;
              }
                
            }
              
              
        }else{ //atacou a gousma 2
           if((furiaj2_1 > 0)  && (furiaj2_2 > 0)){


              
            
                  printf("%s, escolha com qual gousma deseja atacar a inimiga: 1 ou 2\n", nome_2);
                  printf("R: ");
                  scanf("%d", &usar2);
                  while((usar2 < 1) || (usar2 > 2)){
                    system ("cls || clear");
                    printf("\n escolha invalida, digite 1 ou 2\n");
                    printf("Turno de %s !\n", nome_2);
                    printf("Suas Gousmas:\n");
                    printf("\t Furia gousma 1: %d\n", furiaj2_1);
                    printf("\t Furia gousma 2: %d\n", furiaj2_2);
                    printf("Gousmas de %s:\n", nome_1);
                    printf("\t Furia gousma 1: %d\n", furiaj1_1);
                    printf("\t Furia gousma 2: %d\n", furiaj1_2);
                    printf("%s, escolha com qual gousma deseja atacar a inimiga: 1 ou 2\n", nome_2);
                    printf("R: ");
                    scanf("%d", &usar2);
                  }
               }else if((furiaj2_1 == 0)  && (furiaj2_2 > 0)){


              
            
                  printf("%s, escolha com qual gousma deseja atacar a inimiga: 2\n", nome_2);
                  printf("R: ");
                  scanf("%d", &usar2);
                  while(usar2 != 2){
                    system ("cls || clear");
                    printf("\n escolha invalida, so eh possivel usar a gousma 2 (a gousma 1 ja esta morta)\n");
                    printf("Turno de %s !\n", nome_2);
                    printf("Suas Gousmas:\n");
                    printf("\t Furia gousma 1: %d\n", furiaj2_1);
                    printf("\t Furia gousma 2: %d\n", furiaj2_2);
                    printf("Gousmas de %s:\n", nome_1);
                    printf("\t Furia gousma 1: %d\n", furiaj1_1);
                    printf("\t Furia gousma 2: %d\n", furiaj1_2);
                    printf("%s, escolha com qual gousma deseja atacar a inimiga (%d): 2\n", nome_2, atacar2);
                    printf("R: ");
                    scanf("%d", &usar2);
                  }
                }else if((furiaj2_1 > 0)  && (furiaj2_2 == 0)){


              
            
                 printf("%s, escolha com qual gousma deseja atacar a inimiga (%d): 1\n", nome_2, atacar2);
                 printf("R: ");
                 scanf("%d", &usar2);
                  while(usar2 != 1){
                    system ("cls || clear");
                    printf("\n escolha invalida, so eh possivel usar a gousma 1 (a gousma 2 ja esta morta)\n");
                    printf("Turno de %s !\n", nome_2);
                    printf("Suas Gousmas:\n");
                    printf("\t Furia gousma 1: %d\n", furiaj2_1);
                    printf("\t Furia gousma 2: %d\n", furiaj2_2);
                    printf("Gousmas de %s:\n", nome_1);
                    printf("\t Furia gousma 1: %d\n", furiaj1_1);
                    printf("\t Furia gousma 2: %d\n", furiaj1_2);
                    printf("%s, escolha com qual gousma deseja atacar a inimiga (%d): 1\n", nome_2, atacar2);
                    printf("R: ");
                    scanf("%d", &usar2);
                  }
                }

              if(usar2 == 1){ // usou a gousma 1
                furiaj1_2 = furiaj1_2 + furiaj2_1;
                if(furiaj1_2 > 5){ //sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj1_2);
                  furiaj1_2 = 0;
                  gousmaj1_2 = 0;
                  printf("A gousma inimiga se autodestruiu.\n");
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  if((gousmaj1_1 == 0) && (gousmaj1_2 == 0)){


                    printf("O oponente nao possui mais nenhuma gousma!\n");
                    printf("O vencedor eh %s !!!\n", nome_2);
                    getchar();printf ("Pressione \"enter\" para continuar... \n");
                    getchar();
                    fim3 = 1;
                    break;
                  }else{


                    
                  turno1 = 0;
                  turno2 = 1;
                  }
              }else{ //não sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj1_2);
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  turno1 = 0;
                  turno2 = 1;
              }

              
            }else{ //usou a gousma 2
              furiaj1_2 = furiaj1_2 + furiaj2_2;
              if(furiaj1_2 > 5){ //sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj1_2);
                  furiaj1_2 = 0;
                  gousmaj1_2 = 0;
                  printf("A gousma inimiga se autodestruiu.\n");
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  if((gousmaj1_1 == 0) && (gousmaj1_2 == 0)){


                    printf("O oponente nao possui mais nenhuma gousma!\n");
                    printf("O vencedor eh %s !!!", nome_2);
                    getchar();printf ("Pressione \"enter\" para continuar... \n");
                    getchar();
                    fim3 = 1;
                    break;
                  }else{


                    
                  turno1 = 0;
                  turno2 = 1;
                  }
              }else{ //não sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj1_2);
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  turno1 = 0;
                  turno2 = 1;
              }
                
            }
                
             }
          }else{  //escolheu dividir
              
            
               if((furiaj2_1 > 0) && (furiaj2_2 == 0 )){

                 printf("Quanto de furia voce deseja passar para a nova gousma?\n");
                 printf("R: ");
                 scanf("%d", &quantDividir2);
                 while(((furiaj2_1 - quantDividir2) < 1) || ((furiaj2_1 - quantDividir2) > 4)){
                   system ("cls || clear");
                   printf("escolha invalida, voce nao pode passar uma quantidade de furia que faca a sua gousma atual ou a nova ficarem com menos de 1 de furia\n");
                   printf("Suas Gousmas:\n");
                   printf("\t Furia gousma 1: %d\n", furiaj2_1);
                   printf("\t Furia gousma 2: %d\n", furiaj2_2);
                   printf("Gousmas de %s:\n", nome_1);
                   printf("\t Furia gousma 1: %d\n", furiaj1_1);
                   printf("\t Furia gousma 2: %d\n", furiaj1_2);                 
                   printf("Quanto de furia voce deseja passar para a nova gousma?\n");
                   printf("R: ");
                   scanf("%d", &quantDividir2);
                   
                 }
                 furiaj2_2 = furiaj2_2 + quantDividir2;
                 furiaj2_1 = furiaj2_1 - quantDividir2;
                 printf("Os novos valores de furia das suas gousmas sao:\n");
                 printf("\t Furia gousma 1: %d\n", furiaj2_1);
                 printf("\t Furia gousma 2: %d\n", furiaj2_2);
                 turno1 = 0;
                 turno2 = 1;
              }else if((furiaj2_1 == 0) && (furiaj2_2 > 0 )){
                 printf("Quanto de furia voce deseja passar para a nova gousma?\n");
                 printf("R: ");
                 scanf("%d", &quantDividir2);
                 while(((furiaj2_2 - quantDividir2) < 1) || ((furiaj2_2 - quantDividir2) > 4)){
                   system ("cls || clear");
                   printf("escolha invalida, voce nao pode passar uma quantidade de furia que faca a sua gousma atual ou a nova ficarem com menos de 1 de furia\n");
                   printf("Suas Gousmas:\n");
                   printf("\t Furia gousma 1: %d\n", furiaj2_1);
                   printf("\t Furia gousma 2: %d\n", furiaj2_2);
                   printf("Gousmas de %s:\n", nome_1);
                   printf("\t Furia gousma 1: %d\n", furiaj1_1);
                   printf("\t Furia gousma 2: %d\n", furiaj1_2);                 
                   printf("Quanto de furia voce deseja passar para a nova gousma?\n");
                   printf("R: ");
                   scanf("%d", &quantDividir2);
                   
                 }
                 furiaj2_1 = furiaj2_1 + quantDividir2;
                 furiaj2_2 = furiaj2_2 - quantDividir2;
                 printf("\nOs novos valores de furia das suas gousmas sao:\n");
                 printf("\t Furia gousma 1: %d\n", furiaj2_1);
                 printf("\t Furia gousma 2: %d\n", furiaj2_2);
                 turno1 = 0;
                 turno2 = 1;
              }

            
          }


          
        }while((turno2 == 1) && (fim3 == 0)){ // começo turno 2 caso nome 2 comece
          system ("cls || clear");
          printf("Turno de %s !\n", nome_1);
          printf("Suas Gousmas:\n");
          printf("\t Furia gousma 1: %d\n", furiaj1_1);
          printf("\t Furia gousma 2: %d\n", furiaj1_2);
          printf("Gousmas de %s:\n", nome_2);
          printf("\t Furia gousma 1: %d\n", furiaj2_1);
          printf("\t Furia gousma 2: %d\n", furiaj2_2);
          printf("O que deseja fazer?\n");
          if((furiaj1_1 > 0) && (furiaj1_2 > 0)){
          
            printf("Atacar (1)\n");
            printf("R: ");
            scanf("%d", &escolha1);
          
            while(escolha1 != 1){
            system ("cls || clear");
            printf("\n escolha invalida e nao eh possível dividir pois voce ja possui duas gousmas em campo\n");
            printf("Turno de %s !\n", nome_1);
            printf("Suas Gousmas:\n");
            printf("\t Furia gousma 1: %d\n", furiaj1_1);
            printf("\t Furia gousma 2: %d\n", furiaj1_2);
            printf("Gousmas de %s:\n", nome_2);
            printf("\t Furia gousma 1: %d\n", furiaj2_1);
            printf("\t Furia gousma 2: %d\n", furiaj2_2);
            printf("O que deseja fazer?\n");
            printf("Atacar (1)\n");
            printf("R: ");
            scanf("%d", &escolha1);     
          
            
          }
          
          
          
          }else if((furiaj1_1 == 1) || (furiaj1_2 == 1)){
          
            printf("Atacar (1)\n");
            printf("R: ");
            scanf("%d", &escolha1);
          
            while(escolha1 != 1){
            system ("cls || clear");
            printf("\n escolha invalida e nao eh possível dividir gousmas com 1 de furia\n");
            printf("Turno de %s !\n", nome_1);
            printf("Suas Gousmas:\n");
            printf("\t Furia gousma 1: %d\n", furiaj1_1);
            printf("\t Furia gousma 2: %d\n", furiaj1_2);
            printf("Gousmas de %s:\n", nome_2);
            printf("\t Furia gousma 1: %d\n", furiaj2_1);
            printf("\t Furia gousma 2: %d\n", furiaj2_2);
            printf("O que deseja fazer?\n");
            printf("Atacar (1)\n");
            printf("R: ");
            scanf("%d", &escolha1);     
          
            
          }
          }else{  
            printf("Atacar (1) ou Dividir (2)\n");
           printf("R: ");
            scanf("%d", &escolha1);
          
            while((escolha1 < 1) || (escolha1 > 2)){
              system ("cls || clear");
              printf("\n escolha invalida, digite 1 ou 2\n");
              printf("Turno de %s !\n", nome_1);
              printf("Suas Gousmas:\n");
              printf("\t Furia gousma 1: %d\n", furiaj1_1);
              printf("\t Furia gousma 2: %d\n", furiaj1_2);
              printf("Gousmas de %s:\n", nome_2);
              printf("\t Furia gousma 1: %d\n", furiaj2_1);
              printf("\t Furia gousma 2: %d\n", furiaj2_2);
              printf("O que deseja fazer?\n");
              printf("Atacar (1) ou Dividir (2)\n");
              printf("R: ");
              scanf("%d", &escolha1);       
            }
          }
          if(escolha1 == 1){ // escolheu atacar
            if((furiaj2_1 > 0)  && (furiaj2_2 > 0)){


              
            
            printf("escolha qual gousma inimiga deseja atacar: 1 ou 2\n");
            printf("R: ");
            scanf("%d", &atacar1);
            while((atacar1 < 1) || (atacar1 > 2)){
              system ("cls || clear");
              printf("\n escolha invalida, digite 1 ou 2\n");
              printf("Turno de %s !\n", nome_1);
              printf("Suas Gousmas:\n");
              printf("\t Furia gousma 1: %d\n", furiaj1_1);
              printf("\t Furia gousma 2: %d\n", furiaj1_2);
              printf("Gousmas de %s:\n", nome_2);
              printf("\t Furia gousma 1: %d\n", furiaj2_1);
              printf("\t Furia gousma 2: %d\n", furiaj2_2);
              printf("escolha qual gousma inimiga deseja atacar: 1 ou 2\n");
              printf("R: ");
              scanf("%d", &atacar1);
            }
            }else if((furiaj2_1 == 0)  && (furiaj2_2 > 0)){


              
            
            printf("escolha qual gousma inimiga deseja atacar: 2\n");
            printf("R: ");
            scanf("%d", &atacar1);
            while(atacar1 != 2){
              system ("cls || clear");
              printf("\n escolha invalida, so eh possivel atacar a gousma 2 (a gousma 1 ja esta morta)\n");
              printf("Turno de %s !\n", nome_1);
              printf("Suas Gousmas:\n");
              printf("\t Furia gousma 1: %d\n", furiaj1_1);
              printf("\t Furia gousma 2: %d\n", furiaj1_2);
              printf("Gousmas de %s:\n", nome_2);
              printf("\t Furia gousma 1: %d\n", furiaj2_1);
              printf("\t Furia gousma 2: %d\n", furiaj2_2);
              printf("escolha qual gousma inimiga deseja atacar: 2\n");
              printf("R: ");
              scanf("%d", &atacar1);
            }
            }else if((furiaj2_1 > 0)  && (furiaj2_2 == 0)){


              
            
            printf("escolha qual gousma inimiga deseja atacar: 1\n");
            printf("R: ");
            scanf("%d", &atacar1);
            while(atacar1 != 1){
              system ("cls || clear");
              printf("\n escolha invalida, so eh possivel atacar a gousma 1 (a gousma 2 ja esta morta)\n");
              printf("Turno de %s !\n", nome_1);
              printf("Suas Gousmas:\n");
              printf("\t Furia gousma 1: %d\n", furiaj1_1);
              printf("\t Furia gousma 2: %d\n", furiaj1_2);
              printf("Gousmas de %s:\n", nome_2);
              printf("\t Furia gousma 1: %d\n", furiaj2_1);
              printf("\t Furia gousma 2: %d\n", furiaj2_2);
              printf("escolha qual gousma inimiga deseja atacar: 1\n");
              printf("R: ");
              scanf("%d", &atacar1);
            }



              
            }
              if(atacar1 == 1){ //atacou a gousma 1
                if((furiaj1_1 > 0)  && (furiaj1_2 > 0)){


              
            
                  printf("%s, escolha com qual gousma deseja atacar a inimiga: 1 ou 2\n", nome_1);
                  printf("R: ");
                  scanf("%d", &usar1);
                  while((usar1 < 1) || (usar1 > 2)){
                    system ("cls || clear");
                    printf("\n escolha invalida, digite 1 ou 2\n");
                    printf("Turno de %s !\n", nome_1);
                    printf("Suas Gousmas:\n");
                    printf("\t Furia gousma 1: %d\n", furiaj1_1);
                    printf("\t Furia gousma 2: %d\n", furiaj1_2);
                    printf("Gousmas de %s:\n", nome_2);
                    printf("\t Furia gousma 1: %d\n", furiaj2_1);
                    printf("\t Furia gousma 2: %d\n", furiaj2_2);
                    printf("%s, escolha com qual gousma deseja atacar a inimiga: 1 ou 2\n", nome_1);
                    printf("R: ");
                    scanf("%d", &usar1);
                  }
               }else if((furiaj1_1 == 0)  && (furiaj1_2 > 0)){


              
            
                  printf("%s, escolha com qual gousma deseja atacar a inimiga: 2\n", nome_1);
                  printf("R: ");
                  scanf("%d", &usar1);
                  while(usar1 != 2){
                    system ("cls || clear");
                    printf("\n escolha invalida, so eh possivel usar a gousma 2 (a gousma 1 ja esta morta)\n");
                    printf("Turno de %s !\n", nome_1);
                    printf("Suas Gousmas:\n");
                    printf("\t Furia gousma 1: %d\n", furiaj1_1);
                    printf("\t Furia gousma 2: %d\n", furiaj1_2);
                    printf("Gousmas de %s:\n", nome_2);
                    printf("\t Furia gousma 1: %d\n", furiaj2_1);
                    printf("\t Furia gousma 2: %d\n", furiaj2_2);
                    printf("%s, escolha com qual gousma deseja atacar a inimiga (%d): 2\n", nome_1, atacar1);
                    printf("R: ");
                    scanf("%d", &usar1);
                  }
                }else if((furiaj1_1 > 0)  && (furiaj1_2 == 0)){


              
            
                 printf("%s, escolha com qual gousma deseja atacar a inimiga (%d): 1\n", nome_1, atacar1);
                 printf("R: ");
                 scanf("%d", &usar1);
                  while(usar1 != 1){
                    system ("cls || clear");
                    printf("\n escolha invalida, so eh possivel usar a gousma 1 (a gousma 2 ja esta morta)\n");
                    printf("Turno de %s !\n", nome_1);
                    printf("Suas Gousmas:\n");
                    printf("\t Furia gousma 1: %d\n", furiaj1_1);
                    printf("\t Furia gousma 2: %d\n", furiaj1_2);
                    printf("Gousmas de %s:\n", nome_2);
                    printf("\t Furia gousma 1: %d\n", furiaj2_1);
                    printf("\t Furia gousma 2: %d\n", furiaj2_2);
                    printf("%s, escolha com qual gousma deseja atacar a inimiga (%d): 1\n", nome_1, atacar1);
                    printf("R: ");
                    scanf("%d", &usar1);
                  }
                }

              if(usar1 == 1){ // usou a gousma 1
                furiaj2_1 = furiaj2_1 + furiaj1_1;
                if(furiaj2_1 > 5){ //sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj2_1);
                  furiaj2_1 = 0;
                  gousmaj2_1 = 0;
                  printf("A gousma inimiga se autodestruiu.\n");
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  if((gousmaj2_1 == 0) && (gousmaj2_2 == 0)){


                    printf("O oponente nao possui mais nenhuma gousma!\n");
                    printf("O vencedor eh %s !!!", nome_1);
                    getchar();printf ("Pressione \"enter\" para continuar... \n");
                    getchar();
                    fim3 = 1;
                    break;
                  }else{


                    
                  turno1 = 1;
                  turno2 = 0;
                  }
              }else{ //não sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj2_1);
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  turno1 = 1;
                  turno2 = 0;
              }

              
            }else{ //usou a gousma 2
              furiaj2_1 = furiaj2_1 + furiaj1_2;
              if(furiaj2_1 > 5){ //sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj2_1);
                  furiaj2_1 = 0;
                  gousmaj2_1 = 0;
                  printf("A gousma inimiga se autodestruiu.\n");
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  if((gousmaj2_1 == 0) && (gousmaj2_2 == 0)){


                    printf("O oponente nao possui mais nenhuma gousma!\n");
                    printf("O vencedor eh %s !!!\n", nome_1);
                    getchar();printf ("Pressione \"enter\" para continuar... \n");
                    getchar();
                    fim3 = 1;
                    break;
                  }else{


                    
                  turno1 = 1;
                  turno2 = 0;
                  }
              }else{ //não sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj2_1);
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  turno1 = 1;
                  turno2 = 0;
              }
                
            }
              
              
        }else{ //atacou a gousma 2
           if((furiaj1_1 > 0)  && (furiaj1_2 > 0)){


              
            
                  printf("%s, escolha com qual gousma deseja atacar a inimiga: 1 ou 2\n", nome_1);
                  printf("R: ");
                  scanf("%d", &usar1);
                  while((usar1 < 1) || (usar1 > 2)){
                    system ("cls || clear");
                    printf("\n escolha invalida, digite 1 ou 2\n");
                    printf("Turno de %s !\n", nome_1);
                    printf("Suas Gousmas:\n");
                    printf("\t Furia gousma 1: %d\n", furiaj1_1);
                    printf("\t Furia gousma 2: %d\n", furiaj1_2);
                    printf("Gousmas de %s:\n", nome_2);
                    printf("\t Furia gousma 1: %d\n", furiaj2_1);
                    printf("\t Furia gousma 2: %d\n", furiaj2_2);
                    printf("%s, escolha com qual gousma deseja atacar a inimiga: 1 ou 2\n", nome_1);
                    printf("R: ");
                    scanf("%d", &usar1);
                  }
               }else if((furiaj1_1 == 0)  && (furiaj1_2 > 0)){


              
            
                  printf("%s, escolha com qual gousma deseja atacar a inimiga: 2\n", nome_1);
                  printf("R: ");
                  scanf("%d", &usar1);
                  while(usar1 != 2){
                    system ("cls || clear");
                    printf("\n escolha invalida, so eh possivel usar a gousma 2 (a gousma 1 ja esta morta)\n");
                    printf("Turno de %s !\n", nome_1);
                    printf("Suas Gousmas:\n");
                    printf("\t Furia gousma 1: %d\n", furiaj1_1);
                    printf("\t Furia gousma 2: %d\n", furiaj1_2);
                    printf("Gousmas de %s:\n", nome_2);
                    printf("\t Furia gousma 1: %d\n", furiaj2_1);
                    printf("\t Furia gousma 2: %d\n", furiaj2_2);
                    printf("%s, escolha com qual gousma deseja atacar a inimiga (%d): 2\n", nome_1, atacar1);
                    printf("R: ");
                    scanf("%d", &usar1);
                  }
                }else if((furiaj1_1 > 0)  && (furiaj1_2 == 0)){


              
            
                 printf("%s, escolha com qual gousma deseja atacar a inimiga (%d): 1\n", nome_1, atacar1);
                 printf("R: ");
                 scanf("%d", &usar1);
                  while(usar1 != 1){
                    system ("cls || clear");
                    printf("\n escolha invalida, so eh possivel usar a gousma 1 (a gousma 2 ja esta morta)\n");
                    printf("Turno de %s !\n", nome_1);
                    printf("Suas Gousmas:\n");
                    printf("\t Furia gousma 1: %d\n", furiaj1_1);
                    printf("\t Furia gousma 2: %d\n", furiaj1_2);
                    printf("Gousmas de %s:\n", nome_2);
                    printf("\t Furia gousma 1: %d\n", furiaj2_1);
                    printf("\t Furia gousma 2: %d\n", furiaj2_2);
                    printf("%s, escolha com qual gousma deseja atacar a inimiga (%d): 1\n", nome_1, atacar1);
                    printf("R: ");
                    scanf("%d", &usar1);
                  }
                }

              if(usar1 == 1){ // usou a gousma 1
                furiaj2_2 = furiaj2_2 + furiaj1_1;
                if(furiaj2_2 > 5){ //sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj2_2);
                  furiaj2_2 = 0;
                  gousmaj2_2 = 0;
                  printf("A gousma inimiga se autodestruiu.\n");
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  if((gousmaj2_1 == 0) && (gousmaj2_2 == 0)){


                    printf("O oponente nao possui mais nenhuma gousma!\n");
                    printf("O vencedor eh %s !!!\n", nome_1);
                    getchar();printf ("Pressione \"enter\" para continuar... \n");
                    getchar();
                    fim3 = 1;
                    break;
                  }else{


                    
                  turno1 = 1;
                  turno2 = 0;
                  }
              }else{ //não sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj2_2);
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  turno1 = 1;
                  turno2 = 0;
              }

              
            }else{ //usou a gousma 2
              furiaj2_2 = furiaj2_2 + furiaj1_2;
              if(furiaj2_2 > 5){ //sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj2_2);
                  furiaj2_2 = 0;
                  gousmaj2_2 = 0;
                  printf("A gousma inimiga se autodestruiu.\n");
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  if((gousmaj2_1 == 0) && (gousmaj2_2 == 0)){


                    printf("O oponente nao possui mais nenhuma gousma!\n");
                    printf("O vencedor eh %s !!!", nome_1);
                    getchar();printf ("Pressione \"enter\" para continuar... \n");
                    getchar();
                    fim3 = 1;
                    break;
                  }else{


                    
                  turno1 = 1;
                  turno2 = 0;
                  }
              }else{ //não sobrecarregou a gousma inimiga
                  printf("A furia da gousma inimiga se tornou: %d\n", furiaj2_2);
                  getchar();printf ("Pressione \"enter\" para continuar... \n");
                  getchar();
                  turno1 = 1;
                  turno2 = 0;
              }
                
            }
                
             }
          }else{  //escolheu dividir
              
            
               if((furiaj1_1 > 0) && (furiaj1_2 == 0 )){

                 printf("Quanto de furia voce deseja passar para a nova gousma?\n");
                 printf("R: ");
                 scanf("%d", &quantDividir1);
                 while(((furiaj1_1 - quantDividir1) < 1) || ((furiaj1_1 - quantDividir1) > 4)){
                   system ("cls || clear");
                   printf("escolha invalida, voce nao pode passar uma quantidade de furia que faca a sua gousma atual ou a nova ficarem com menos de 1 de furia\n");
                   printf("Suas Gousmas:\n");
                   printf("\t Furia gousma 1: %d\n", furiaj1_1);
                   printf("\t Furia gousma 2: %d\n", furiaj1_2);
                   printf("Gousmas de %s:\n", nome_2);
                   printf("\t Furia gousma 1: %d\n", furiaj2_1);
                   printf("\t Furia gousma 2: %d\n", furiaj2_2);                 
                   printf("Quanto de furia voce deseja passar para a nova gousma?\n");
                   printf("R: ");
                   scanf("%d", &quantDividir1);
                   
                 }
                 furiaj1_2 = furiaj1_2 + quantDividir1;
                 furiaj1_1 = furiaj1_1 - quantDividir1;
                 printf("Os novos valores de furia das suas gousmas sao:\n");
                 printf("\t Furia gousma 1: %d\n", furiaj1_1);
                 printf("\t Furia gousma 2: %d\n", furiaj1_2);
                 turno1 = 1;
                 turno2 = 0;
              }else if((furiaj1_1 == 0) && (furiaj1_2 > 0 )){
                 printf("Quanto de furia voce deseja passar para a nova gousma?\n");
                 printf("R: ");
                 scanf("%d", &quantDividir1);
                 while(((furiaj1_2 - quantDividir1) < 1) || ((furiaj1_2 - quantDividir1) > 4)){
                   system ("cls || clear");
                   printf("escolha invalida, voce nao pode passar uma quantidade de furia que faca a sua gousma atual ou a nova ficarem com menos de 1 de furia\n");
                   printf("Suas Gousmas:\n");
                   printf("\t Furia gousma 1: %d\n", furiaj1_1);
                   printf("\t Furia gousma 2: %d\n", furiaj1_2);
                   printf("Gousmas de %s:\n", nome_2);
                   printf("\t Furia gousma 1: %d\n", furiaj2_1);
                   printf("\t Furia gousma 2: %d\n", furiaj2_2);                 
                   printf("Quanto de furia voce deseja passar para a nova gousma?\n");
                   printf("R: ");
                   scanf("%d", &quantDividir1);
                   
                 }
                 furiaj1_1 = furiaj1_1 + quantDividir1;
                 furiaj1_2 = furiaj1_2 - quantDividir1;
                 printf("\nOs novos valores de furia das suas gousmas sao:\n");
                 printf("\t Furia gousma 1: %d\n", furiaj1_1);
                 printf("\t Furia gousma 2: %d\n", furiaj1_2);
                 turno1 = 1;
                 turno2 = 0;
              }

            
          }
        }



        
	  }	  
  } 

    printf("O que você deseja fazer? \n");
	printf("Continuar jogando (1) \n");
	printf("Voltar ao menu principal (0) \n");
	printf("R: ");
	scanf("%d", &continuar_jogo3);
	while((continuar_jogo3 != 1) && (continuar_jogo3 != 0)){
		printf("escolha inválida.");
		printf("\n tente novamente.");
		printf("O que voce deseja fazer? \n");
	printf("Continuar jogando (1) \n");
	printf("Voltar ao menu principal (0) \n");
	printf("R: ");
	scanf("%d", &continuar_jogo3);
    system("cls || clear");
    
    }
   system("cls || clear");
   
   	
   }
   
   
   

  
 

	  system("cls || clear");	
  break;
      case (4): 
  	  system("cls || clear");
  	  return 0;
  break;			
}
  
  }	
  }
  


