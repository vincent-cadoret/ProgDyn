# ProgDyn - Vincent Cadoret

## Démarrage :
Pour ce TP vous allez devoir récupérer le projet « ProgDyn » via GitHub. Ce projet contient les déclarations de différentes fonctions permettant de tester la dychotomie, le sac à dos et le PGCB.
Précision : 
- L'ensemble du code est versionné.
- Le Frameworks de test est CUnit.
- Le code est commenté et la documentation peut etre généré avec Doxygen.
## Description de l'application : 
Le programme ProgDyn propose 3 fonctions; 
- La recherche par dichotomique est un algorithme de recherche pour trouver la position d'un élément dans un tableau trié. Le principe est le suivant : comparer l'élément avec la valeur de la case au milieu du tableau ; si les valeurs sont égales, la tâche est accomplie, sinon on recommence dans la moitié du tableau pertinente. Le nombre d'itérations de la procédure, c'est-à-dire le nombre de comparaisons, est logarithmique en la taille du tableau. Il y a de nombreuses structures spécialisées (comme les tables de hachage) qui peuvent être recherchées plus rapidement, mais la recherche dichotomique s'applique à plus de problèmes.

- Le problème du sac à dos est un problème d'optimisation combinatoire. Il modélise une situation analogue au remplissage d'un sac à dos, ne pouvant supporter plus d'un certain poids, avec tout ou partie d'un ensemble donné d'objets ayant chacun un poids et une valeur. Les objets mis dans le sac à dos doivent maximiser la valeur totale, sans dépasser le poids maximum. 
- Le PGCB (Plus Grand Carré Blanc) à pour objectif de trouver le plus grand carré de '0' dans un matrice composé de '0' et de '1'.

## Comment installer et lancer le projet :
Tout d'abord, il faut installer cmake et doxygen: 

``
sudo apt install cmake doxygen -y
``

Ensuite build le CMake dans le répertoire du projet :

``
cd ProgDyn
``

``
cmake .
``

Une fois le MakeFile généré, on execute la commande dans le dossier du projet :

``
sudo make
``

On peut maintenant lancer le projet ! 

``
./ProgDyn
``

Si on souhaite supprimer l'executable :

``
sudo make clean
``

## Auteurs
* **Vincent Cadoret** _alias_ [@vincent-cadoret](https://github.com/vincent-cadoret)
## Sources : 
- [Dichotomie](https://fr.wikipedia.org/wiki/Dichotomie) - Wikipedia
- [Sac à dos](https://fr.wikipedia.org/wiki/Probl%C3%A8me_du_sac_%C3%A0_dos) - Wikipedia
- [PGCB](http://www-desir.lip6.fr/~spanjaard/pmwiki/uploads/ProgrammationDynamique.pdf) - desir.lip6.fr