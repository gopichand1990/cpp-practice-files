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
		int k=search_element_in_array(node->data,inorder);
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
	//algo
	//after finding root node in inoder rearranging left nodes which are present in inoder in same order as they are present in levelorder
	void rearrange_left_nodes(inorder[],postorder[],int item_index,int size,struct Node* root){
		if(inorder[0]!=root->data){
			int left[item_index];
			int k=0;
			
				for(j=2;j<size;j++){
					for(int i=0;i<item_index&&k<item_index;i++){
							if(a[j]==a[i]){
								left[k]=a[j];
							    k++;
							}
						}
				}
		}
	}
	//after finding root node in inoder rearranging right nodes which are present in inoder in same order as they are present in levelorder
	void rearrange_right_nodes(inorder[],postorder[],int item_index,int size,struct Node* root){
		if(root->data!=inorder[size-1]){
				int s=size-item_index;
					int right[s];
					int k=0;
						for(j=2;j<size;j++){
								for(int i=item_index+1;i<size&&k<s;i++){
									if(a[j]==a[i]){
											right[k]=a[j];
											k++;
									}
								}
						}
			}
	}   
	//find root node in inorder array
	int search_element_in_array(int search_element,int* a,int size){
			for(int i=0;i<size;i++){
				if(a[i]==search_element){
					return i;
				}
			}
		return -1;
	}
		//rearrange left and right array into postoder array
	int* postroder_after_rearrangement(int* left,int *right,int leftsize,int rightsize,struct Node* root,int* levelorder,int lsize){
		if(leftsize==0&&rightsize==0){
			return -1;
		}
		elseif(leftsize!=0&&rightsize==0){
			for(int i=0;i<leftsize;i++){
				  levelorder[i]=left[i];
			}
			levelorder[leftsize+1]=root->data;
		}
		elseif(rightsize!=0&&leftsize==0){
		   levelorder[0]=root->data;
		   int i=0;
		   for(j=2;j<rightsize+1;j++){
			 		levelorder[j]=right[i];
                   i++;
		   }
		}
      else{
		  for(i=0;i<leftsize;i++){
			  levelorder[i]=left[i];
		  }
		  int k=0;
		  levelorder[leftsize+1]=root->data;
		  for(j=leftsize+2;j<size;j++){
			  levelorder[j]=right[k];
			  k++;
		  }
	  }
	  
	 return levelorder;
	}
		//construct tree from inorder and levelorder
	void  construct_tree(int* inorder,int* levelorder,int low,int high){
		struct Node* node=levelorder[0];//in bfs root is first elements
		int k=search_element_in_array(inorder[],high,node->data);
		if(k!=-1){
			int leftsize,rightsize,size;
			int a[rearrange_left_nodes(inorder[],postorder[],item_index,size,node);
			rearrange_right_nodes(inorder[],postorder[],item_index,size,node);
			root.left=construct_tree(inorder[],levelorder[],0,item_index-1);
			root.right=construct_tree(inorder[],levelorder[],item_index+1,size);
		}
		return node;
	}
			
			
//construct tree from linkedlist representation given levelorder representation(need to test)
struct Node build_Tree_from_Linked_list(struct Node* root){
	if(root==NULL){
		return NULL;
	}
	struct Node* node=root;
	queue q=new queue(10);
	q.insert(node->data);
     while(!q.isEmpty()){
		 struct Node* temp=root;
		q.pop();
		if(temp->next!=NULL){
		q.insert(temp->next);
		temp->left=temp->next;
		}
		temp=temp->next;
		if(temp->next!=NULL){
		q.insert(temp->next);
		temp->right=temp->next;
		}
	 }
return node;
}

//print level order traversal level by level given input tree
//take levelorder traversal find heightn of last node
//for height starting fro 1 to height print each level
void print_elements_in queue(q[],size){
   while(size>=1){
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
      int parentsize,childsize;
	 parent.insert(root);
	 while(parent.isEmpty()){
		temp=parent.pop();
	  if(temp->left!=NULL){
		  child.insert(temp->left);
	  }
	  if(temp->right!=NULL){
		  child.insert(temp->right);
	  }
print_elements_in_queue(parent[],size);
   while(childsize>=1){
			parent.insert(child.pop())
            childsize--;
   }
}
}
}





	  
	 
	 
	 
	 

	
	
	
	
	
	

			
			
		
