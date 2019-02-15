#include <iostream>
#include <queue>
using namespace std;

int main(){
  struct Node{
    int key;
    struct Node *left, *right;
  };

  struct Node *newNode(int key){
    struct Node* temp = new Node;
    temp->key = key;
    temp->left = temp->right = NULL;
    return temp;
  }

  void inorder(struct Node *temp){
    if(!temp) return;
    inorder(temp->left);
    cout << temp->key << " ";
    inorder(temp->right);
  }

  return 0;
}
