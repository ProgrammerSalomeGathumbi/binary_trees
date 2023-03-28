#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The height of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;
	const binary_tree_t *temp = tree;

	if (tree == NULL)
		return (0);

	while (temp->left || temp->right)
	{
		if (temp->left)
			temp = temp->left;
		else
			temp = temp->right;

		height++;
	}

	return (height);
}
