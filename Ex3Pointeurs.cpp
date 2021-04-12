/*
Écrire une fonction minmax qui permet de trouver, parmi les entiers d’un tableau, l’entier le plus petit et l’entier le plus grand.
Cette fonction est définie comme suit :
void minmax(int *t, int taille, int *tmin, int *tmax)
int *t : un pointeur sur le tableau d’entier
int taille : la taille du tableau
int *tmin : un pointeur vers l’entier le plus petit du tableau
int *tmax : un pointeur vers l’entier le plus grand du tableau
*/
#include <iostream>

using namespace std;


void minmax(int* t, int taille, int* tmin,int* tmax,int a) // on crée  notre fonction avec tous les argument mis sur le tp
 {
    	a=1;						     // on mets a la varaible a
    	*tmin = *t; 					    // la valeur pointer par la variable le pointeur tmin se ecraser par la premiere valeure du tableau     
    	tmax = &a;				            // le pointeur tmax pointe la variable a 
 
    		
    	for (int i=0;i < taille ;i++)
	 {
 	   cout << *t  <<  endl;			// on affiche le tableau
 	   

 	   
 	   	if(*tmin > *t)				// si la valeur afficher du tableau est plus petite que la valeur de tmin on rentre dans le if  
 	   	{
 	   		*tmin = *t;			// on ecrase la valeur de tmin puis on mets la valeur du tableau
 	   	}
 	   	
 	   	if(*tmax < *t)				// si la valeur afficher du tableau est plus grande  que la valeur de tmax on rentre dans le if 
 	   	{
 	   		*tmax = *t;			// on ecrase la valeur de tmax puis on mets la valeur du tableau
 	   		
 	   	}
 	   	
 	   	 	  
 	   	t++;					// on incrémente le pointeur de la varaible  t pour afficher le reste du tableau 
	 }
	 
	  cout << "voici la valeur la plus petite \t\t\t" << *tmin <<endl << "voici l'endroit ou la varaiable est stocker \t" << tmin << endl;//on affiche la varaible avec la plus petite valeur avec l'endroit ou elle stocker 
	  cout << "voici la valeur la plus garande \t\t" << *tmax << endl << "voici l'endroit ou la variable est stocker \t" << tmax << endl;//on affiche la varaible avec la plus grande valeur avec l'endroit ou elle stocker 

 }

		


int main()
{

	
 	int i=0,taille=5,a,tab[5]={100,44,32,90,16}; // on crée les varaible avec le tableau 
 	int *t,*tmin,*tmax;                        // on crée les varaibles du pointeurs 
 	
 	
 	t=tab;					 // le pointeur t pointe le tableau
	 
	 minmax(t,taille,tmin,tmax,a);	// les fonctions avec les argumetns
	
	 

return 0;
}

