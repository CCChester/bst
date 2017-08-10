//bst.h
#include <stdbool.h>

struct bstnode {
	int item;
	struct bstnode *left;
	struct bstnode *right;
};

struct btree {
	struct bstnode *root;
};


// create_bst() creates a new binary empty search tree (root is NULL)
//   PRE: true
//   POST: returns new btree where root is initialized with NULL
//   TIME: O(1)
struct btree *create_bst(void);


//  destroy_bst(t) frees all memory for the tree t
//    PRE: t is valid
//    POST: frees all the memory allocated for t, t is no longer valid
//    TIME: O(n) where n is the number of nodes in tree t
void destroy_bst(struct btree *t);


// make_bstnode(val, l, r) returns a new bstnode with item val and left/right l/r
//   PRE: TRUE
//   POST: returns a bstnode with item equals val and left=l and right=r 
//   TIME: O(1)
struct bstnode *make_bstnode(int val, struct bstnode *l, struct bstnode *r);


// is_bempty(t) determins if t is an empty bst
//   PRE: t valid
//   POST: returns true if t is an empty bst, otherwise returns false.
//   TIME: O(1)
bool is_bempty(struct btree *t);


//  traverse_inorder(t) prints all nodes of t in order
//      (traverse left, print root, traverse right)
//  PRE: t is a valid bst
//  POST: all values are printed in one line following in-order traversal
//  TIME: O(n) where n is the number of nodes in tree t
void traverse_inorder(struct btree *t);


//  bst_insert(val, t) inserts a new node with val into the BST t
//    or makes no changes if val already exists
//  PRE: t is a valid bst
//  POST: a new leaf node with item val is added to BST 
//      if val exists no changes made
//  TIME: O(h) where h is the height of t
void bst_insert(int val, struct btree *t);


//  bst_search(t, val) determines if val is an item in the btree t
//    PRE: t is a valid bst
//    POST: returns true if val is in BST t, false otherwise
//    TIME: O(h) where h is the height of t
bool bst_search(struct btree *t, int val);

