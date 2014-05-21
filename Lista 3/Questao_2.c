#include <stdio.h>

int main(){
	int hab, i=1;
	float kwh, media, maior, menor, total1, total2, total3;
	maior=0;
	menor=999999999;
	total1=0;
	total2=0;
	total3=0;
	media=0;
	
	printf("Digite o numero de habitantes da cidade: ");
	scanf("%d", &hab);
	printf("\n\nDigite o valor do kwh: ");
	scanf("%f", &kwh);

	float cons_mes[hab];
	float id_hab[hab];
	
	cons_mes[1]=1.0;		//Para poder entrar no while da próxima linha.
	media=0;

	while ((i<=hab) && (cons_mes[i] != 0)){
		printf("Digite o consumo do mes para o habitante %d. [0 para sair!]\n", i);
		scanf("%f", &cons_mes[i]);		
		
		media=media+cons_mes[i];

		if(cons_mes[i]<=160){
			id_hab[i]=1;	//Residencial
			total1=total1+cons_mes[i];
		}

		if((cons_mes[i]>160) && (cons_mes[i]<=500)){
			id_hab[i]=2;	//Comercial
			total2=total2+cons_mes[i];
		}
	
		if(cons_mes[i]>500){
			id_hab[i]=3;	//Industrial
			total3=total3+cons_mes[i];
		}
		
		if(cons_mes[i]>maior){                              
			maior=cons_mes[i];
		}
		if (cons_mes[i]<menor){
			menor=cons_mes[i];
		}
		i++;
	}		
media=media/hab;	
printf("\n\nO maior consumo de um habitante foi: %.2f", maior);
printf("\nO menor consumo de um habitante foi: %.2f", menor);
printf("\nA media do consumo dos habitantes eh: %.2f", media);
printf("\n\n\Total de consumo de cada categoria:\n");
printf("1-Residencial: %.2f", total1);
printf("\n2-Comercial: %.2f", total2);
printf("\n3-Industrial: %.2f\n", total3);

system("pause");
return 0;
}
