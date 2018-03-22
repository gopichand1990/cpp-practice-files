//Implement a function to check if a tree is balanced. For the purposes of this question,a balanced tree is defined to be a tree such that no two leaf nodes differ in distance from the root by more than one
   int min=0,max=0;
int* check_height_of_leaf_node_return_min_max(node* leaf_node){
	int height=0;
	int a[2];
	node* temp=leaf_node;
	while(temp->prev!=null){
		height=height+1;
		temp=temp->prev;
	}
	if(min==0 && max==0){
		 min=height;
		 max=height;
	}
	else if(min>height){
			int k=min;
			min=height;
			height=k;
		}
	else{
		int m=max;
			max=height;
			height=m;
	}
	a[0]=min;
	a[1=max;
	return a;
}

 void check_height_of_leaf_node(node* temp){
	 node* k=temp;
	 while(k->left!=NULL && k->right!=NULL){
		 
		 
		 
		 
		 
		 
		 
		 
//Given a directed graph, design an algorithm to find out whether there is a route between two nodes.

	 
	 
	   


		
	
	