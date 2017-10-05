#include<stdio.h>
#include<stdlib.h>


struct _preferencia{
	char nombre[20];
	int pelicula;	
	struct _preferencia *siguiente;
};

struct _preferencia *primero, *ultimo;



int Amigo(){

	struct _preferencia *nuevoNodo;
	nuevoNodo = (struct _preferencia*) malloc(sizeof(struct _preferencia));
	if(nuevoNodo ==NULL){
		printf("Es imposible crear nuevo nodo");
	}
	else{
		printf("Ingrese Nombre: \n");
		scanf("%s",&nuevoNodo->nombre);
		fflush(stdin);		
		printf("presione 1 para avanzar");
		scanf("%i",&nuevoNodo->pelicula);
		fflush(stdin);
		nuevoNodo->siguiente=NULL;
								  if(primero==NULL){
								  	primero=nuevoNodo;
								  	ultimo=nuevoNodo;
								  }
								  else{
								  	nuevoNodo->siguiente=primero;
								  	primero=nuevoNodo;
								  }
	}
}


void mostrar(){
	struct _preferencia *tmp;
	tmp = primero;
	if(tmp ==NULL){
		printf("\n No hay datos de quien vio la pelicula \n");
	}else{
		while(tmp != NULL){
			printf("Nombre: %s \t\n ",tmp->nombre);
			fflush(stdin);
			if(tmp->pelicula == 1){
				printf("Vio la pelicula IT \t\n");
			}else if(tmp->pelicula == 2){
				printf("Vio la pelicula Madre \t\n");
				}else if(tmp->pelicula == 3){
					printf("Vio la pelicula LEGO \t\n");
				}
					tmp=tmp->siguiente;
				}
			} 
			
	}
	

void votarIT(){
		struct _preferencia *tmp;
		int buena = 0;
		int mala = 0;
		int nover = 0;
		int a = 0;
	tmp = primero;
	if(tmp == NULL){
		printf("No hay persona que vea una pelicula\n");
	}else{
		while(tmp != NULL){
			if(tmp->pelicula == 1)	{
				printf("Calificar Pelicula \n");
				printf("Presione: | 1(Buena) | 2(Mala) | 3(No la vio) |\n");
				scanf("%i",&a);
				fflush(stdin);
				if(a == 1){
					buena = buena +1;
				}else{
					if(a == 2){
						mala = mala+1;
					} else {
						nover = nover +1;
					}
				}
			}
			tmp=tmp->siguiente;		
		}
	}
	printf("Total Votos\n");
	printf("Pelicula buena: %i \t\n",buena);
	printf("Pelicula mala: %i \t\n",mala);
	printf("No vio la pelicula: %i \t\n",nover);
	
}
void votarMadre(){
		struct _preferencia *tmp;
		int buena = 0;
		int mala = 0;
		int nover = 0;
		int a = 0;
	tmp = primero;
	if(tmp ==NULL){
		printf("No hay persona que vea una pelicula\n");
	}else{
		while(tmp != NULL){
			if(tmp->pelicula == 1)	{
				printf("Calificar Pelicula \n");
				printf("Presione: | 1(Buena) | 2(Mala) | 3(No la vio) |\n");
				scanf("%i",&a);
				if(a == 1){
					buena = buena +1;
				}else{
					if(a == 2){
						mala = mala +1;
					} else {
						nover = nover +1;
					}
				}
			}
			tmp=tmp->siguiente;		
		}
	}
	printf("Total Votos\n");
	printf("Pelicula buena: %i \t\n",buena);
	printf("Pelicula mala: %i \t\n",mala);
	printf("No vio la pelicula: %i \t\n",nover);
}

void votarLEGO(){
		struct _preferencia *tmp;
		int buena = 0;
		int mala = 0;
		int nover = 0;
		int a = 0;
	tmp = primero;
	if(tmp == NULL){
		printf("No hay persona que vea una pelicula\n");
	}else{
		while(tmp != NULL){
			if(tmp->pelicula == 1)	{
				printf("Calificar Pelicula\n");
				printf("Presione: | 1(Buena) | 2(Mala) |  3(No la vio) |\n");
				scanf("%i",&a);
				if(a == 1){
					buena = buena +1;
				}else{
					if(a == 2){
						mala = mala +1;
					} else {
						nover = nover +1;
					}
				}
			}
			tmp=tmp->siguiente;		
		}
	}
	printf("Total Votos\n");
	printf("Pelicula buena: %i \t\n",buena);
	printf("Pelicula mala: %i \t\n",mala);	
	printf("No vio la pelicula: %i \t\n",nover);
}
void  menu(){
      printf("----------------------------------------------\n");
      printf("1. Agregar Amigo \n");
      printf("2. Mostrar \n");
      printf("3. Ver pelicula IT\n");
      printf("4. Ver pelicula Madre\n");
      printf("5. Ver pelicula LEGO\n");
      printf("0. ~Salir~ \n");
      printf("----------------------------------------------\n");
}

main(){
		int opcion;
		do{
		 	menu();
		 	scanf("%i",&opcion);
		 	if(opcion==1){
		 		Amigo();
		 	}
		 	else if(opcion==2){
		 		mostrar();
		 	}
		 	else if(opcion==3){
		 		votarIT();
		 	}
		 	else if(opcion ==4){
				votarMadre();
		 	}
		 	else if(opcion==5){
				votarLEGO();
		 	}
		 	else if(opcion==6){

		 	}
		 	else if(opcion==7){
		 	}
		 }while(opcion!=0);
		 system("pause");
}
