#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: pointer to the root node of the tree to measure the balance factor.
 * Return: 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int bl = 0;
	int br = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		bl += 1 + binary_tree_balance(tree->left);
	if (tree->right)
		br += 1 + binary_tree_balance(tree->right);

	return (bl - br);
}