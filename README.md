# 0x1D. C - Binary trees
`C` `Algorithm` `Data structure`

## Learning Objectives
At the end of this project, you are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/), __without the help of Google:__

### General
- What is a binary tree
- What is the difference between a binary tree and a Binary Search Tree
- What is the possible gain in terms of time complexity compared to linked lists
- What are the depth, the height, the size of a binary tree
- What are the different traversal methods to go through a binary tree
- What is a complete, a full, a perfect, a balanced binary tree

## Requirements

### General
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on `Ubuntu 20.04 LTS` using `gcc`, using the options `-Wall` `-Werror` `-Wextra` `-pedantic` `-std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use the `Betty` style. It will be checked using [`betty-style.pl`](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [`betty-doc.pl`](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- You are allowed to use the standard library
- The prototypes of all your functions should be included in your header file called `binary_trees.h`
- Don’t forget to push your header file
- All your header files should be include guarded

## Data structures
Please use the following data structures and types for binary trees. Don’t forget to include them in your header file. <br>

__Basic Binary Tree__

```C
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

__Binary Search Tree__

```C
typedef struct binary_tree_s bst_t;
```

__AVL Tree__

```C
typedef struct binary_tree_s avl_t;
```

__Max Binary Heap__

```C
typedef struct binary_tree_s heap_t;
```

__Note:__ For tasks 0 to 23 (included), you have to deal with simple binary trees. They are not BSTs, thus they don’t follow any kind of rule. <br>

__Print function__<br>

To match the examples in the tasks, you are given [`this function`](https://github.com/alx-tools/0x1C.c) <br>

This function is used only for visualization purposes. You don’t have to push it to your repo. It may not be used during the correction.

## Tasks
