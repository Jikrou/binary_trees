#include "binary_trees.h"
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
