// a) saber el valor del traje.
// b) saber si es mayor o menos a 2500
// c) aṕlicarle el porcentaje correspondiente .


# include <stdio.h>

int main () { 
	int valor_traje = 0;
	float descuento1, descuento2;
		
	printf("dame el valor del traje porfa \n");
	scanf("%d", &valor_traje);
	
		
	if (valor_traje > 2500){
		printf("se le aplicara un descuento de 15 p \n");
		descuento1 = (valor_traje*0.85);
		printf("con el descuento pagara: %f \n", descuento1);
	}
	else if (valor_traje<= 2500){
		printf("el traje tiene un descuento del 8 p\n");
		descuento2=(valor_traje*0.85);
		printf ("con el descuento pagara: %f\n", descuento2);
	}
	
	return 0;
}
		
		
		
	
