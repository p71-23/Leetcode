#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "DATA_STRUCTURES.h"
struct TreeNode* buildTree(int* preorder, int preorderSize, int* inorder, int inorderSize){
  //用户自己的代码实现

  return NULL;
}
double getTimestamp(){
  return (double)clock()/CLOCKS_PER_SEC;}

int main(){
  printf("running……\n");
  //测试样例
  int preorder[]={3,9,20,15,7};
  int inorder[]={9,3,15,20,7};
  int preorderSize=sizeof(preorder)/sizeof(preorder[0]);
  int inorderSize=sizeof(inorder)/sizeof(inorder[0]);
  double startTime=getTimestamp();
  //调用用户所构造的函数
  struct TreeNode* root=buildTree(preorder,preorderSize,inorder,inorderSize);
  //记录开始时间和结束时间
  double endTime=getTimestamp();
  double duration=endTime-startTime;
  printf("运行时间：%.6f秒\n",duration);

  if(root->val!=3)
    printf("Test Failed!\n");
  else
    printf("Test Passed!\n");
  return 0;
}


