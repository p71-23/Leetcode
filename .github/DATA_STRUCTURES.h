#ifndef DATA_STRUCTURES_H
#define DATA_STRUCTURES_H

//二叉树定义
struct TreeNode{
  int val;
  struct TreeNode* left;
  struct TreeNode* right;
};

//链表定义
struct ListNode{
  int val;
  struct ListNode* next;
};

//堆
struct HeapNode{
  int val;
};

#endif /*DATA_STRUCTURES_H*/
