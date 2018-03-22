//make whole row and column equal to 0 if a[i][j]=0
int* make_row_column_zero(int* a,int row,int col){
	int error=-111111,k;
	if(row<=0||col<=0){
		return error;
	}
	else if(row==1 && col==1){
		return a;
	}
	for(int r=0;r<row;r++){       //1 0 3 4  //r=0 col=4 row=3   0 0 0 0
								  //2 4 5 6						 0 0 0 0
								 // 5 8 9 10               		 0 0 0 0
								           
		for(int c=0;c<col;c++){   //c=1
			if(a[r][c]==0){
				k=c;  //k=1
				  for(int m=0;m<col;m++){ 
					    a[r][m]=0;  //a[0][0]=0,a[0][1]=0,a[0][2]=0 a[0][3]=0
				  }
				  
				  for(int n=0;n<row;n++){ 
					    a[n][k]=0;  //a[0][1]=0   a[1][1]=0   a[2][1]=0
				  }
				  
				  
			}
		}
		
	}
  return a;
}
	
		