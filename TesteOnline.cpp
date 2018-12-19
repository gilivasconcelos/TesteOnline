//salvar arquivo como .cpp e rodar no Dev C++

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main(){

int n =0;
int i =0;
int x = 0;
int menor = 0;
int maior=0;



printf("******** Teste Online ********\n");

while( x != 1 ) {
	
	//define a quantidade de numeros da sequencia
printf("\n Entre com a quantidade de N numeros da sequencia que deseja validar \n ");
  scanf("%d", &n);  
  
   int vet[n];
  //leitura da sequencia
  	printf("\n Digite os numeros da sequencia");
    for(i = 1; i <= n ; i++)
  {
  	printf("\n ");
  	scanf("%d", &vet[i]);  
  	
  }
  
  
   menor = vet [0];
   maior = vet [0];
   
    	//pega menor valor

    for(i = 0; i <= n ; i++)
  {
  	if (menor > vet[i]) 
	  {
	  	
	 menor = vet[i];
      }
  }
   //pega maior valor
    for(i = 0; i <= n ; i++)
  {
     
	if (maior < vet[i])
	 {
	 	 maior = vet[i];
       }
   }
          //faz a media
   double media=0;
     int soma = 0;
     for(i = 0; i <= n ; i++)
  {
 
      soma = vet [i] + soma;
  }
   media = soma / n;

  
    printf(" O Valor minimo e de %d \n", menor);
    printf(" O Valor maximo e de %d \n", maior);
    printf(" O Numero de elementos na sequencia e de %d \n", n);
    printf(" O Valor medio e de %.2f \n", media) ;              
                            
printf("\n Digite 1 para sair ou 2 caso desejar repetir a operacao \n ");
  scanf("%d", &x);  
      }


}
