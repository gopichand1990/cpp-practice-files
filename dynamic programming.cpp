	
  //code
 int calculate_max_profit(int* a,int size){
	 //This method uses calculate_max_after_element_in_array method to get maximum element in array after that element and compute max profit from it
	 //test case[1 2 3 4 2 5]
	 int max_profit=0;
	 for(int i=0;i<size;i++){
		 int diff=calculate_max_after_element_in_array(a,size,i);
		 if(diff==99999999){
		    return -1;        
		 }
		 else{
		 max_diff=diff-a[i];
			if(max_diff > max_profit){
				max_profit=max_diff;
			} 
	    }
	 }
return max_profit;
 }
	 
 //testcase[1 2 3 4 2 5]
 int calculate_max_after_element_in_array(int* a,int size,int element_index){
	 //This method is to calculate maximum element after an element in array
	 int max=0,flag,error_code=99999999;
	 for(int index=element_index+1;index<size;index++){
		  if(a[index] > max){
			  max=a[index];
			  int flag=1;
		  }
	 }
	 if(flag==1){
	     return max;
	 }
	 else{ 
	 return error_code;
 }	
		    
		 
		  
	 
	 