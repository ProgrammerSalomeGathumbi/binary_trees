#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of the binary tree.
 *         If tree is NULL, the function must return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (!tree)
		return (0);

	while (tree->left || tree->right)
	{
		if (tree->left)
			tree = tree->left;
		else
			tree = tree->right;

		height++;
	}

	return (height);
}
