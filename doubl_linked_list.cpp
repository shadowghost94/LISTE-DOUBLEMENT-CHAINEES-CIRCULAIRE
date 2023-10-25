#include <iostream>
using namespace std;
static int nombre=0;                //nombre de liste doublement chainée crée

typedef struct cellule cellule;
struct cellule
{
    int valeur;                     //valeur à stocker
    cellule *suivant;               //pointeur sur la cellule suivante
    cellule *arriere;               //pointeur sur la cellule précédente
};

typedef struct liste liste;
struct liste
{
    int num_liste;
    int nbr_crnt_cellule;
    cellule *tete;                           //pointeur sur la cellule de tête de la liste

};

/**
    @pre
        -reçoit l'adresse d'une liste chainée de type liste
        -num_liste vaut 0
        -le nombre courant de cellule vaut 0
        -les pointeurs suivant et predecc pointent tout deux sur une le pointeur null

    @post
        -on affecte un numéro de liste à la liste en utilisant la variable static nombre incrémenté de 1
        -on initialise les deux pointeurs (suivant & predecc) sur nullptr

*/
void initialize(liste *chain)
{
    chain->num_liste= ++nombre;
    chain->nbr_crnt_cellule=0;

    chain->tete->suivant= chain->tete;
    chain->tete->arriere= chain->tete;
};

void addDebut(liste *chain, int val)
{
    /*
        -chain est une liste chainée quelconque de type liste
        -val représente la valeur à ajouter en début de la liste chain 
    */
    cellule *cell0= new cellule;                //création d'une nouvelle cellule
    cell0->valeur= val;                         //affectation de val à la variable valeur de la nouvelle cellule
    chain->nbr_crnt_cellule+=1;                 //on augmente de 1 le nombre courant de cellule

   /*on met un contrôle pour s'assurer que la cellule nouvellement crée existe*/
   if(cell0 != NULL)
   {
        //processus de chainage de la tête de liste à notre nouvelle cellule cell0 (au suivant)
        cell0->suivant= chain->tete;
        chain->tete->suivant= cell0;

        cell0->arriere= chain->tete;
   }else
   {
        cerr<<"l'espace n'a pas été alloué correctement"<<endl;
   }
};

int main()
{
    return 0;
}