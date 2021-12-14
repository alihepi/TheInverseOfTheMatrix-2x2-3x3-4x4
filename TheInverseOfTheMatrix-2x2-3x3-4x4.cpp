/*A small program that finds the inverse of the "2x2/3x3/4x4" matrices by pouring the formulas shown in the Linear Algebra Course into the coding*/
/*Ali Mutlu*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main() {


	/*The main skeleton*/

	int nindex;
	

	/*indicator*/

	char select;


	/* 2x2 Matris */

		int matris2x2[2][2];
			int i2x2,j2x2;
			float detA2x2;
			int a2x2;
		float inversematris2x2[2][2];
		int l2x2,m2x2;
		
			// save
			float a11_2x2,a12_2x2,a21_2x2,a22_2x2;
			float s_a11_2x2,s_a12_2x2,s_a21_2x2,s_a22_2x2;

			

	/* 3x3 Matris */

		int matris3x3[3][3];
			int i3x3,j3x3;
			float detA3x3;
		float inversematris3x3[3][3];
		float matris3x3t[3][3];
		float transposematris3x3t[3][3];
		int l3x3,m3x3;
		int c3x3,d3x3;
			float process1,process2,process3;
			
			//save	
			float a11_3x3,a12_3x3,a13_3x3,a21_3x3,a22_3x3,a23_3x3,a31_3x3,a32_3x3,a33_3x3;
			float s_a11_3x3,s_a12_3x3,s_a13_3x3,s_a21_3x3,s_a22_3x3,s_a23_3x3,s_a31_3x3,s_a32_3x3,s_a33_3x3;
			

	/* 4x4 Matris */

		int matris4x4[4][4];
			int i4x4,j4x4;
			float detA4x4;
		float inversematris4x4[4][4];
		float matris4x4t[4][4];
		float transposematris4x4t[4][4];
		int l4x4,m4x4;
		int c4x4,d4x4;

			float a,b,c,aa,bb,cc,d,e,f,dd,ee,ff,g,h,i,gg,hh,ii,r,s,t,rr,ss,tt;
			float b11,b12,b13,b14,b21,b22,b23,b24,b31,b32,b33,b34,b41,b42,b43,b44;
			
			//save
			float a11_4x4,a12_4x4,a13_4x4,a14_4x4,a21_4x4,a22_4x4,a23_4x4,a24_4x4,a31_4x4,a32_4x4,a33_4x4,a34_4x4,a41_4x4,a42_4x4,a43_4x4,a44_4x4;
			float s_a11_4x4,s_a12_4x4,s_a13_4x4,s_a14_4x4,s_a21_4x4,s_a22_4x4,s_a23_4x4,s_a24_4x4,s_a31_4x4,s_a32_4x4,s_a33_4x4,s_a34_4x4,s_a41_4x4,s_a42_4x4,s_a43_4x4,s_a44_4x4;		

				

	/* The Main Program Screen */

		perprogram:


	printf("\n\n\tPlease enter the, n-square (nxn matrix) n value of the \n\tmatrix you want to get the opposite of: "); scanf("%d", &nindex);


	/*2x2 Matrix*/

	if (nindex==2) {


		printf("\n\tPlease use the elements of the 2-square matrix, 1. enter it \n\tstarting from the line elements:\n\n");

		for ((i2x2)=0; (i2x2)<2; (i2x2)++) {
			for ((j2x2)=0; (j2x2)<2; (j2x2)++) {
				printf("\t"); scanf("%d", &matris2x2[i2x2][j2x2]);
			}
		}
				

	printf("\n\n\tYour 2-square matrix:");
	printf("\n\n");

	

	for ((i2x2)=0; (i2x2)<2; (i2x2)++) {
		for ((j2x2)=0; (j2x2)<2; (j2x2)++) {		
			printf("\t%d", matris2x2[i2x2][j2x2]);
		}
		printf("\n\n");
	}

		s_a11_2x2 = matris2x2[0][0];
		s_a12_2x2 = matris2x2[0][1];
		s_a21_2x2 = matris2x2[1][0] ;
		s_a22_2x2 = matris2x2[1][1];
		

		/* Finding the inverse of a 2x2 matrix by the determinant path */

	detA2x2 = ( ((matris2x2[0][0])*(matris2x2[1][1])) - ((matris2x2[0][1])*(matris2x2[1][0])) );


		/* Extra  matrix */
		
		a2x2 = matris2x2[0][0];

		matris2x2[0][0] = matris2x2[1][1];
		matris2x2[1][1] = a2x2;

		matris2x2[0][1] = (-1)*(matris2x2[0][1]);
		matris2x2[1][0] = (-1)*(matris2x2[1][0]);
	

		/* Inverse of the Matrix */


	inversematris2x2[0][0] = (1/(detA2x2))*(matris2x2[0][0]);
	inversematris2x2[0][1] = (1/(detA2x2))*(matris2x2[0][1]);
	inversematris2x2[1][0] = (1/(detA2x2))*(matris2x2[1][0]);
	inversematris2x2[1][1] = (1/(detA2x2))*(matris2x2[1][1]);


	printf("\n\n\tDo you want to see the Inverse of the Matrix? (Y: Yes / N: No)  ");
	select=getch();


	if(select=='Y' || select=='y') {	


		printf("\n\n\n\tThe Inverse of your 2-square Matrix:");
		printf("\n\n");	


		for((l2x2)=0; (l2x2)<2; (l2x2)++){
			for((m2x2)=0; (m2x2)<2; (m2x2)++) {
				printf("\t%.2f", inversematris2x2[l2x2][m2x2]);
			}
			printf("\n\n");
		}
	
		printf("\n\n\tDo you want to save your Inverse Matrix? (Y: Yes / N: No) ");
		select=getch();
			
		if(select=='Y' || select=='y') {
			
			FILE *file_pointer_2x2 = fopen("2x2_The_Inverse_of_the_Matrix.txt","w");
				
				if (file_pointer_2x2 == NULL){
					printf("The File Could Not be Saved");
				}
				else {
					file_pointer_2x2 = fopen("2x2_The_Inverse_of_the_Matrix.txt","a");
					
					a11_2x2=(inversematris2x2[0][0]), a12_2x2=(inversematris2x2[0][1]);
					a21_2x2=(inversematris2x2[1][0]), a22_2x2=(inversematris2x2[1][1]);
					
					fprintf(file_pointer_2x2,"Your matrix:\n");
					fprintf(file_pointer_2x2,"%.2f\t%.2f \n%.2f\t%.2f", s_a11_2x2, s_a12_2x2, s_a21_2x2, s_a22_2x2);
					fprintf(file_pointer_2x2,"\n\nThe Inverse of the Matrix\n");
					fprintf(file_pointer_2x2,"%.2f\t%.2f \n%.2f\t%.2f", a11_2x2, a12_2x2, a21_2x2, a22_2x2);

					}		
					fclose(file_pointer_2x2);

					printf("\n\t>>>Successfully recorded");
				}


		printf("\n\n\tDo you want to re-process? (Y: Yes / N: No)  ");

		select=getch();

	

		if(select=='Y' || select=='y') {
			system("cls");
			goto perprogram;
		}

		else if(select=='N' || select=='n'){
				goto endofprogram;
			}							
	}
			
}



	/* 3x3 Matrix */

	if (nindex==3) {


	printf("\n\tPlease use the elements of the 3-square matrix, 1. enter it \n\tstarting from the line elements:\n\n");
	

		for ((i3x3)=0; (i3x3)<3; (i3x3)++) {
			for ((j3x3)=0; (j3x3)<3; (j3x3)++) {
				printf("\t"); scanf("%d", &matris3x3[i3x3][j3x3]);
			}
		}

		

	printf("\n\n\tYour 3-square matrix:");
	printf("\n\n");


	for ((i3x3)=0; (i3x3)<3; (i3x3)++) {
		for ((j3x3)=0; (j3x3)<3; (j3x3)++) {		
			printf("\t%d", matris3x3[i3x3][j3x3]);
		}
		printf("\n\n");
	}

	s_a11_3x3 = matris3x3[0][0];
	s_a12_3x3 = matris3x3[0][1];
	s_a13_3x3 = matris3x3[0][2];
		s_a21_3x3 = matris3x3[1][0];
		s_a22_3x3 = matris3x3[1][1];
		s_a23_3x3 = matris3x3[1][2];
	s_a31_3x3 = matris3x3[2][0];
	s_a32_3x3 = matris3x3[2][1];
	s_a33_3x3 = matris3x3[2][2];
	

	/* Finding the inverse of a 3x3 matrix by the determinant path */
	

		/* Determinant Calculation : */

		process1=((matris3x3[1][1])*(matris3x3[2][2]))-((matris3x3[2][1])*(matris3x3[1][2]));
		process2=((matris3x3[1][0])*(matris3x3[2][2]))-((matris3x3[2][0])*(matris3x3[1][2]));
		process3=((matris3x3[1][0])*(matris3x3[2][1]))-((matris3x3[2][0])*(matris3x3[1][1]));

	

	/*Determinant*/

	detA3x3=((matris3x3[0][0])*process1)-((matris3x3[0][1])*process2)+((matris3x3[0][2])*process3);



	/* 3x3 Sub-Matrix Cofactors */

	(matris3x3t[0][0]) = ((matris3x3[1][1])*(matris3x3[2][2]))-((matris3x3[1][2])*(matris3x3[2][1]));
	(matris3x3t[0][1]) = (-1)*(((matris3x3[1][0])*(matris3x3[2][2]))-((matris3x3[1][2])*(matris3x3[2][0]))); 
	(matris3x3t[0][2]) = ((matris3x3[1][0])*(matris3x3[2][1]))-((matris3x3[1][1])*(matris3x3[2][0]));
		(matris3x3t[1][0]) = (-1)*(((matris3x3[0][1])*(matris3x3[2][2]))-((matris3x3[0][2])*(matris3x3[2][1])));
		(matris3x3t[1][1]) = ((matris3x3[0][0])*(matris3x3[2][2]))-((matris3x3[0][2])*(matris3x3[2][0]));
		(matris3x3t[1][2]) = (-1)*(((matris3x3[0][0])*(matris3x3[2][1]))-((matris3x3[0][1])*(matris3x3[2][0])));
	(matris3x3t[2][0]) = ((matris3x3[0][1])*(matris3x3[1][2]))-((matris3x3[0][2])*(matris3x3[1][1]));
	(matris3x3t[2][1]) = (-1)*(((matris3x3[0][0])*(matris3x3[1][2]))-((matris3x3[0][2])*(matris3x3[1][0])));
	(matris3x3t[2][2]) = ((matris3x3[0][0])*(matris3x3[1][1]))-((matris3x3[0][1])*(matris3x3[1][0]));



	/* Calculating the Transpose */

			(transposematris3x3t[0][0])=(matris3x3t[0][0]);
			(transposematris3x3t[0][1])=(matris3x3t[1][0]);
			(transposematris3x3t[0][2])=(matris3x3t[2][0]);
				(transposematris3x3t[1][0])=(matris3x3t[0][1]);
				(transposematris3x3t[1][1])=(matris3x3t[1][1]);
				(transposematris3x3t[1][2])=(matris3x3t[2][1]);
			(transposematris3x3t[2][0])=(matris3x3t[0][2]);
			(transposematris3x3t[2][1])=(matris3x3t[1][2]);
			(transposematris3x3t[2][2])=(matris3x3t[2][2]);



	/* Inverse of the Matrix */	

	inversematris3x3[0][0] = (1/(detA3x3))*(transposematris3x3t[0][0]);
	inversematris3x3[0][1] = (1/(detA3x3))*(transposematris3x3t[0][1]);
	inversematris3x3[0][2] = (1/(detA3x3))*(transposematris3x3t[0][2]);
		inversematris3x3[1][0] = (1/(detA3x3))*(transposematris3x3t[1][0]);
		inversematris3x3[1][1] = (1/(detA3x3))*(transposematris3x3t[1][1]);
		inversematris3x3[1][2] = (1/(detA3x3))*(transposematris3x3t[1][2]);
	inversematris3x3[2][0] = (1/(detA3x3))*(transposematris3x3t[2][0]);
	inversematris3x3[2][1] = (1/(detA3x3))*(transposematris3x3t[2][1]);
	inversematris3x3[2][2] = (1/(detA3x3))*(transposematris3x3t[2][2]);

	
	
	printf("\n\n\tDo you want to see the Inverse of the Matrix? (Y: Yes / N: No)  ");
	select=getch();
	

	if(select=='Y' || select=='y') {
	

		printf("\n\n\n\tThe Inverse of your 3-square Matrix:");
		printf("\n\n");	


		for((l3x3)=0; (l3x3)<3; (l3x3)++){
			for((m3x3)=0; (m3x3)<3; (m3x3)++) {
				printf("\t%.2f", inversematris3x3[l3x3][m3x3]);
			}
			printf("\n\n");
		}
		
		
		printf("\n\n\tDo you want to save your Inverse Matrix? (Y: Yes / N: No) ");
		select=getch();
		
		if(select=='Y' || select=='y') {
			
			FILE *file_pointer_3x3 = fopen("3x3_The_Inverse_of_the_Matrix.txt","w");
				
				if (file_pointer_3x3 == NULL){
					printf("The File Could Not be Saved");
				}
				else {
					file_pointer_3x3 = fopen("3x3_The_Inverse_of_the_Matrix.txt","a");
					
					a11_3x3=(inversematris3x3[0][0]), a12_3x3=(inversematris3x3[0][1]), a13_3x3=(inversematris3x3[0][2]);
					a21_3x3=(inversematris3x3[1][0]), a22_3x3=(inversematris3x3[1][1]), a23_3x3=(inversematris3x3[1][2]);
					a31_3x3=(inversematris3x3[2][0]), a32_3x3=(inversematris3x3[2][1]), a33_3x3=(inversematris3x3[2][2]);
					
					fprintf(file_pointer_3x3,"Your matrix:\n");
					fprintf(file_pointer_3x3,"%.2f\t%.2f\t%.2f \n%.2f\t%.2f\t%.2f \n%.2f\t%.2f\t%.2f", s_a11_3x3, s_a12_3x3, s_a13_3x3, s_a21_3x3, s_a22_3x3, s_a23_3x3, s_a31_3x3, s_a32_3x3, s_a33_3x3);
					fprintf(file_pointer_3x3,"\n\nThe Inverse of the Matrix\n");
					fprintf(file_pointer_3x3,"%.2f\t%.2f\t%.2f \n%.2f\t%.2f\t%.2f \n%.2f\t%.2f\t%.2f", a11_3x3, a12_3x3, a13_3x3, a21_3x3, a22_3x3, a23_3x3, a31_3x3, a32_3x3, a33_3x3);
	
					}
					fclose(file_pointer_3x3);
										
					printf("\n\t>>>Successfully recorded");
				}
		}

		else if(select=='N' || select=='n') {
				goto endofprogram;
			}

		

		printf("\n\n\tDo you want to re-process? (Y: Yes / N: No)  ");
		select=getch();


		if(select=='Y' || select=='y') {			
			system("cls");
				goto perprogram;
		}
		
		else if(select=='N' || select=='n') {
				goto endofprogram;
			}				
	}
	

	/* 4x4 Matrix */

	if (nindex==4) {
	

		printf("\n\tPlease use the elements of the 4-square matrix, 1. enter it \n\tstarting from the line elements:\n\n");


		for ((i4x4)=0; (i4x4)<4; (i4x4)++) {
			for ((j4x4)=0; (j4x4)<4; (j4x4)++) {
				printf("\t"); scanf("%d", &matris4x4[i4x4][j4x4]);
			}
		}

		

	printf("\n\n\tYour 4-square matrix:");
	printf("\n\n");
	

	for ((i4x4)=0; (i4x4)<4; (i4x4)++) {
		for ((j4x4)=0; (j4x4)<4; (j4x4)++) {		
			printf("\t%d", matris4x4[i4x4][j4x4]);
		}
		printf("\n\n");
	}

	s_a11_4x4 = matris4x4[0][0];
	s_a12_4x4 = matris4x4[0][1];
	s_a13_4x4 = matris4x4[0][2];
	s_a14_4x4 = matris4x4[0][3];
		s_a21_4x4 = matris4x4[1][0];
		s_a22_4x4 = matris4x4[1][1];
		s_a23_4x4 = matris4x4[1][2];
		s_a24_4x4 = matris4x4[1][3];
	s_a31_4x4 = matris4x4[2][0];
	s_a32_4x4 = matris4x4[2][1];
	s_a33_4x4 = matris4x4[2][2];
	s_a34_4x4 = matris4x4[2][3];
		s_a41_4x4 = matris4x4[3][0];
		s_a42_4x4 = matris4x4[3][1];
		s_a43_4x4 = matris4x4[3][2];
		s_a44_4x4 = matris4x4[3][3];
	

	/* Finding the inverse of a 4x4 matrix by the determinant path */
		

		/* Determinant Calculation : */

		a=((matris4x4[0][0])*(matris4x4[1][1])*(matris4x4[2][2])*(matris4x4[3][3]));
		b=((matris4x4[0][0])*(matris4x4[1][2])*(matris4x4[2][3])*(matris4x4[3][1]));
		c=((matris4x4[0][0])*(matris4x4[1][3])*(matris4x4[2][1])*(matris4x4[3][2]));
		 aa=((matris4x4[0][1])*(matris4x4[1][0])*(matris4x4[2][3])*(matris4x4[3][2]));
		 bb=((matris4x4[0][1])*(matris4x4[1][2])*(matris4x4[2][0])*(matris4x4[3][3]));
	     cc=((matris4x4[0][1])*(matris4x4[1][3])*(matris4x4[2][2])*(matris4x4[3][0]));
		d=((matris4x4[0][2])*(matris4x4[1][0])*(matris4x4[2][1])*(matris4x4[3][3]));
		e=((matris4x4[0][2])*(matris4x4[1][1])*(matris4x4[2][3])*(matris4x4[3][0]));
		f=((matris4x4[0][2])*(matris4x4[1][3])*(matris4x4[2][0])*(matris4x4[3][1]));
		 dd=((matris4x4[0][3])*(matris4x4[1][0])*(matris4x4[2][2])*(matris4x4[3][1]));
		 ee=((matris4x4[0][3])*(matris4x4[1][1])*(matris4x4[2][0])*(matris4x4[3][2]));
		 ff=((matris4x4[0][3])*(matris4x4[1][2])*(matris4x4[2][1])*(matris4x4[3][0]));


		g=((matris4x4[0][0])*(matris4x4[1][1])*(matris4x4[2][3])*(matris4x4[3][2]));
		h=((matris4x4[0][0])*(matris4x4[1][2])*(matris4x4[2][1])*(matris4x4[3][3]));
		i=((matris4x4[0][0])*(matris4x4[1][3])*(matris4x4[2][2])*(matris4x4[3][1]));
		 gg=((matris4x4[0][1])*(matris4x4[1][0])*(matris4x4[2][2])*(matris4x4[3][3]));
		 hh=((matris4x4[0][1])*(matris4x4[1][2])*(matris4x4[2][3])*(matris4x4[3][0]));
		 ii=((matris4x4[0][1])*(matris4x4[1][3])*(matris4x4[2][0])*(matris4x4[3][2]));
		r=((matris4x4[0][2])*(matris4x4[1][0])*(matris4x4[2][3])*(matris4x4[3][1]));
		s=((matris4x4[0][2])*(matris4x4[1][1])*(matris4x4[2][0])*(matris4x4[3][3]));
		t=((matris4x4[0][2])*(matris4x4[1][3])*(matris4x4[2][1])*(matris4x4[3][0]));
		 rr=((matris4x4[0][3])*(matris4x4[1][0])*(matris4x4[2][1])*(matris4x4[3][2]));
		 ss=((matris4x4[0][3])*(matris4x4[1][1])*(matris4x4[2][2])*(matris4x4[3][0]));
		 tt=((matris4x4[0][3])*(matris4x4[1][2])*(matris4x4[2][0])*(matris4x4[3][1]));

		

		/*Determinant*/

		detA4x4=(a+b+c+aa+bb+cc+d+e+f+dd+ee+ff-g-h-i-gg-hh-ii-r-s-t-rr-ss-tt);	
		

	/* 4x4 Sub-Matrix Cofactors */	

		b11=(((matris4x4[1][1])*(matris4x4[2][2])*(matris4x4[3][3]))+((matris4x4[1][2])*(matris4x4[2][3])*(matris4x4[3][1]))+((matris4x4[1][3])*(matris4x4[2][1])*(matris4x4[3][2]))-((matris4x4[1][1])*(matris4x4[2][3])*(matris4x4[3][2]))-((matris4x4[1][2])*(matris4x4[2][1])*(matris4x4[3][3]))-((matris4x4[1][3])*(matris4x4[2][2])*(matris4x4[3][1])));
		b12=(((matris4x4[0][1])*(matris4x4[2][3])*(matris4x4[3][2]))+((matris4x4[0][2])*(matris4x4[2][1])*(matris4x4[3][3]))+((matris4x4[0][3])*(matris4x4[2][2])*(matris4x4[3][1]))-((matris4x4[0][1])*(matris4x4[2][2])*(matris4x4[3][3]))-((matris4x4[0][2])*(matris4x4[2][3])*(matris4x4[3][2]))-((matris4x4[0][3])*(matris4x4[2][1])*(matris4x4[3][2])));
		b13=(((matris4x4[0][1])*(matris4x4[1][2])*(matris4x4[3][3]))+((matris4x4[0][2])*(matris4x4[1][3])*(matris4x4[3][1]))+((matris4x4[0][3])*(matris4x4[1][1])*(matris4x4[3][2]))-((matris4x4[0][1])*(matris4x4[1][3])*(matris4x4[3][2]))-((matris4x4[0][2])*(matris4x4[1][1])*(matris4x4[3][3]))-((matris4x4[0][3])*(matris4x4[1][2])*(matris4x4[3][1])));
		b14=(((matris4x4[0][1])*(matris4x4[1][3])*(matris4x4[2][2]))+((matris4x4[0][2])*(matris4x4[1][1])*(matris4x4[2][3]))+((matris4x4[0][3])*(matris4x4[1][2])*(matris4x4[2][3]))-((matris4x4[0][1])*(matris4x4[1][2])*(matris4x4[2][3]))-((matris4x4[0][2])*(matris4x4[1][3])*(matris4x4[2][1]))-((matris4x4[0][3])*(matris4x4[1][1])*(matris4x4[2][2])));
	
		b21=(((matris4x4[1][0])*(matris4x4[2][3])*(matris4x4[3][2]))+((matris4x4[1][2])*(matris4x4[2][0])*(matris4x4[3][3]))+((matris4x4[1][3])*(matris4x4[2][2])*(matris4x4[3][0]))-((matris4x4[1][0])*(matris4x4[2][2])*(matris4x4[3][3]))-((matris4x4[1][2])*(matris4x4[2][3])*(matris4x4[3][0]))-((matris4x4[1][3])*(matris4x4[2][0])*(matris4x4[3][2])));
		b22=(((matris4x4[0][0])*(matris4x4[2][2])*(matris4x4[3][3]))+((matris4x4[0][2])*(matris4x4[2][3])*(matris4x4[3][0]))+((matris4x4[0][3])*(matris4x4[2][0])*(matris4x4[3][2]))-((matris4x4[0][0])*(matris4x4[2][3])*(matris4x4[3][2]))-((matris4x4[0][2])*(matris4x4[2][0])*(matris4x4[3][3]))-((matris4x4[0][3])*(matris4x4[2][2])*(matris4x4[3][0])));
		b23=(((matris4x4[0][0])*(matris4x4[1][3])*(matris4x4[3][2]))+((matris4x4[0][2])*(matris4x4[1][0])*(matris4x4[3][3]))+((matris4x4[0][3])*(matris4x4[1][2])*(matris4x4[3][0]))-((matris4x4[0][0])*(matris4x4[1][2])*(matris4x4[3][3]))-((matris4x4[0][2])*(matris4x4[1][3])*(matris4x4[3][0]))-((matris4x4[0][3])*(matris4x4[1][0])*(matris4x4[3][2])));
		b24=(((matris4x4[0][0])*(matris4x4[1][2])*(matris4x4[2][3]))+((matris4x4[0][2])*(matris4x4[1][3])*(matris4x4[2][0]))+((matris4x4[0][3])*(matris4x4[1][0])*(matris4x4[2][2]))-((matris4x4[0][0])*(matris4x4[1][3])*(matris4x4[2][2]))-((matris4x4[0][2])*(matris4x4[1][0])*(matris4x4[2][3]))-((matris4x4[0][3])*(matris4x4[1][2])*(matris4x4[2][0])));

		b31=(((matris4x4[1][0])*(matris4x4[2][1])*(matris4x4[3][3]))+((matris4x4[1][1])*(matris4x4[2][3])*(matris4x4[3][0]))+((matris4x4[1][3])*(matris4x4[2][0])*(matris4x4[3][1]))-((matris4x4[1][0])*(matris4x4[2][3])*(matris4x4[3][1]))-((matris4x4[1][1])*(matris4x4[2][0])*(matris4x4[3][3]))-((matris4x4[1][3])*(matris4x4[2][1])*(matris4x4[3][0])));
		b32=(((matris4x4[0][0])*(matris4x4[2][3])*(matris4x4[3][1]))+((matris4x4[0][1])*(matris4x4[2][0])*(matris4x4[3][3]))+((matris4x4[0][3])*(matris4x4[2][1])*(matris4x4[3][0]))-((matris4x4[0][0])*(matris4x4[2][1])*(matris4x4[3][3]))-((matris4x4[0][1])*(matris4x4[2][3])*(matris4x4[3][0]))-((matris4x4[0][3])*(matris4x4[2][0])*(matris4x4[3][1])));
		b33=(((matris4x4[0][0])*(matris4x4[1][1])*(matris4x4[3][3]))+((matris4x4[0][1])*(matris4x4[1][3])*(matris4x4[3][0]))+((matris4x4[0][3])*(matris4x4[1][0])*(matris4x4[3][1]))-((matris4x4[0][0])*(matris4x4[1][3])*(matris4x4[3][1]))-((matris4x4[0][1])*(matris4x4[1][0])*(matris4x4[3][3]))-((matris4x4[0][3])*(matris4x4[1][1])*(matris4x4[3][0])));
		b34=(((matris4x4[0][0])*(matris4x4[1][3])*(matris4x4[2][1]))+((matris4x4[0][1])*(matris4x4[1][0])*(matris4x4[2][3]))+((matris4x4[0][3])*(matris4x4[1][1])*(matris4x4[2][0]))-((matris4x4[0][0])*(matris4x4[1][1])*(matris4x4[2][3]))-((matris4x4[0][1])*(matris4x4[1][3])*(matris4x4[2][0]))-((matris4x4[0][3])*(matris4x4[1][0])*(matris4x4[2][1])));

		b41=(((matris4x4[1][0])*(matris4x4[2][2])*(matris4x4[3][1]))+((matris4x4[1][1])*(matris4x4[2][0])*(matris4x4[3][2]))+((matris4x4[1][2])*(matris4x4[2][1])*(matris4x4[3][0]))-((matris4x4[1][0])*(matris4x4[2][1])*(matris4x4[3][2]))-((matris4x4[1][1])*(matris4x4[2][2])*(matris4x4[3][0]))-((matris4x4[1][2])*(matris4x4[2][0])*(matris4x4[3][1])));
		b42=(((matris4x4[0][0])*(matris4x4[2][1])*(matris4x4[3][2]))+((matris4x4[0][1])*(matris4x4[2][2])*(matris4x4[3][0]))+((matris4x4[0][2])*(matris4x4[2][0])*(matris4x4[3][1]))-((matris4x4[0][0])*(matris4x4[2][2])*(matris4x4[3][1]))-((matris4x4[0][1])*(matris4x4[2][0])*(matris4x4[3][2]))-((matris4x4[0][2])*(matris4x4[2][1])*(matris4x4[3][0])));
		b43=(((matris4x4[0][0])*(matris4x4[1][2])*(matris4x4[3][1]))+((matris4x4[0][1])*(matris4x4[1][0])*(matris4x4[3][2]))+((matris4x4[0][2])*(matris4x4[1][1])*(matris4x4[3][0]))-((matris4x4[0][0])*(matris4x4[1][1])*(matris4x4[3][2]))-((matris4x4[0][1])*(matris4x4[1][2])*(matris4x4[3][0]))-((matris4x4[0][2])*(matris4x4[1][0])*(matris4x4[3][1])));
		b44=(((matris4x4[0][0])*(matris4x4[1][1])*(matris4x4[2][2]))+((matris4x4[0][1])*(matris4x4[1][2])*(matris4x4[2][0]))+((matris4x4[0][2])*(matris4x4[1][0])*(matris4x4[2][1]))-((matris4x4[0][0])*(matris4x4[1][2])*(matris4x4[2][1]))-((matris4x4[0][1])*(matris4x4[1][0])*(matris4x4[2][2]))-((matris4x4[0][2])*(matris4x4[1][1])*(matris4x4[2][0])));	

	



	/* Inverse of the Matrix */		

	inversematris4x4[0][0] = (1/(detA4x4))*b11;
	inversematris4x4[0][1] = (1/(detA4x4))*b12;
	inversematris4x4[0][2] = (1/(detA4x4))*b13;
	inversematris4x4[0][3] = (1/(detA4x4))*b14;
		inversematris4x4[1][0] = (1/(detA4x4))*b21;
		inversematris4x4[1][1] = (1/(detA4x4))*b22;
		inversematris4x4[1][2] = (1/(detA4x4))*b23;
		inversematris4x4[1][3] = (1/(detA4x4))*b24;
	inversematris4x4[2][0] = (1/(detA4x4))*b31;
	inversematris4x4[2][1] = (1/(detA4x4))*b32;
	inversematris4x4[2][2] = (1/(detA4x4))*b33;
	inversematris4x4[2][3] = (1/(detA4x4))*b34;
		inversematris4x4[3][0] = (1/(detA4x4))*b41;
		inversematris4x4[3][1] = (1/(detA4x4))*b42;
		inversematris4x4[3][2] = (1/(detA4x4))*b43;
		inversematris4x4[3][3] = (1/(detA4x4))*b44;

	
	

	printf("\n\n\tDo you want to see the Inverse of the Matrix? (Y: Yes / N: No)  ");
	select=getch();

	

	if(select=='Y' || select=='y') {
		

		printf("\n\n\n\tThe Inverse of your 4-square Matrix:");
		printf("\n\n");	
	
	
		for((l4x4)=0; (l4x4)<4; (l4x4)++){
			for((m4x4)=0; (m4x4)<4; (m4x4)++) {
				printf("\t%.2f", inversematris4x4[l4x4][m4x4]);
			}
			printf("\n\n");
		}
		
		
		printf("\n\n\tDo you want to save your Inverse Matrix? (Y: Yes / N: No) ");
		select=getch();
		
		if(select=='Y' || select=='y') {
			
			FILE *file_pointer_4x4 = fopen("4x4_The_Inverse_of_the_Matrix.txt","w");
				
				if (file_pointer_4x4 == NULL){
					printf("The File Could Not be Saved");
				}
				else {
					file_pointer_4x4 = fopen("4x4_The_Inverse_of_the_Matrix.txt","a");
					
					a11_4x4=(inversematris4x4[0][0]),a12_4x4=(inversematris4x4[0][1]),a13_4x4=(inversematris4x4[0][2]),a14_4x4=(inversematris4x4[0][3]);
					a21_4x4=(inversematris4x4[1][0]),a22_4x4=(inversematris4x4[1][1]),a23_4x4=(inversematris4x4[1][2]),a24_4x4=(inversematris4x4[1][3]);
					a31_4x4=(inversematris4x4[2][0]),a32_4x4=(inversematris4x4[2][1]),a33_4x4=(inversematris4x4[2][2]),a34_4x4=(inversematris4x4[3][3]);
					a41_4x4=(inversematris4x4[3][0]),a42_4x4=(inversematris4x4[4][1]),a43_4x4=(inversematris4x4[3][2]),a44_4x4=(inversematris4x4[4][3]);
					
					fprintf(file_pointer_4x4,"Your matrix:\n");
					fprintf(file_pointer_4x4,"%.2f\t%.2f\t%.2f\t%.2f \n%.2f\t%.2f\t%.2f\t%.2f \n%.2f\t%.2f\t%.2f\t%.2f \n%.2f\t%.2f\t%.2f\t%.2f", s_a11_4x4, s_a12_4x4, s_a13_4x4, s_a14_4x4, s_a21_4x4, s_a22_4x4, s_a23_4x4, s_a24_4x4, s_a31_4x4, s_a32_4x4, s_a33_4x4, s_a34_4x4, s_a41_4x4, s_a42_4x4, s_a43_4x4, s_a44_4x4);
					fprintf(file_pointer_4x4,"\n\nThe Inverse of the Matrix\n");					
					fprintf(file_pointer_4x4,"%.2f\t%.2f\t%.2f\t%.2f \n%.2f\t%.2f\t%.2f\t%.2f \n%.2f\t%.2f\t%.2f\t%.2f \n%.2f\t%.2f\t%.2f\t%.2f", a11_4x4,a12_4x4,a13_4x4,a14_4x4,a21_4x4,a22_4x4,a23_4x4,a24_4x4,a31_4x4,a32_4x4,a33_4x4,a34_4x4,a41_4x4,a42_4x4,a43_4x4,a44_4x4);

					}
					fclose(file_pointer_4x4);
										
					printf("\n\t>>>Successfully recorded");
				}
		}

		else if(select=='N' || select=='n'){
				goto endofprogram;			
			}							
	
		printf("\n\n\tDo you want to re-process? (Y: Yes / N: No)  ");

		select=getch();

	

		if(select=='Y' || select=='y') {
			system("cls");
			goto perprogram;
		}

		else if(select=='N' || select=='n'){
				goto endofprogram;
			}							

	else if (select=='N' || select=='n'){
				goto endofprogram;
	}
}
	

	if (nindex<=1 || nindex>=5) {

		system("cls");
		printf("\n\n\t!!!Please enter an n-squared matrix value in the range [2,4]!!! ");

		goto perprogram;

}



		endofprogram:

			printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t GitHub: @alihepi\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Twitter: @alihepi\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Instagram: @alihappy_ \n\n");


	getch();
	return 0;

}
