/*given an array of sorted integers need to find closest value to it
2 3 4 5 7 9 6 let this be list
if search element is 5
nearest elemet:5

if search element is 7
nearest elemet:5

if search element is 11
nearest elemet:5

*/
int find_closest_value_to_given_integer(int* a,int size,int search_num){
	int index,error=-11111,min,max,temp;//2 3 4 5 7 9 6(search element)
    if(size<=0){
		return error;
	}
	else if(search_num<a[0]){
		return a[0];
	}
	else if(search_num>a[size-1]){
		return a[size-1];
	}
	else{
	   for(index=0;index<size;index++){
		   if(search_num==a[index]){
			   return a[index];
		   }
	   }
		     min=max_min(a,size,search_num);
		     max=min_max(a,size,search_num);
		     if((search_num-min)>(max-search_num)){
			    return max;
		     }
		    else{
			    return min;
		    }
	 }
}


//to find max of min eelement of given number
int max_min(int *a,int size,int search_num){
	for(int index=0;i<size;i++){  //2 3 4 5 7 9 6(search element)
		if(search_num>a[index]){
			 min=a[index];  
		}
	}
return min;
}

//to find min of max element of given number
int min_max(int *a,int size,int search_num){//2 3 4 5 7 9 6(search element)
	for(int index=size-1;index>=0;index--){
		if(search_num<a[index]){
			 max=a[index];  
		}
	}
return max;
}

		
		    
		