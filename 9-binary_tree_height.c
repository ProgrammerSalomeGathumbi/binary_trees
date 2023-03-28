#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 *
 * Return: The height of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL)
	{
		return (height);
	}

	const binary_tree_t *curr_node = tree;

	while (curr_node != NULL)
	{
		height++;


		size_t left_height = binary_tree_height(curr_node->left);
		size_t right_height = binary_tree_height(curr_node->right);

		if (left_height > right_height)
			curr_node = curr_node->left;
		else
			curr_node = curr_node->right;
	}
	return (height - 1);
}
