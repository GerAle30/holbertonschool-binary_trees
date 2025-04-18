#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root nodde of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func); /* 1. Recorre el subarbol izquierdo */
	func(tree->n);						  /* 2. Visita el nodo */
	binary_tree_inorder(tree->right, func); /* 3. Recorre el subarbol derecho */
}
