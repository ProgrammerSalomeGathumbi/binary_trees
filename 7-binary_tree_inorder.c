#include "binary_trees.h"

/**
  *binary_tree_inorder -goes through binary tree in order
  *@tree: a pointer to the root node of the tree
  *@func: pointer the the function that call the nodes
  *
  */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
