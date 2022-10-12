#include <iostream>
#include<queue>
using namespace std;

class BinaryTreeNode {
  public:
  BinaryTreeNode(int d, BinaryTreeNode* L, BinaryTreeNode* R) : data(d), left(L), right(R){}
  int data;
  BinaryTreeNode *left, *right;
};

void visit(BinaryTreeNode node){
  cout << node.data << endl;
}

void print_BFT(BinaryTreeNode* T){
  queue<BinaryTreeNode*> q;
  q.push(T);
  while(q.size()){
    BinaryTreeNode* cur = q.front();
    visit(*cur);
    if(cur->left) q.push(cur->left);
    if(cur->right) q.push(cur->right);
    q.pop();
  }
}

void test1(){
  BinaryTreeNode* T = new BinaryTreeNode(50,
    new BinaryTreeNode(25,
      new BinaryTreeNode(10,nullptr,nullptr), new BinaryTreeNode(30,nullptr, nullptr)
    ),
    new BinaryTreeNode(75,
      new BinaryTreeNode(60,nullptr,nullptr), new BinaryTreeNode(85,nullptr, nullptr)
    )
  );
  
  print_BFT(T);
}

int main() 
{
    test1();
    return 0;
}
