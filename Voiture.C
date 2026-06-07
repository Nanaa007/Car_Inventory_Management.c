#include <stdio.h>
#include <string.h>
#define MAX 100
struct voiture{
    char marque[50];
    char modele[50];
    int annee;
    float prix;
   
};
struct voiture SaisirVoiture(){
    struct voiture v;
    printf("marque:\n");
    scanf("%s", v.marque);
    printf("modele:\n");
    scanf("%s", v.modele);
    printf("annee:\n");
    scanf("%d", &v.annee);
    printf("prix:\n");
    scanf("%f", &v.prix);
    
    return v;
}
void AfficherVoiture(struct voiture v){
    printf("la marque: %s\n", v.marque);
    printf("le modele: %s\n", v.modele);
    printf("l'annee: %d\n", v.annee);
    printf("le prix: %.2f\n", v.prix);
}
void SaisirListeVoiture(struct voiture voitures[], int n){
    for(int i=0;i<n;i++){
        printf("Saisie de la voiture numero %d:\n", i+1);
        voitures[i]=SaisirVoiture();
    }
}
void AfficherListeVoiture(struct voiture voitures[], int n){
    for(int i=0;i<n;i++){
        printf("----Voiture %d----\n",i+1);
        AfficherVoiture(voitures[i]);
        printf("\n");
    }
}
struct voiture ChercherVoiturePlusChere(struct voiture voitures[], int n){
    struct voiture max=voitures[0];
    for(int i=0; i<n; i++){
        if(max.prix<voitures[i].prix){
        max = voitures[i];
        }
    }    
    return max;
}
void ChercherVoitureParMarque(struct voiture voitures[], int n, char marqueVoiture[]){
    int trouve=0;
    for(int i=0; i<n ;i++){
        if(strcmp(voitures[i].marque ,marqueVoiture)==0){
            printf("----voiture trouvee----\n");
            AfficherVoiture(voitures[i]);
            printf("\n");
            trouve=1;
        }  
    }

    if(trouve==0){
        printf("voiture non trouvee!!\n");
    }
}
int main() {
    struct voiture parc[MAX];
    int n;
    char marqueVoiture[50];
    
    printf("Combien de voitures voulez-vous gerer dans votre parc ? :\n ");
    scanf("%d", &n);

    // Saisie de la liste
    SaisirListeVoiture(parc, n);

    // Affichage de la liste
    printf("\n---LISTE DE VOITURE---\n");
    AfficherListeVoiture(parc,n);

    // recherche de la voiture la plus chere
    printf("---LA VOITURE LA PLUS CHERE---\n");
    struct voiture chere = ChercherVoiturePlusChere(parc, n);
    AfficherVoiture(chere);

    // recherche de voiture par marque
    printf("---MARQUE DEMANDEE---\n");
    printf("Entrez une marque a rechercher : \n");
    scanf("%s", marqueVoiture);
    ChercherVoitureParMarque(parc, n , marqueVoiture);

    return 0;
}