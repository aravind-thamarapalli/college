#include<stdio.h>
#include<stdlib.h>
struct node {
  int data;
  struct node *left; 
  struct node *right; 
};
struct node *newNode(int data) {
  struct node *node = (struct node *)malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return node;
}
struct node *insert(struct node *root, int data) {
  if (root == NULL) {
    root = newNode(data);
  }
  else {
    if (data < root->data) {
      root->left = insert(root->left, data);
    }
    else if (data > root->data) {
      root->right = insert(root->right, data);
    }
  }
  return root;
}
struct node *minValueNode(struct node *root) {
  struct node *current = root;
  while (current && current->left != NULL) {
    current = current->left;
  }
  return current;
}
struct node *delete(struct node *root, int data) {
  if (root == NULL) {
    return NULL;
  }
  else {
    if (data < root->data) {
      root->left = delete(root->left, data);
    }
    else if (data > root->data) {
      root->right = delete(root->right, data);
    }
    else {
      if (root->left == NULL && root->right == NULL) {
        free(root);
        return NULL;
      }
      else if (root->left == NULL) {
        struct node *temp = root->right;
        free(root);
        return temp;
      }
      else if (root->right == NULL) {
        struct node *temp = root->left;
        free(root);
        return temp;
      }
      else {
        struct node *temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = delete(root->right, temp->data);
      }
    }
    return root;
  }
}
struct node *search(struct node *root, int data) {
  if (root == NULL || root->data == data) {
    return root;
  }
  else {
    if (data < root->data) {
      return search(root->left, data);
    }
    else {
      return search(root->right, data);
    }
  }
}
void inorder(struct node *root) {
  if (root != NULL) {
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
  }
}
int main() {
  struct node *root = NULL;
  root = insert(root, 50);
  root = insert(root, 30);
  root = insert(root, 70);
  root = insert(root, 20);
  root = insert(root, 40);
  root = insert(root, 60);
  root = insert(root, 80);
  printf("The inorder traversal of the tree is:\n");
  inorder(root);
  printf("\n");
  struct node *result = NULL;
  result = search(root, 50);
  if (result != NULL) {
    printf("50 is found in the tree.\n");
  }
  else {
    printf("50 is not found in the tree.\n");
  }
  result = search(root, 25);
  if (result != NULL) {
    printf("25 is found in the tree.\n");
  }
  else {
    printf("25 is not found in the tree.\n");
  }
  root = delete(root, 20);
  root = delete(root, 30);
  root = delete(root, 50);
  printf("The inorder traversal of the tree after deletion is:\n");
  inorder(root);
  printf("\n");
  return 0;
}