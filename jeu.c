  #include "Puissance4.h"
  
    
    void AfficherRegles(void){
        printf("==Puissance 4==\n Aligner 4 Jetons horizontalement, verticalement ou en diagonale.\nLes Colonnes sont numerotees de 1 à 7\n");
    }
    int ColonneValide(int colonne){
        if (colonne<1 || colonne>7){
            return 0;
        }
        return 1;
    }

    int DemanderColonne(void){
        int TestColonne = 0;
        int Colonne;
        while (TestColonne=0){
            printf("Donner une Colonne: ");
            scanf("%d",&Colonne);

            TestColonne=ColonneValide(Colonne);
        }
    return Colonne;
    } 