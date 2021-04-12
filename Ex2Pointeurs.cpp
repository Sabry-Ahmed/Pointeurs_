/*
Écrire une fonction échange et la fonction main qui l’appelle. La fonction échange prend en paramètre 2 pointeurs sur des entiers et échange le contenu des deux entiers pointés.
*/
#include <iostream>

using namespace std;

    
void echange(int* a,int* b )// on declare notre fonctions avec les pointers entiers 
    {
      
       int  changevalues=0;         //  on declare une variable qui nous permet de change les alues sans les perdre
       changevalues=*a;	  //  avec la varaiable  qui pointer par a on ecrase la valeur qui est dans la varaiable changevalues puis on stocker la valeur qui est dans la varaible pointer par  a  
        *a=*b;                   // avec la varaiable  qui pointer par b on ecrase la valeur qui est pointer  par la variable pointer a puis on stocker la valeur qui est dans la varaible pointer par  b  
 	*b=changevalues;          // on reprend la valeur qui etait tout debut dans la variable a puis que on la mis dans la varaible changevalues  on restock dans la variable b
    }

int main()
{
    
 int i=30 ,j = 200;					// on declare les variables i et y en tant que entier  et on initialise la variable i avec  30 zt on initialise la variable j avec  200  
 int *x,*y;						// on declare les variables x et y tant que pointeur entier 
 x=&i;                                                // la variable x pointe l'adresse de a 
 y=&j;
 cout << "voici x avant le changement \t"<<*x << "  voici y avant le changement \t"<<*y << endl; 
 
 echange(x,y);


 
 cout << "voici x apres le changemet   "<< *x << "   voici y apres le changement  "<< *y << endl;

    return 0;
}


