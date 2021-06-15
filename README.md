# DDK_binary_tree_repo
It is a repo that records how can we use tree in the real life.

1. The structure of binary tree.
```C++
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
```

2. The basic recursion uses stack.
```C++
visit(node)
    if node.left != null then visit(node.left)
    print node.value
    if node.right != null then visit(node.right)
```

3. Why do we use binary tree?
* Let's camompare with array and linked list.
* If we have a series of number, such as, 1,2,3,4,5, we store the numbers in the array[5], linked_list and binary_tree.


# References
* https://zh.wikipedia.org/wiki/%E4%BA%8C%E5%8F%89%E6%A0%91#%E5%AE%8C%E5%85%A8%E4%BA%8C%E5%8F%89%E6%A0%91
