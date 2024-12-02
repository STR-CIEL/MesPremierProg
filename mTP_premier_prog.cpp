#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream> 

using namespace std;


int main(){
	int nbCara;
	char c;
	
	nbCara = printf("Premier programmme \n");
	printf("\nSection %s promotion %d \n", "CIEL", 2026);
	printf("\n Le point de fusion du mercure est de %f \xF8 C soit environ %f \xF8 C\n", -38.842, -38.842);

	printf("Total : %d \n ", printf("Premier programme\n " ) );
	
	
	int jour=0, mois=0, annee=0;  //Variables pour le jour, mois et annee 
	
	scanf_s("%i %i %i", &jour, &mois, &annee);  //Lit le jour, mois et annee
	while ((c = getchar()) != '\n' && c != EOF); // Lire des caractères jusqu'à un saut de ligne ou la fin du fichier
	printf("Date : %i / %i / %i \n", jour, mois, annee);  //  Affiche le date (jour/mois/annee)
	
	char nomSaisi [10];    //Tableau pour stocker un nom (max 9 caractères)
	int ageSaisi, nbHex;  //Variables pour l'ages et nbHex
	printf("Entrer votre nom : ");   //Demande de saisie du nom et prenom
	scanf_s("%9s", nomSaisi, _countof(nomSaisi));  //Lit jusqu'a 9 caracteres du nom
	char prenomSaisi[6];  //Tableau pour stocker un prenom (max 5 caracteres)
	printf("Entrer votre prenom: "); //Demande de saisie du prenom
	scanf_s("%5s", prenomSaisi, _countof(prenomSaisi));  //Lit jusqu'a 5 caracteres du prenom
	printf("Entrer votre age: ");  //Demande de saisie de l'age 
	scanf_s("%d", &ageSaisi);   //Lit un entier pour l'age 
	printf("Mr. %s %s a %d ans\n", nomSaisi, prenomSaisi, ageSaisi); //Affiche le nom et l'age 


	printf("Entrer un nombre en hexadecimal : "); //Demande de sasie un nombre hexadecimal
	scanf_s("%x", &nbHex); //Lit un nombre hexadecimal 
	printf("Vous avez saisi %#x (%d).\n", nbHex, nbHex);  //Affiche le nombre hexadecimal et converir le en decimal







		
	_getch();
	
	return(0);
	
	
}




//Nom du projet : TP IDE VS et premiers programmes V2024
//nom de l'autor: Strazimiri Besim
//date de creation : 09/09/2024
//revision ou version : 1.0
//Version du compilateur : Visual Studio 2022
//resume :Ce programme permet d'afficher des messages, de lire des entrées utilisateur (nom, prénom, âge, date, et nombre en hexadécimal), 
//         et de les afficher avec différents formats. Il utilise des fonctions telles que `printf` et `scanf_s` pour les E/S, ainsi que 
//         la manipulation de types de données variés (entiers, flottants, et chaînes de caractères).
