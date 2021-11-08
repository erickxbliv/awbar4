#include <stdio.h>

int main(void) {
	int i,fim;
	float levels,souls,contador,lvpq;
	souls = 673;
    printf("Para qual level voce gostaria de avancar? \neu posso ajudar dizendo o preco que custa para chegar la \ne quanto avancar novamente custara quando chegar \no preco para o level 1 e 0, e para o 2 e 673 \nqual seu nivel de desejo: ");
	scanf("%f", &levels);
	
	if(levels==1){
		printf("\no preco para isso sera totalmente gratis");
		scanf("%d", &fim);
		return 0;
	}else if(levels<1){
		printf("\neu nao entendi.. isso nao fez sentido");
		scanf("%d", &fim);
		return 0;
	}else if(levels<=12){
		lvpq = levels;
	}else if(levels>12){
		lvpq = 12;
	}
	

	
	for (i=1;i<lvpq;i++){
		souls = souls*1.0239;
		//printf("\n repeticao %.0d preço %.0f e nivel %.0f", i,souls,levels);
		contador += souls;
	}

	for (i=12;i<levels;i++){
		souls = souls*1.225;
		contador += souls;
	}
	
	if(levels==2){
		contador = 673;
	}else{
		contador = contador - souls;
		contador += 673;
	}
	
	printf("\n o preco para o nivel %.0f e de %.0f", levels+1,souls);
	printf("\n voce tera gasto %.0f", contador);
	scanf("%d", &fim);
    return 0;

	//qual nivel a pessoa ja esta para diminuir o custo ate ele no total
}











    //int i,fim;
   // float levels,souls,contador;
  //  souls = 100;
   // printf("Para qual level voce gostaria de avancar? \neu posso ajudar dizendo o preco que custa para chegar la \ne quanto avancar novamente custara quando chegar \no preco para o level 1 e 0, e para o 2 e 673 \nqual seu nivel de desejo: ");
  //  scanf("%f", &levels);

  //  if(levels==1){
 //       printf("\no preco para isso sera totalmente gratis");
//        scanf("%d", &fim);
 //       return 0;
 //   }else if(levels<1){
 //       printf("\neu nao entendi.. isso nao fez sentido");
//        scanf("%d", &fim);
//        return 0;
//    }

  //  for (i=1;i<levels;i++){
  //      souls = souls*1.5;
  //      contador += souls;
  //  }

 //   if(levels==2){
 //       contador = 100;
 //   }else{
  //      contador = contador - souls;
 //       contador += 100;
  //  }

  //  printf("\n o preço para o nivel %.0f e de %.0f", levels+1,souls);
 //   printf("\n voce tera gasto %.0f", contador);
 //   return 0;

    //qual nivel a pessoa ja esta para diminuir o custo ate ele no total
//} 