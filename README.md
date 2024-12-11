
# Binary Trees

What is binary tree. What is the possible gain in terms of time complexity compared to linked lists. What are the depth, the height, the size of a binary tree. What are the different traversal methods to go through a binary tree. What is a complete, a full, a perfect, a balanced binary tree.

## Requirements

* Editor used is VI
* Files compiled on Ubuntu 24.04
* Respect the Betty style coding
* Not allowed to use global variables
* No more than 5 functions per file
* You can used the standard library
* Header file is binary_trees.h

## Project and Task

* new node
* insert left
* insert right
* delete
* is leaf
* is root
* pre order traversal
* in order traversal
* post order traversal
* height
* depth
* size 
* leaves 
* nodes 
* balance factor 
* is full 
* is perfect 
* sibling 
* uncle 

## Installation - Configuration

You create a repository on your github. It's a 2-person team. Either you work together directly on the main branch, which is not advisable. The best thing to do is to create a secondary branch each to share exercises and then merge on the main branch.For each project, it's important to create a README, a header file that records your function prototypes, and possibly a structure. Compile your program with the command : ![gcc](https://img.shields.io/badge/gcc-gcc%20--Wall%20--Wextra%20--Werror%20--pedantic%20--std=gnu89-grey?style=flat)

## Structure 

The structure used to do all the task is : 

typedef struct binary_tree_s

{

        int n;

        struct binary_tree_s *parent;
        struct binary_tree_s *left;
        struct binary_tree_s *right;
} binary_tree_t;

## Authors 

![Julie ](https://img.shields.io/badge/Julie-Tolve-green?style=social)

![Killian ](https://img.shields.io/badge/Killian-Kerleau-green?style=social)


