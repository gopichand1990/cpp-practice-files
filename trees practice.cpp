//Write an algorithm to find the ‘next’ node (i.e., in-order successor) of a given node in a binary search tree where each node has a link to its parent

struct node* search_element_in_bst(stuct node* root,int x){
	//need to modify for arg int
	if(root==NULL){
		return NULL;
	}
	elseif(root->data<s->data){
		  return search_element_in_bst(root->right,s);
	}
	elsif(root->data>s->data){
		  return search_element_in_bst(root->left,s);
	}
	elseif(root->data==s->data){
		  return root;
	}
	else{
		return NULL;
	}
}

stuct node* min_value_in_bst(struct node* k){
	while(k->left!=NULL){
		 k=k->left;
	}
	return k;
}

struct node* inorder_successor(struct node* root,struct node* k){
	//change second argument to integer
	if(root==NULL){
		return NULL;
	}
	struct node* search_element=new node();
	//need not create new node if data is not to be stored and if just fo reference
	search_element=search_element_in_bst(root,k);
	if(search_element!=NULL){
		if(search_element->right!=NULL){
			return min_value_in_bst(root->right);
		}
		 while(search_element!=root){
			 struct node* parent;
			  parent=search_element->parent;
			  if(parent->left==search_element){
				  return search_element;
			  }
			  search_element=parent;
		 }
		 return NULL;
	}
	return NULL;
}

//Write an algorithm to find the ‘next’ node (e.g., in-order successor) of a given node in a binary search tree where each node has a link to its parent.
		 
		
	