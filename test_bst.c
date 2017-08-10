#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "bst.h"

int main(void) {   
  struct btree *t1 = create_bst();
  assert(is_bempty(t1));
  bst_insert(49, t1);  
  bst_insert(28, t1);  
  bst_insert(13, t1);  
  bst_insert(66, t1);  
  traverse_inorder(t1);  
  assert(bst_search(t1, 66));
  destroy_bst(t1);
  return 0; } 