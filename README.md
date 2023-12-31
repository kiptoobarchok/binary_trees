# 0x1D. C - Binary trees
***C***
***Group project***
***Algorithm***
***Data structure***


## Resources
Read or watch:

- [Binary tree (note the first line: Not to be confused with B-tree.)](https://intranet.alxswe.com/rltoken/1F2x42-8vUbOmU4L1C1KMg)

- [Data Structure and Algorithms - Tree](https://intranet.alxswe.com/rltoken/QmcTMCkQyrgMjrqoWxYdhw)

- [Tree Traversal](https://intranet.alxswe.com/rltoken/z6ZaXr_RxwE5nTHAUx_dfQ)

- [Binary Search Tree](https://intranet.alxswe.com/rltoken/qO5dBlMnYJzbaWG3xVpcnQ)

- [Data structures: Binary Tree](https://intranet.alxswe.com/rltoken/BeyJ2gjlE7_djwRiDyeHig)

# Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

## General
- What is a binary tree
- What is the difference between a binary tree and a Binary Search Tree
- What is the possible gain in terms of time complexity compared to linked lists
- What are the depth, the height, the size of a binary tree
- What are the different traversal methods to go through a binary tree
- What is a complete, a full, a perfect, a balanced binary tree


# More Info
## Data structures
Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.

### Basic Binary Tree
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

### Binary Search Tree
    typedef struct binary_tree_s bst_t;

### AVL Tree
    typedef struct binary_tree_s avl_t;
### Max Binary Heap
    typedef struct binary_tree_s heap_t;

Note: For tasks 0 to 23 (included), you have to deal with simple binary trees. They are not BSTs, thus they don’t follow any kind of rule.

# Print function
To match the examples in the tasks, you are given [this function](https://github.com/alx-tools/0x1C.c)

This function is used only for visualization purposes. You don’t have to push it to your repo. It may not be used during the correction

Functions to print binary trees in a pretty way

                            .----------------------(006)-------.
                        .--(001)-------.                   .--(008)--.
                    .--(-02)       .--(003)-------.       (007)     (009)
        .-------(-06)          (002)       .--(005)
    .--(-08)--.                           (004)
    (-09)     (-07)
