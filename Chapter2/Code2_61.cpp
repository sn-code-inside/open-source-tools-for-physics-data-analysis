//Implementation of a code able to solve a linear system in three unknown variables with the Gauss triangularization method
￼
//Printing coefficients to check if read correctly!! 
  for(int i =0; i<numrows; i++){
    for(int j=0; j<numcoef+1;j++){
      cout<<coef[i][j]<<"  ";
    }
    cout<<endl;
  }
  cout<<endl;
  cout<<endl;
//***************************!!
￼
//Service variable
  double denom, numen,temp;
  int xx=1;//index to make row exchange
//***************************!!
￼
￼
  for(int k =0; k<numrighe-1;k++){ //looping on the colouns 
    numen=coef[k][k]; // the element on the diagonal is the key of the process!
// if this coefficient is equal to zero, it does not allow us to perform the triangulation
// so we proceed by searching for a row where the first element is different from zero in order
// to perform a simple swap
    if(numen==0){
//this while-loop look for the first row useful for a swap
      while(coef[k+xx][k]==0){
	xx++;
      }
//This loop perform the swap
      for(int m =0; m<numrighe+1;m++){
	temp = coef[k][m];
	coef[k][m]=coef[k+xx][m];
	coef[k+xx][m]=temp;
      }
//  numen=coef[k][k];
//initialize xx to 1 in case of another control procedure via while-loop 
      xx=1; 
    }
￼
    for(int i =k+1; i<numrighe; i++){
      denom=coef[i][k];
      //If the element is zero in the triangle area is already zero, we skip the procedure
      if(denom!=0){ 
	for(int j=k; j<numrighe+1; j++){
	  coef[i][j] =  coef[k][j]- (coef[i][j]/denom)*numen;
	}//looping on h
      }
    }//looping on i
  }//looping on k
￼
  //Printing the final results
  for(int i =0; i<numrighe; i++){
    for(int j=0; j<numrighe+1;j++){
      cout<<coef[i][j]<<"  ";
    }
    cout<<endl;
    
  }
  
double sol[numrighe];
￼
for(int i=numrighe-1; i>-1;i--){
sol[i]=coef[i][numrighe];
￼
for(int j=i;j<numrighe-1;j++){
sol[i]-= sol[j+1]*coef[i][j+1];
}
￼
sol[i]= sol[i]/coef[i][i];
￼
}
for(int i =0; i<numrighe;i++){
cout<<"soluzione "<<i+1<<" = "<<sol[i]<<endl;
}
  return 0;
}
