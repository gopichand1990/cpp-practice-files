//How To check if array contains duplicate number
int check_for_duplicates(int* a,int size
   int error=-1111;
    if(size<=0){
         return error;
	}
    else if(size==1){
       return 0;
    }	   
	  int flag=0;
	for(int i=0;i<size;i++){   
		  for(int j=0;j<size ;j++){ 
			  if(i!=j && a[i]==a[j]){ 
				   flag=1;
			  }
          }
    }
   if(flag==1){
        return 1;
   }
   else{
      return 0;
   }
}   
				  
//2.Reverse array in inplace
int* Reverse_array_inplace(int* a,int size){ //1 2 3 4 5 6  
   int mid=size/2;//mid=3
   if(size<=0||size==1){
       return;
   }
   else{
	    for(int i=0,j=size-1;i<mid && j>=mid;i++,j--){//i=2,j=3
			 int temp;
			 temp=a[i];
			 a[i]=a[j];
			 a[j]=temp;//6 5 4 3 2 1
		}
   }
   return a;
}

//4.How to find minimum value in rotated sorted array?
int find_minimum_value_in_rotated_sorted_array(int* a,int size){
	   int error=-1111,flag=0,int k;//eg:2 4 6 -2 -1 0
	if(size<=0){
		return error;
	}
	elseif(size==1){
		return a[size-1];
	}
	else{
		for(int index=0;index<size;index++){//i=2
			 int j=index++;//j=3
			 if(j<=size && a[index]>a[j]){
				  flag=1;
				  k=j;
			 }
		}
		
	}	
	if(flag==1){
			return a[k];
		}
		else{
			return -1;
		}
}		

