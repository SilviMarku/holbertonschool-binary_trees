#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_insert_right - function that inserts a node as
 * the left child_of another node
 *@parent: parent node
 *@value: value to the new node being inserted
 *Return: a pointer to the created node or NULL on failure or if parent is NULL
 */

typedef struct binary_tree_s {
    int value;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) {
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL) {
        return NULL;
    }

    new_node->value = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value) {
    if (parent == NULL) {
        return NULL;
    }

    binary_tree_t *new_node = binary_tree_node(parent, value);
    if (new_node == NULL) {
        return NULL;
    }

    if (parent->left != NULL) {
        new_node->left = parent->left;
        parent->left->parent = new_node;
    }

    parent->left = new_node;

    return new_node;
}

int main() {
    binary_tree_t *root = binary_tree_node(NULL, 10);
    if (root != NULL) {
        binary_tree_t *left_child = binary_tree_insert_left(root, 5);
        if (left_child != NULL) {
            printf("Left child value: %d\n", left_child->value);
        }
    }

    free(root);

    return 0;
}
