// a) presentarse a votar.
// b) votar por algun candidato.
// c) cerrar la votacion.
// d) contar los votos.
// e) ver quien mas votos y designarlo como ganador.


///


# include <stdio.h>
	int main () { 
	int voto, c1=0, c2=0, c3=0, nulos=0, total_votos=0;
	char final;
		
	while(final!='f'){
		printf("Ingrese voto: ");
		scanf("%d", &voto);
		if (voto==1){
			c1++; 
		}
		else if (voto==2){
			c2++;
		}
		else if (voto==3){
			c3++;
		}
		else{
			nulos++;
		}
		while (getchar()!='\n');
		printf("se detiene la votacion: ");
		scanf("%c", &final);
	}
		
	total_votos = c1 + c2 + c3 + nulos;
	printf("total_votos: %d", total_votos);
				
	if ((c1>c2) && (c1>=c3)){
		printf("c1 gana");
	}
	
	else if ((c2>c1)&&(c2>=c3)){
		printf("c2 gana ");
	}
	else if ((c3>c1)&&(c3>=c2)){
		printf("c3 gana");
	}
	else{
		printf("no se ha podido determinar, vayase a segunda vuelta");
	}
	return 0;
}
