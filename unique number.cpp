//unsorted array
int print_unique_number(int *a,int size){
    int search_element,flag=0,k;
	for(int index=0;index<size;index++){
		search_element=a[index];
		     for(int i=0;i<size;i++){
			       if(a[i]==search_element && index!=i){
				   flag=1;k=i;
				   
			  }
		 
	         }
	}
	if(flag==0){
			 return a[k];
		 }
}


//sorted array
 int print_unique_number_sorted_array(int* a,int size){
	 if(size==1){
		 return a[0];
	 }
	 else{  
	 int i=0,j=1,flag=0,k; 
	   while(i<size){ 
		   if(size%2==1 && i=size-3 && a[i]==a[j])){
			   i+=2;
		   }
		   else if(a[i]==a[j]){
			   i+=2;j+=2;
		   }
		   else{
			   flag=1;
			   k=i;
		   }
	   }
	 }
	   if(flag==1){
		   return a[k];
	   }
	 }
	 
//sorted array using binary search idea
int print_unique_number_sorted_binary_search(int* a,int low,int max){
	if (low > max){
       return;
	}
    else if (low==high)
    {
        return a[low];
    }
	else{
		 mid=(int)((low+max)/2);
		   if(mid%2==0){
			   if(a[mid]==a[mid+1]){
				   low=mid+2;
				  return print_unique_number_sorted_binary_search(a,low,max);
			   }
			   else{
				   max=mid;
				 return print_unique_number_sorted_binary_search(a,low,max);
			   }
		   }
		   else{
			   if(a[mid]==a[mid-1]){
				   low=mid-2;
				 return print_unique_number_sorted_binary_search(a,low,max);
			   }
			   else{
				   max=mid-1;
				  return print_unique_number_sorted_binary_search(a,low,max);
			   }
		   }
    }
}
		   
				   
				   
			  
		 
		
	 
		  
		   