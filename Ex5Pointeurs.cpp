/*
En utilisant que des pointeurs sur un tableau de caractères, écrire une fonction (et le main qui va avec) pour inverser une chaine de caractère. Par exemple la chaine snir2 deviendra 2rins.
Vous prendrez deux pointeurs : un au début de la chaine et un à la fin de la chaine que vous ferez bouger.
options :
    • permettre à l’utilisateur de rentrer la chaine lors de l’appel du programme (en paramètre)
    • permettre de détecter les palindromes
*/
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

 void inverse(char mt[20]){									// on crée notre fonction avec l'argument mt avec 20 caractére max
	 string reverse,word;									// on declare les varaiables chaine de caractére string
	char *p;										// on decalre la variable pointeur de p tant que chaine de caractere
	int len,i,compteur,y;									// on déclare les varaibles entier
	cout << "rentrer un mots"  << endl;							// on demande a 'utilisateur de de rentrer un mot  
	cin  >>  mt;										// on enregistre le mot dans la variable mt
	len = strlen(mt);									// varaible len avec la fonction strlen qui nous permet de compteur le nombre des chaines de caractéres 
  	p = mt;										// la varaible p pointe la varaible mt
  	
  		
    	for ( i=0;i < len ;i++)								// boucle for qui quitte la boucle quand a la fin de la varaible len 
	 {
	   reverse[i] = *p ;									// on mets la valeur  du pointeur  *p dans la variable reverse jusqua que on quitte la boucle 
	    p++;										// on incremente le pointeur p pour que il affiche les autres valeurs 
	 } 
	
	 for ( i=len-1 ; i > -1 ;i--)								// boucle for qui commence à la fin de la chaines de caractére   					
	 {
	 
	  cout <<reverse[i];									// on affiche les valeurs de la fin jus'au debut 
									
	  
	 }   
	 compteur=0;										// la varaible compteur = 0 
	 for (i=0,y=len-1; i < len; i++,y--)							// on declare la varaible for pour qui s'affiche la chaine de caractére dans le 2 sens 
	 {
	
	 	 if (mt[i] == reverse[y])							// si la chaine de caractére  est egale que la chaine de caractére inverse on rentre dans le if 
	 	{
	 	
	 		compteur++;
	 		
	 	}
	
	
	 }
	 
	if (compteur == len)									// si le compteur est egal  la meme chose que len par du coup c'est un plaindromes  
	{
		cout << "   \t c est un  palindromes";
	}
	
	

 } 
 
int main()
{
	char mt[20];										// on declare la variable mt 
	
	inverse(mt);										// on appeller la fonction inverse 
  	


	
    return 0;
}

