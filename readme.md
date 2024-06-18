# Presentation
Ce projet propose une implémentation pour 3 structures de données: pile, file et double end queue.
# Opérations
## Pile
Les opérations de la pile implémentées sont:
<ul>
    <li> init_stack qui permet d'initialiser une pile vide </li>
    <li> create_stack qui permet de créer une pile à partir d'un tableau d'éléments </li>
    <li> push qui permet d'ajouter un élément dans la pile </li>
    <li> pop qui permet de retirer un élément de la pile mais ne renvoie pas l'élément en haut de la pile </li>
    <li> top qui renvoie l'élément en haut de la pile </li>
    <li> isEmptyStack qui renvoie un booléen indiquant si la pile est vide ou non </li>
    <li> get_stack_length qui renvoie le nombre d'élements de la pile </li>
    <li> freeStack qui libère toute la mémoire allouée dynamiquement pour la pile (opération à faire en dernier) </li>
</ul>

## File
Les opérations de la file implémentées sont:
<ul>
    <li> init_queue qui permet d'initialiser une file vide </li>
    <li> create_queue qui permet de créer une file à partir d'un tableau d'éléments </li>
    <li> enqueue qui permet d'ajouter un élément dans la file </li>
    <li> dequeue qui permet de retirer un élément de la file mais ne renvoie pas le premier élément de la file </li>
    <li> first qui renvoie l'élément ajouté en premier dans la file (donc le premier à sortir de la file) </li>
    <li> last qui renvoie l'élément ajouté en dernier dans la file </li>
    <li> isEmptyQueue qui renvoie un booléen indiquant si la file est vide ou non </li>
    <li> get_queue_length qui renvoie le nombre d'élements de la file </li>
    <li> freeQueue qui libère toute la mémoire allouée dynamiquement pour la file (opération à faire en dernier) </li>
</ul>