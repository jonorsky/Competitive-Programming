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

  void insert(struct Node*temp, int key){
    queue<struct Node*>q;
    q.push(temp);
  }
  return 0;
}
