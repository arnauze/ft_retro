# include "../header/header.hpp"

void            add_node(t_list **head, Position *data) {
    t_list      *current;
    t_list      *node = new t_list;

    node->data = data->clone();
    node->next = NULL;

    if (!*head)
        *head = node;
    else {
        current = *head;
        while (current->next)
            current = current->next;
        current->next = node;
    }
}

void            delete_node(t_list **head, t_list *node) {
    t_list      *current;
    t_list      *tmp;

    current = *head;
    if (current == node) {
        *head = current->next;
        delete current;
        current = NULL;
    } else {
        while (current && current->next) {
            if (current->next == node) {
                tmp = current->next->next;
                delete current->next;
                current->next = tmp;
                break ;
            }
        }
    }
}