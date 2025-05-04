# libft

> Projet réalisé dans le cadre du cursus de l'école 42  
> Création d'une bibliothèque C contenant des fonctions de base utilisées dans de nombreux projets.

## 🧠 Objectif

Le projet **libft** consiste à implémenter une bibliothèque personnalisée en C, regroupant des fonctions de manipulation de chaînes de caractères, de gestion de mémoire, de conversion, etc.  
L’objectif est de maîtriser les bases du langage C, comme la gestion dynamique de la mémoire, le traitement des chaînes de caractères, et les algorithmes de base. Cette bibliothèque servira de base pour d'autres projets dans le cursus 42.

## 🔧 Fonctionnalités et fonctions implémentées

La bibliothèque **libft** comprend les fonctions suivantes :

### Fonctions de manipulation de chaînes de caractères
- `ft_strlen` : Calcule la longueur d'une chaîne de caractères.
- `ft_strdup` : Crée une copie d'une chaîne de caractères.
- `ft_strcpy` : Copie une chaîne de caractères dans une autre.
- `ft_strcmp` : Compare deux chaînes de caractères.
- `ft_strcat` : Concatène deux chaînes de caractères.

### Fonctions de gestion de la mémoire
- `ft_memset` : Remplit une zone de mémoire avec un octet donné.
- `ft_memcpy` : Copie une zone de mémoire vers une autre.
- `ft_memmove` : Copie une zone de mémoire en gérant les chevauchements.
- `ft_bzero` : Met une zone de mémoire à zéro.

### Fonctions de conversion
- `ft_atoi` : Convertit une chaîne de caractères en entier.
- `ft_itoa` : Convertit un entier en chaîne de caractères.
- `ft_itoa_base` : Convertit un entier en chaîne de caractères dans une base spécifiée.

### Fonctions diverses
- `ft_isdigit` : Vérifie si un caractère est un chiffre.
- `ft_isalpha` : Vérifie si un caractère est une lettre alphabétique.
- `ft_isalnum` : Vérifie si un caractère est alphanumérique.
- `ft_toupper` : Convertit un caractère en majuscule.
- `ft_tolower` : Convertit un caractère en minuscule.

### Fonctions de gestion des listes chaînées
- `ft_lstnew` : Crée un nouvel élément de liste.
- `ft_lstadd_front` : Ajoute un élément au début d'une liste.
- `ft_lstadd_back` : Ajoute un élément à la fin d'une liste.
- `ft_lstsize` : Calcule la taille d'une liste.
- `ft_lstdelone` : Supprime un élément de la liste.

## ⚙️ Compilation

Pour compiler le projet **libft**, utilisez la commande suivante :

```bash
make
