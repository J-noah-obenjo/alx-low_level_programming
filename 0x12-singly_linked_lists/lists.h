#ifndef LISTS_H
#define LISTS_H

/**
 * Definition of the structure for a singly linked list
 * @str: a dynamically allocated string
 * @length: the length of the string
 * @next: pointer to the next node
 *
 * Description: Structure for a node in a singly linked list
 * used in a Holberton project
 */
typedef struct list_s
{
    char *str;
    unsigned int length;
    struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* LISTS_H */
