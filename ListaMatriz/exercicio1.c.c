#include <stdio.h>
main()
{
  int mat[10][10],i,j;
  printf("Matriz 10x10\n\n");
  for(i=0;i<10;i++){
  	for(j=0;j<10;j++){
  	  printf("\nDigite [%d][%d]: ",i,j);
  	  scanf("%d",&mat[i][j]);
    }
  }
  system("cls");
  printf("Matriz 10x10 \n\n");
  for(i=0;i<10;i++){
  	for(j=0;j<10;j++){
      printf("%d\t",mat[i][j]);		
  	}
  	printf("\n");
  }
  printf("\n\nDiagonal Principal\n\n");
  for(i=0;i<10;i++){
  	for(j=0;j<10;j++){
  		if(i==j){ printf("%d\t",mat[i][j]); }  
		  else{ printf("\t");  }   		
  	}
  	printf("\n");
  }
}
