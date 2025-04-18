#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree
 * using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a funciton to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);	/* 1. Subarbol izquierdo */
	binary_tree_postorder(tree->right, func);	/* 2. Subarbol derecho */
	func(tree->n);								/* 3. Nodo actual */
}
