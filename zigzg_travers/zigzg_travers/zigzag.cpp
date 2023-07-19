#include <iostream> 
#include <stack> 
using namespace std;

struct Node {
	char data;
	struct Node* left, * right;
};

void zizagtraversal(struct Node* root)
{
	if (!root)
		return;

	stack<struct Node*> Stack_1;
	stack<struct Node*> Stack_2;

	Stack_1.push(root);

	bool lefttoright = true;
	while (!Stack_1.empty()) {

		struct Node* temp = Stack_1.top();
		Stack_1.pop();


			cout << temp->data << " ";


			if (lefttoright) {
				if (temp->left)
					Stack_2.push(temp->left);
				if (temp->right)
					Stack_2.push(temp->right);
			}
			else {
				if (temp->right)
					Stack_2.push(temp->right);
				if (temp->left)
					Stack_2.push(temp->left);
			}

		if (Stack_1.empty()) {
			lefttoright = !lefttoright;
			swap(Stack_1, Stack_2);
		}
	}
}

struct Node* newNode(char data)
{
	struct Node* node = new struct Node;
	node->data = data;
	node->left = node->right = NULL;
	return (node);
}

int main()
{



    /*
    {
        /*             T
         *
         *           A               
         *         /  |               
         *         B    C            
         *       / |  / |         
         *       -  D E  F       
         */
	struct Node* root = newNode('A');
	root->left = newNode('B');
	root->right = newNode('C');
	//root->left->left = newNode(7);
	root->left->right = newNode('D');
	root->right->left = newNode('E');
	root->right->right = newNode('F');
	cout << "ZigZag Order traversal of binary tree is \n";

	zizagtraversal(root);

	return 0;
}


