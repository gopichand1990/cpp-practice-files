//make whole row and column equal to 0 if a[i][j]=0
int* make_row_column_zero(int* a,int row,int col){
	int error=-111111,k=-1;
	if(row<=0||col<=0){
		return error;
	}
	else if(row==1 && col==1){
		return a;
	}
	for(int r=0;r<row;r++){ //r=0            1 1 1
											 1 1 1
											 1 1 0
											  
	                                
		for(int c=0;c<col;c++){ //c=0 r=2
                    if(k==-1||k!=c){ //k=2 c=2	
							if(a[r][c]==0){
								k=c; //00 k=0 
								  cout<<"row: "<<r<<" ,column:"<<c<<", matrix value: "<< print(a, row, col)<<endl;//row 0 colum 0 1 2 
								  for(int m=0;m<col;m++){ 
										a[r][m]=0;  
								  }
								  for(int n=0;n<row;n++){ 
										a[n][k]=0;  
								  }
							}
					}
		}
		
	}
  return a;
}
// Example program
using namespace std;
#include <iostream>
#include <string>

void print_array(int** b,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<b[i][j];
        }
    }
}

int** make_row_column_zero(int** a,int row,int col){
    cout<<"starting";
    int** b=new int*[row];
    for(int z=0;z<row;z++){
        b[z]=new int[col];
    }
	b[row][col]={{-11111}};   //0 1 2  0 0 0
								//2 4 5  0-1-1
    if(row<=0||col<=0){
        return NULL;
    }
    else if(row==1 && col==1){
        return a;
    }
    for(int r=0;r<row;r++){                 
             print_array(b,row,col);                 
                                              
        for(int c=0;c<col;c++){ 
             cout<<"row:"<<r<<" col:"<<c<<" array value:";
             print_array(b,row,col);
                            if(a[r][c]==0){
                                  for(int m=0;m<col;m++){ 
                                        b[r][m]=0;  
                                  }
                                  for(int n=0;n<row;n++){ 
                                        b[n][c]=0;  
                                  }
                            }
                            else{
								if(b[r][c]!=0){
                                   b[r][c]=a[r][c];
								}
                            }
                    }
        }
  return b;
}


    
int main() {
    int a[2][3] = {{1, 2, 3},  // can be viewed as a 2 × 3 matrix
               {4, 5, 6}};
         int** b =  make_row_column_zero((int**)a,2,3);
         print_array(b,2,3);
  return 0;  
} 

//make whole row and column zero if a[i][j]=0
bool make_row_column_zero_within_same_array(int** a,int row,int col){
	int flag=0;
   if(row<=0||col<=0){   0 0  rows_array={1,0}
                         0 3   cols_array={1,0}
         return false;
    }
   int* rows_array=new int[row];  
   rows_array={0};
   cols_array={0};
   int* cols_array=new int[col];
   for(int i=0:i<row;i++){
       for(int j=0;j<col;j++){
		    if(a[i][j]==0){
				if(rows_array[i]==0){  
					rows_array[i]=1;
				}
				if(cols_array[j]==0){
					cols_array[j]=1;
				}
			}
	   }
   }
   for(int k=0;k<row;k++){    //to make whole row 0
	   if(rows_array[k]==1){
		   flag=1;
		   for(int l=0;l<col;l++){
		       a[k][l]==0;
		   }
	   }
   }
   
   for(int m=0;m<col;m++){    //to make whole column 0
	   if(cols_array[m]==1){
		   flag=1;
		   for(int n=0;l<row;n++){
		       a[n][m]==0;
		   }
	   }
   }
   if(flag==1){
	   return true;
   }
   return false;
}
  
//Remove duplicates from unsorted linked list
node* Remove_duplicates_from_unsorted_linked_list(node* &head){
	if(head==null){
		return null;
	}
	else if(head->next==null){
		  return head;
	}
	node* temp=head;
    node* temp1=head;
	node* prevelement=head;
	node* currentelement=head;
	node* nextelement=head;//1->2->3->4->5->2
							temp=2
							temp1=1
							prevelement=1
							currentelement=1
							nextelement=2
	while(temp!=NULL){
          while(temp1!=NULL){
            if(temp1!=temp && temp->data==temp1->data){
                 currentelement=temp1;
                 nextelement=currentelement->next;
				delete_node(&head,&prevelement,&currentelement,&nextelement);
			}
               prevelement=temp1;
             temp1=temp1->next;
           }
    temp=temp->next;
   }

node* delete_node(node* &head,node* &prevelement,node* &currentelement,node* &nextelement){
   if(nextelement==NULL){
      prevelement->next=NULL;
      free(currentelement);
    }
   prevelement->next=nextelement;
   free(currentelement);
}
return head;
}
   

//Q 4. You are given a binary tree, and you have to return list of lists of node. where same level nodes should be in the same list, nodes are in opositive order in next list from the previous list 
Ex:


        4
      /   \
    3    5
   /  \     \
 1  10  -4
Output would be 
[[4], [5, 3], [1, 10, -4]] 

Desigred Complexity : O(N) + O(N).

- sonesh April 28, 2017 in United States | Report Duplicate | Flag 

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
	if(head==NULL||head->next==NULL){
		 return false;
	}
	node* temp=head;
	node* last=head;
	while(temp!=NULL){ //1L 2L 3L 4tL 
		last=temp;
		temp=temp->next;
	}
	
		
		


//insert a value into sorted linked list

//Reverse last five elements in linked list

   

					
                

             			





	}
		
		
	
	
	
	
	
	
		