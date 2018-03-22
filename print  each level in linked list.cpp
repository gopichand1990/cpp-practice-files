//Given a binary search tree, design an algorithm which creates a linked list of all the nodes at each depth (i.e., if you have a tree with depth D, you’ll have D linked lists).

void print_linked_list(struct node* root){
	if(root==NULL){
		return;
	}
	struct node* temp=root;
	while(temp->data!=NULL){
		cout<<temp->data;
		temp=temp->next;
	}
	cout<<endl;
}  
		 
int max_height_recursive(struct node* root){
	if(root==NULL){
		 return 0;
	}
	int left_height=max_height_recursive(root->left);
	int right_height=max_height_recursive(root->right);
	if(left_height>right_height){
		return 1+left_height;
	}
	return 1+right_height;
}

/*   Modification
int max_height_of_binary_tree(struct Node* root){
	int height=0;
	if(root==NULL){ 
		return 0;
	}
	struct node* temp;
	t.insert(root);
		while(!q.isEmpty()){
			int q_size=get_size(q);
			for(int k=0;k<q_size;k++){
				temp=q.pop();
						if(temp->left!=NULL && temp->right!=NULL){
							q.insert(temp->left);
							q.insert(temp->right);
						}
						elseif(temp->right!=NULL){
							q.insert(temp->right);
						}
						elseif(temp->left!=NULL){
							q.insert(temp->left);
						}
						else{
							 no statements to be executed   
						}
         }
		 
   }
return height;
}


*/

	
	
	
//This function is to find maximum height of binary tree
int max_height_of_binary_tree(struct Node* root){
	int height=0;
	if(root==NULL){ 
		return 0;
	}
	queue t=new queue();
	queue t1=new queue();
	struct node* temp;
	t.insert(root);
while(!t.isEmpty()||!t1.isEmpty()){
		while(!t.isEmpty()){
				temp=t.pop();
						if(temp->left!=NULL && temp->right!=NULL){
							t1.insert(temp->left);
							t1.insert(temp->right);
							height=height+1;
						}
						elseif(temp->right!=NULL){
							t1.insert(temp->right);
							height=height+1;
						}
						elseif(temp->left!=NULL){
							t1.insert(temp->left);
							height=height+1;
						}
						else{
							/* no statements to be executed   */
						}
         }
		 while(!t1.isEmpty()){
					temp=t.pop();
						if(temp->left!=NULL && temp->right!=NULL){
							t.insert(temp->left);
							t.insert(temp->right);
							height=height+1;
						}
						elseif(temp->right!=NULL){
							t.insert(temp->right);
							height=height+1;
						}
						elseif(temp->left!=NULL){
							t.insert(temp->left);
							height=height+1;
						}
						else{
							/* no statements to be executed   */
						}	
          }
   }
return height;
}

