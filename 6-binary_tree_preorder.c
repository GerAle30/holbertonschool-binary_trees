#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 *@tree: Pointer to the root node of the tree to traverse
 *@func: Pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);							/* 1.visit el nodo */
	binary_tree_preorder(tree->left, func); /* 2. Recorre el subarbol izquierdo */
	binary_tree_preorder(tree->right, func);/* 3. Recorre el subarbol derecho */
}
