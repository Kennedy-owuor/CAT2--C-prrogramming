#include <stdio.h>
 
 int main (){
	 
	 int a,b,c ;
	 int scores [2][2][2] = {
	 {
	  {65,92},
	  {84,72}
	 },
	 {
	  {36,70},
	  {59,67}
	  	
	  }
	 	
	 };

     for (a=0;a<2;a++){
		 for (b=0;b<2;b++){
			 for (c=0;c<2;c++) {
				 printf("scores[%d][%d][%d] = %d \n",a,b,c,scores[a][b][c]);
			 }
		 }
	 }
	 return 0;
	 
}