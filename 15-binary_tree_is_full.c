#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer ot the root node of the tree
 *
 * Return: 1 if tree is full, 0 otherwise or if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/*Si no tiene hijos, es un nodo hoja => valido */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/*Si tiene ambos hijos, se revisa recursivamente */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));

	/* Si tiene un solo hijo => no es full */
	return (0);
}
