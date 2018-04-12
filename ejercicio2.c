
//a) ir al restaurante
//b) comer 
//c) pedir la cuenta
//d) dividir la cuenta en la cantidad de personas que comieron
//e) pagar la cuenta 





# include <stdio.h>
	int main () {
		int cuenta, propina, personas, cada_persona_paga;
		float iva;
	
		printf("ingrese la cuenta: ");
	scanf("%d", & cuenta);
	iva= (cuenta*19)/100;
	printf("iva: %f", iva);
	
	propina= (cuenta + iva)*10/100;
	printf("propina: %d", propina);
	
	cuenta= cuenta + iva + propina;
	printf("el total de la cuenta es:%d", cuenta);
	
	printf("ingrese numero de personas: ");
	scanf("%d",&personas);
	cada_persona_paga= (cuenta/ personas);
	printf("cada persona debe pagar: %d", cada_persona_paga);
	
	return 0;
}

