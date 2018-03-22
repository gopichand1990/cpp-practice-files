//find 2nd largest element in array without sorting
int* find_second_largest_element_in_array(int* a,int size){
	int max,secondmax,thirdmax,error=-111111;
	    if(!(size<3)){
			cout<<"error can't find sorted first three elements"
			return error;
		}
		max=a[0];secondmax=a[1];thirdmax=a[2];
		if(max>secondmax&&max>thirdmax){
			 
	  for(index=0;index<size;index++){
		  
		  
		    
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
//find nearest number using binary search
int find_nearest_number_Binary_search(int* a,int size,int search_num){
	  int error=-11111,max=0,temp;
     if(size<=0){
		  return error;
	 }
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
int find_max(int* a,int size){	 
	 for(index=0;index<size;index++){//1 2 3 4 5
		  if(a[index]>max){
			  max=a[index];
		  }
	 }
}
	 
			  
			  
		 
		
	

	
	
	
	

Write a logic to print the elements of 2D matrix in a spiral way? 
for eg if int[][] matrix = {{1,2,3,4}{5.6,7,8}{9, 10, 11,12}}; 
The output should be 1 2 3 4 8 12 11 10 9 5 6 7 
The interviewer asked me to implement a recursive algorithm.

- explorer August 25, 2017 in United States | Report Duplicate | Flag 
//
You are given a rotated sorted array of size N. You have to search a given number into it. 
Example: [4,6,8,14,90,-9,-2,0,3], Search -2.

//Fill the arrray with elements from 0 to 9. 
based on thier frequency. 

a[1]=3 means, 1 is repeated for 3 times(1 must present 3 times in that array) 
a[2]=4 means 2 is repeated for 4 times.(2 must present twice in that array)

- algoLearner March 21, 2017 in India | Report Duplicate | Flag 