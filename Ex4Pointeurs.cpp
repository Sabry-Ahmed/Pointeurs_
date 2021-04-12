/*
Écrire une fonction nba et le main qui va avec pour compter le nombre de ‘a‘ qu’il y a dans un tableau de caractères.
La fonction nba prend en paramètre un pointeur vers un tableau de caractères.
La fonction main remplit le tableau de caractère avec une chaîne de caractère saisie par l’utilisateur.

*/
#include <iostream>
#include <cstring>
#include <string>


using namespace std;
  void nba(char mt[20]) // on declare la fonction nba avec l'argument mot que l'utilisateur a saisie 
	{
		 				                                                  
		char *p;         // on decalre la variable pointeur de p tant que chaine de caractere 
		int len,i=0,compteur=0; // on declare les varaible entier 
		len = strlen(mt);    // varaible len avec la fonctiob strlen qui nous permet de compteur le nombre des chaines de caractéres 
		p = mt;		// la varaible p pointe la varaible mt
		for(i=0;i< len;i++)	// boucle for qui se temine quand on termine len qui est la longueur de la chaine de caractére 
		{
			
			     if( *p == 'a' or *p == 'A' ) // si dans la varaible ou la varaible  p  pointe on trouve A ou a on increment de 1 le compteur 
			  {
			  	compteur++;
			  	
			  }
		
			
			  p++;	//on incremente le p pour afficher le reste de  resulat  
		}
		
		cout << "Dans le mot que vous avez saisi il y a "<<compteur<<" a " << endl; // on affiche le resulat 
	}  
int main() // fonction principale 
{
 	char mt[20];	// on declare a varaiable mot ou mt avec 20 caractéres max 
	 
 	cout << "rentrer un mot"  << endl;                   // on demande de l'utilisateur de rentrer un mot 
	cin  >>  mt;						// on le mets dans la varaible mt 
	nba(mt); 						// on appelle la fonction nba avec l'argument mt 
    return 0;
}
