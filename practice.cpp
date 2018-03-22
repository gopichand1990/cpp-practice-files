//Write program to print the value of the second last node in a single linked list and write the test cases (code to test) for the same .
void second_last_node_linked_list(node* &head){
	
	if(head==NULL || head->next==null){
		 return NULL;
	}
	node* temp=head;
	node* prev=head;
	node* current=head;
	while(temp->next!=NULL){ //1 2t 3t 4t prev=3 current=4  temp=4
			  prev=temp;
			  temp=temp->next;
			  current=temp;
	}
	cout<<prev->data;
}
			  
//check if a given doubly linked list is a palindrome or not
bool check_palindrome(node* &head){
	int count=0,flag=0;
	if(head==NULL||head->next==NULL){
		 return false;
	}
	node* temp=head;
	node* last=head;
	node* start=head;
	while(temp!=NULL){  
		last=temp;
		count=count+1;
		temp=temp->next;
	}
	while(start!=NULL && last!=NULL && start!=last && start->next!=last){ 
		if(start->data!=last->data){
			flag=1;
			break;
		}
		start=start->next;
		last=last->prev;
	}
	if(flag==1){
		reurn false;
	}
	return true;
}
