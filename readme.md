# Presentation
Ce projet propose une implémentation pour 3 structures de données: pile, file et double end queue.
# Opérations
## Pile
Les opérations de la pile implémentées sont:
    - init_stack qui permet d'initialiser une pile vide
    - create_stack qui permet de créer une pile à partir d'un tableau d'éléments
    - push qui permet d'ajouter un élément dans la pile
    - pop qui permet de retirer un élément de la pile mais ne renvoie pas l'élément en haut de la pile
    - top qui renvoie l'élément en haut de la pile
    - isEmptyStack qui renvoie un booléen indiquant si la pile est vide ou non
    - get_stack_length qui renvoie le nombre d'élements de la pile
    - freeStack qui libère toute la mémoire allouée dynamiquement pour la pile (opération à faire en dernier)

## File
Les opérations de la file implémentées sont:
    - init_queue qui permet d'initialiser une file vide
    - create_queue qui permet de créer une file à partir d'un tableau d'éléments
    - enqueue qui permet d'ajouter un élément dans la file
    - dequeue qui permet de retirer un élément de la file mais ne renvoie pas le premier élément de la file
    - first qui renvoie l'élément ajouté en premier dans la file (donc le premier à sortir de la file)
    - last qui renvoie l'élément ajouté en dernier dans la file
    - isEmptyQueue qui renvoie un booléen indiquant si la file est vide ou non
    - get_queue_length qui renvoie le nombre d'élements de la file
    - freeQueue qui libère toute la mémoire allouée dynamiquement pour la file (opération à faire en dernier)