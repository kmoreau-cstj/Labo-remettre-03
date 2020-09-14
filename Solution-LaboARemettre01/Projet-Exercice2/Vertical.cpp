/* But: �crire  un programme qui prend comme entr�e un nombre de cinq chiffres. Le programme v�rifie qu'il y a bien
5 chiffres dans le nombre.Puis il affiche le nombre verticalement, le premier chiffre sur la premi�re ligne, le
deuxi�me chiffre sur la deuxi�me ligne, ainsi de suite.*/
// Auteur: Samuel Allaire
// Date: 2020-09-12

#include <iostream> // Pour communiquer avec l'utilisateur 

int main() // La porte d'entrer pour le programme
{
	setlocale(LC_ALL, "");  // Pour afficher correctement les accents dans la console

    // D�claration des variables
	int nombre5chiffres;

	// Le programme doit afficher un message pour inviter l'utilisateur � entre un nombre entier � 5 chiffres
	std::cout << "Veuillez entrer un nombre entier � 5 chiffres : ";
	// Le programme doit lire le nombre qui � �t� tap� au clavier
	std::cin >> nombre5chiffres;

	// Le programme lit le chiffre entier et d�termine si le nombre contient 5 chiffres
	if ((nombre5chiffres >= 10000 && nombre5chiffres <= 99999) or (nombre5chiffres <= -10000 && nombre5chiffres >= -99999))
	{
		// Le programme doit afficher afficher le nombre verticalement
		std::cout << nombre5chiffres / 10000 % 10 << "\n" << nombre5chiffres / 1000 % 10 << "\n" << nombre5chiffres / 100 % 10 << "\n" << nombre5chiffres / 10 % 10 << "\n" << nombre5chiffres % 10;
	}
	else
	{
		// Le programme doit afficher un message qui indique que le nombre n'a pas 5 chiffres
		std::cout << "Ce nombre ne contient pas 5 chiffres.";
	}
}

// Plan de tests
/*
Nombre                        r�sultat escompt�
17                            Ce nombre ne contient pas 5 chiffres.
4231                          Ce nombre ne contient pas 5 chiffres.
-82134                        -82134 est affich� ligne par ligne
-4                            Ce nombre ne contient pas 5 chiffres.
12345                         12345 est affich� ligne par ligne
*/