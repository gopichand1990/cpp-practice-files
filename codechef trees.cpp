//1.Implement a function to check if a tree is balanced. For the purposes of this question,a balanced tree is defined to be a tree such that no two leaf nodes differ in distance from the root by more than one.

	
bool is_balanced(struct Node* node){
	if(node==NULL){
		return 1;
	}
	a=height(node->left);
	b=height(node->right);
	
      if(abs(a-b)<=1 &&is_balanced(node->left)&&is_balanced(node->right))}
          return 1;
      }
return 0;
}

//get height of tree
int height(struct node* temp){
	if(temp==NULL){
		return 0;
	}
	return 1+max(height(temp->left,temp->right);
}

//get maximum of heights
int max(int a,int b){
	if(a>=b){
		return a;
	}
	return b;
}

//given a directed graph need to find whether there is route between two nodes
//start i start node of graph and size is total no of nodes in graph,adjacency_matrix is adjacency matrix which is boolean array it is 1 if there is a link between two nodes otherwise 0,nodes is array containing all nodes.
int* bfs_graph(char start,int size,int** adjacency_matrix,int* nodes){
	  bool a=new bool[size];
	  for(int i=0;i<size;i++){
		   bool[i]=false;
	  }
	  if(start!=''){
		  for(int j=0;j<size;j++){
			    if(nodes[j]==start){
					 bool[j]=true;
				}
		  }
		   for(k=0;k<size;k++){
			   
			   		   
//Given a sorted (increasing order) array, write an algorithm to create a binary tree with minimal height.

struct node* build_tree(int* a,int size){ //0 1 2 3 4
	int mid;
	mid=int(size/2);
	struct node* root=new node();
	root->data=a[mid];
	 struct node* temp=root;
	 struct node* temp1=root;
	  for(i=mid-1;i>=0&&temp!=NULL;i--){
		     temp->left=a[i];
			 temp=temp->left;
	  }
	  for(i=mid+1;i<high&&temp1!=NULL;i++){
		    temp1->right=a[i];
			temp1=tempp1->right;
	  }
return root;
}
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
		 
//This function is to find maximum height of binary tree
int max_height_of_binary_tree(struct Node* root){
	int height=0;
	if(root==NULL){ 
		return 0;
	}
	queue t=new queue();
	queue t1=new queue();
	struct node* temp;
	t.insert(root);height=height+1;
while(!t.isEmpty()||!t1.isEmpty()){
		while(!t.isEmpty()){
			for(int i=0;i<t.size;i++){
				temp=t.pop();
						if(temp->left!=NULL && temp->right!=NULL){
							t1.insert(temp->left);
							t1.insert(temp->right);
						}
						elseif(temp->right!=NULL){
							t1.insert(temp->right);
						}
						elseif(temp->left!=NULL){
							t1.insert(temp->left);
						}
						else{
							/* no statements to be executed   */
						}
	        }
		height=height+1;	
         }
		 while(!t1.isEmpty()){
				for(int i=0;i<t1.size;i++){
					temp=t.pop();
						if(temp->left!=NULL && temp->right!=NULL){
							t.insert(temp->left);
							t.insert(temp->right);
						}
						elseif(temp->right!=NULL){
							t.insert(temp->right);
						}
						elseif(temp->left!=NULL){
							t.insert(temp->left);
						}
						else{
							/* no statements to be executed   */
						}
				}
		height=height+1;	
          }
   }
return height;
}

void create_and_print_linkedlists(struct Node* root){
	if(root==NULL){
		return;
	}
	int height=max_height_of_binary_tree(root);
	queue q=new queue();
	q.insert(root);
	if(root->left!=NULL){
		q1.insert(root->left);
	}
	if(root->right!=NULL){
		q1.insert(root->right);
	}
	struct node* temp=new node();
	struct node* temp1=new node();
while(!q.isEmpty()&&!q1.isEmpty()){
	while(!q.isEmpty()){
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
	print_linked_list(head);
  }
  while(!q1.isEmpty()){
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
	print_linked_list(head);
  }
}
	
	
	
	


		    
	
			   
			   
		  
	  
	  
	  



	





	
