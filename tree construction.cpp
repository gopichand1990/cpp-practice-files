

//build tree from inorder and postorder
int search_element_in_array(int* inorder,int high,int search_element){
   for(int i=0;i<high;i++){
      if(inorder[i]==search_element){
           return i;
       }
   }
return -1;
}
   
struct Node* build_tree(int* inorder,int* postorder,int low,int high){
  if(low>high){
   return NULL;
   }
 node* root=new node();
  elseif(low==high){
    root->data=inorder[low];
    root->left=NULL;
    root->right=NULL;
    return root;
  }
  else{
     root->data=postorder[high];
     int index=search_element_in_array(inorder,high,root->data);
			if(index!=-1){
				root->left=build_tree(inorder,postorder,0,index-1
				root->right=build_tree(inorder,preorder,index+1,high);
				return root;
			}	
  }
return NULL;
}

//print level order level by level

void print_elements_in queue(q){
   while(q.size>=1){
      cout<<" "<<q[o]<<" ";
      q.pop();
      size--;
   }
cout<<endl;
}
	
 void print_level_by_level(struct Node* root){
	 if(root==NULL){
		 return;
	 }
	 struct node* temp;
	 queue parent=new queue(10);
	 queue child=new child(10);
	 parent.insert(root);
	 while(!parent.isEmpty()){
		temp=parent.pop();
	  if(temp->left!=NULL){
		  child.insert(temp->left);
	  }
	  if(temp->right!=NULL){
		  child.insert(temp->right);
	  }
	 }
	 cout<<endl;
   while(!child.isEmpty()){
			temp=child.pop();
			if(temp->left!=NULL){
				parent.insert(temp->left);
	        }
	       if(temp->right!=NULL){
		       parent.insert(temp->right);
	       }
   }
   cout<<endl;	
   }

   
   //check if tree is balanced or not
   bool check_tree_is_balanced_or_not(struct node* root){
	   if(root==NULL){
		   return false;
	   }
	    int k=maxdepth(root);
		int m=mindepth(root);
	   else if((k-m)>1){
		   return false;
	   }
	   else{
		   return true;
	   }
 
   
  int maxdepth(struct node* root){
	  if(root==NULL){
		  return -1;
	  }
	  return max(maxdepth(root->left),maxdepth(root->right));
  }
  
  int mindepth(struct node* root){
	  if(root==NULL){
		  return -1;
	  }
	  return min(mindepth(root->left),mindepth(root->right));
  }
  }
  
//given a directed graph check whether there is LINK between two nodes	
//check if tree is a subtree of other or not.
bool check_subtree(struct node* root,struct node* root1){
	if(root==NULL||root1==NULL){
		return false;
	}
	int *a=levelorder(root);
	int *b=levelorder(root1);
	  
		     for(j=0;j<b.size;j++){
				 for(i=0;i<a.size;i++){
				 
	

		   


	
	
	




    
     

   

 
  