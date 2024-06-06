#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);
		if (left == right)
			return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}
	return (0);
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
