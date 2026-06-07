# ⭐ Gestion d'un Parc de Voitures en C

Ce projet est une application console développée en **C** permettant de gérer un inventaire de véhicules. Il a été réalisé dans le cadre de mes révisions pratiques pour maîtriser la manipulation des structures complexes et la gestion des tableaux en C.

---

## ⭐ Fonctionnalités

Le programme est entièrement modulaire et découpé en fonctions indépendantes pour accomplir les tâches suivantes :
1. **Saisie d'un véhicule** (`SaisirVoiture`) : Enregistre de manière interactive la marque, le modèle, l'année et le prix d'une voiture.
2. **Saisie du parc** (`SaisirListeVoiture`) : Remplit un tableau global de structures pour gérer plusieurs voitures simultanément.
3. **Affichage complet** (`AfficherListeVoiture`) : Liste proprement toutes les voitures enregistrées dans le terminal.
4. **Algorithme de Maximum** (`ChercherVoiturePlusChere`) : Parcourt le parc informatique pour isoler et afficher le véhicule le plus coûteux.
5. **Recherche par Filtrage** (`ChercherVoitureParMarque`) : Permet à l'utilisateur de saisir une marque et d'extraire tous les modèles correspondants grâce à une comparaison de chaînes de caractères.

---

## ⭐ Compétences Techniques Démontrées

En développant ce code sans assistance automatisée, j'ai validé les concepts clés suivants :
* **Structures en C (`struct`)** : Encapsulation de types de données hétérogènes (chaînes, entiers, réels).
* **Passage de structures** : Manipulation et retour de blocs de structures par valeur à travers des fonctions sans instanciation inutile de pointeurs.
* **Traitement des chaînes de caractères** : Utilisation de la bibliothèque `<string.h>` et de la fonction `strcmp()` pour sécuriser la comparaison des textes.
* **Logique algorithmique** : Implémentation d'un algorithme de recherche séquentielle de maximum et gestion de drapeaux de validation (`trouve`).

---

## ⭐ Comment Exécuter le Projet

### Prérequis
Un compilateur C standard (comme `GCC`) et un environnement de développement (comme VS Code avec l'extension Code Runner).

### Compilation et Exécution directe en Terminal :
```bash
gcc Voiture.c -o Voiture
./Voiture
