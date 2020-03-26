/*
** EPITECH PROJECT, 2020
** workshop_linked_list
** File description:
** list
*/

#ifndef LIST_H_
#define LIST_H_
#include <stdlib.h>
#include <stdio.h>

//
//prototype de la liste chaînée avec laquelle nous allos travailler
//aujourd'hui
typedef struct list_s {
    int data;
    struct list_s *next;
}list_t;

//
//\brief initialise une liste chainée
//\param prends l'adresse d'une liste chaînée et une variable int comme data
void create_list(list_t **list, int data);
//
//\brief print tous les éléments de la liste chaînée
//\param prends une liste chainée list_t
void print_all_element(list_t *list);
//
//\brief Ajoute un élémént à la fin de la liste
//\param Prends la liste, et une variable int (la data)
void add_to_the_back(list_t *list, int data);
//
//\brief donne la taille d'une liste chainée
//\param prends la liste chainée dont on veut déterminer la taille
//\return la fonction retourne la taille de la liste en int
int get_size(list_t *list);
#endif /* !LIST_H_ */
