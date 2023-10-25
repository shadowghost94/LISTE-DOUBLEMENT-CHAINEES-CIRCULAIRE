# LISTE-DOUBLEMENT-CHAINEES-CIRCULAIRE
CE REPOSITORIE CONTIENT MON PROJET DE CREATION D'UNE LISTE DOUBLEMENT CHAINÉES CIRCULAIRE. COMMENTÉ ET EXPLIQUÉ. CI-DESSSOUS UN PEU PLUS D'EXPLICATION  
      -La variable static globale nombre, est une variable qui permet d'attribuer un identifiant unique à une liste. Ainsi à chque fois qu'une nouvelle liste
      est initialisé, on incrémente la valeur de variable nombre de 1 afin que la prochaine liste puisse prendre le nombre entier suivant. Par exemple si on
      instancie une première liste, nombre prendra la valeur 1 car sa valeur de création était 0. L'instanciation d'une deuxième liste affectera le numéro 2 
      comme identifiant à cette nouvelle liste car 2=nombre+1.  
      -la fonction initialize est une fonction de base qui permet d'affecter à zéro une liste nouvellement crée sans cellule  
      -la fonction addDebut permet d'ajouter une cellule de valeur en début de chaine
      -la fonction addFin permet d'ajouter une cellule de valeur en "fin de chaine", c'est-à-dire avant la début en lecture inverse de la liste
      -la fonction addPos permet d'ajouter une cellule quelconque à une position donné de la chaine qui soit entre deux cellules existants déja 
      -la foncton Suppr permet de supprimer une cellule quelconque, à n'importe quelle position de la liste