struct node** create_and_print_linkedlists(struct Node* root){
	if(root==NULL){
		return;
	}
	int count=0;
	int height=max_height_of_binary_tree(root);
	queue q=new queue();
	struct node** array_linkedList=new node*[height];
	int k=1;
	q.insert(root);
	if(root->left!=NULL){
		q1.insert(root->left);
	}
	if(root->right!=NULL){
		q1.insert(root->right);
	}
	struct node* temp=new node();
	struct node* temp1=new node();
while(!q.isEmpty() && !q1.isEmpty() ){
	while(!q.isEmpty() && k<=height){
		 if(count==1){
	struct node* head;
	struct node* k=q.pop();
	temp->data=k->data;
	temp->next=NULL;
	head=temp;
		 }
	if(q.size>0){
		struct node* k1=q.pop();
		temp1->data=k1->data;
		temp1->next=NULL;
		temp->next=temp1;
		temp=temp1;
	}
	array_linkedList[k]=head;
	k--;
  }
  while(!q1.isEmpty() && k<=height){
		 if(count==1){
	struct node* head;
	struct node* k=q1.pop();
	temp->data=k->data;
	temp->next=NULL;
	head=temp;
		 }
	if(q1.size>0){
		struct node* k1=q1.pop();
		temp1->data=k1->data;
		temp1->next=NULL;
		temp->next=temp1;
		temp=temp1;
	}
	array_linkedList[k]=head;//modified solutions
	k--;
  }
  return array_linkedList;
}

//2 Given a directed graph, design an algorithm to find out whether there is a route between two nodes.

//to search a node in given list
bool search(int a,int* b,int size){
	for(int i=0;i<size;i++){
		  if(b[i]==a){
			  return 1;
		  }
	}
	return 0;
}


//bfs traversal of a graph
struct node** bfs_traversal_graph(struct node* root,int** adj_matrix,int* nodes,int size){
	int* result[size];
	int loop_variable=0;
	if(root==NULL){
		return NULL;
	}
	int* visited[size];
	for(int i=0;i<size;i++){
		 visited[i]=false;
	}
  int m=0;
  while(m<size){
	int k=nodes[m];
		if(visited[m]!=true){
			visited[m]=true;  
		}
					for(j=0;j<size;j++){
							result[loop_variable]=k;
							loop_variable++;
								if(adj_matrix[m][j]==1 && visited[m]!=true ){
										result[loop_variable]=nodes[j];
										visited[m]=true;
										loop_variable++;
						
							   }
					}
		m++;
	}
return result;
}

//check whether there is route between two nodes
bool check_route_between_nodes(int* a,int size,struct Node* node1,struct Node* node2){
	 if(node1==NULL||node2==NULL){
		 return false;
	 }
	 bool a=search(node1->data,a,size);
	 bool b=search(node2->data,a,size);
	 if(a && b){
		 return 1;
	 }
  return 0;
}


//You have two very large binary trees: T1, with millions of nodes, and T2, with hundreds of nodes. Create an algorithm to decide if T2 is a subtree of T1.

int* recursive_inorder(struct node* root,int size){
	 int* a[size];
	 int i=0;
	 
	    if(root==NULL){
			return ;
		}
		recursive_inorder(root->left);
		a[i]=(root->data);
		i++;
        recursive_inorder(root->right);
 return a;
}

bool check_subtree(struct node* first,int first_size,struct node* second,int second_size){
	if(first==NULL || second==NULL){
		return false;
	}
	int match_count=0;
	int* a[first_size];
	int* b[second_size];
	a=recursive_inorder(first,first_size);
	b=recursive_inorder(second,second_size);
	  for(int j=0;i<second_size;j++){
		  for(int i=0;i<first_size;i++){
			  if(b[j]==a[i]){
				  match_count++;
				  break;
			  }
		  }
	  }
	  if(match_count==second_size){
		  return true;
	  }
	return false;
}


				  
//5 Write an algorithm to find the ‘next’ node (i.e., in-order successor) of a given node in a binary search tree where each node has a link to its parent.

struct node* search_node_in_bst(struct node* root,struct node* b){
	if(root==NULL){
		return NULL;
	}
	   if(root->data==b->data){
		   return root;
	   }
	   elseif(root->data<b->data){
		   search_node_in_bst(root->left,b);
	   }
	   else{
		   search_node_in_bst(root->right,b);
	   }
}
	
struct node* min_value(struct node* k){
	struct node* temp=new node();
	temp=k;
	while(temp->left!=NULL){
		temp=temp->left;
	}
	return temp;
}

	

struct node* find_inorder_successor(struct node* root,struct node* element){
	if(root==NULL){
		return NULL;
	}
	elseif(root->data==element->data){
		 if(root->right!=NULL){
			 return root->right;
		 }
	return NULL;
	}
	struct node* temp=new node();
	else{
		temp=search_node_in_bst(root,element);
		if(temp!=NULL){
			  if(temp->right!=NULL){
				  return min_value(temp->right);
			  }
			  struct node* temp1=new node();
			  temp1=temp->parent;
			  while(temp1!=NULL ){
			struct node* temp2=temp1->parent;
				  if(temp2->left=temp1){
					  return temp1;
				  }
			  }
		}
	}
	
}

struct node* common_ancestor(struct node* first,struct node* second)
			  
			
			
		
		
	
	
		
		

//You are given a binary tree in which each node contains a value. Design an algorithmto print all paths which sum up to that value. Note that it can be any path in the tree- it does not have to start at the root.


5 vms
rhel7 
  workstation  server1 server2 server3 server4
	make sure u are able to ssh enable
	1 windows 2016core
	
	1.chandu98210@outlook.com password:Tinku123
	8424215  username gopi Tinku9821072778
	username:gopi password:Tinku!@#
