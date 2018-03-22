//inorder preorder postorder traversals iteratiely and using recursion
//preorder Recursive
void preorder(struct node* node){
	if(node==NULL){
		return;
	}
	cout<<node->data;
	preorder(node->left);
	preorder(node->right);
}
//preorder iterative
void stack(){
	int a[10];
	void push(int data){
		if(size==9){
			cout<<"stack full";
		}
		else{
			size++;
			a[size]=data;
		}
	}
	void pop(){
		if(size==-1){
			cout<<stack empty;
		}
		else{
			cout<<a[size];
			size--;
		}
	}
}

//if in inorder traversal if all nodes are in sorted order then it is a binary search tree
void preorder(struct node* node){
	struct node* root=node;
	if(root==NULL){
		return;
	}
	push(
	
	
	
void postorder(struct Node* node){
	
	
//Reverse level order traversal 
void Reverse_level_order(struct Node* node){
	queue q=new queue();
	if(node==NULL){
		return ;
	}
	
	
//inorder recursive
	
	//Binary tree
	//Construct Tree from given Inorder and Preorder traversals
	
		int search_element_in_array(int search_element,int* a,int size){
			for(int i=0;i<size;i++){
				if(a[i]==search_element){
					return i;
				}
				
			}
		return -1;
		}
		
		struct Node* node=preorder[0];
		int k=search_element_in_array(root,inorder);
		if(k!=-1){
	     void build_tree(int* inorder,int* preorder,int low,int high){
			 if(low>high){
				 return NULL;
			 }
			 
			 root->left=build_tree(inorder[],preorder[],0,k-1);
			 rootright=build_tree(inorder[],preorder[],k+1,high);
			 
			return root;
		 }
		}
			
			
			
		
		
		
	//Construct a tree from Inorder and Level order traversals
	//Construct a tree from Inorder and Level order traversals
	//Construct a linked list from tree representations
	//Construct a tree from linkedlist representations
	//given inorder,preorder and postorder rep construct a tree from any two
	//reverse level order traversal
	//reverse level order traversal line by line
	//Generate Postorder traversal of Tree from Inorder and Preorder traversal of tree without generating Tree.
	
	//Binary search tree
	//search and insert in BST
	//deletion from BST
	//check if binary tree is BST or not
	//sorted array to balanced BST

	
	
	
	
	
	

	
	
	
	

		
		