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
		bl = 1 + binary_tree_height(tree->left);
	if (tree->right)
		br = 1 + binary_tree_height(tree->right);

	return (bl > br ? bl - br : br - bl);
}

/**
 * binary_tree_height -  a function that measures the height of a binary tree.
 * @tree: a pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL, height otherwise.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h1 = 0;
	size_t h2 = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		h1 += 1 + binary_tree_height(tree->left);
	if (tree->right)
		h2 += 1 + binary_tree_height(tree->right);
	return (h1 > h2 ? h1 : h2);
}
