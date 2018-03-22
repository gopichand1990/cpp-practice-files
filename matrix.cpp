////make whole row and column equal to 0 if a[i][j]=0
bool make_row_column_zero(int* a,int row,int col){
	int error=-111111,k=-1;
	if(row<=0||col<=0){
		return false;
	}
	else if(row==1 && col==1){
		return true;
	}
	