#include "binary_trees.h"

/**
 * height - Helper to calculate height of a subtree
 * @tree: Pointer to the node
 * Return: Height of the subtree or 0 if tree is NULL
 */
static size_t height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = height(tree->left);
	right = height(tree->right);

	return (1 + (left > right ? left : right));
}

/**
 * binary_tree_balance - Measure the balance factor of a binary tree
 * @tree: Pointer ot the root node
 * Return: Balance factor or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (height(tree->left) - height(tree->right));
}

