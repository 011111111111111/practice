#include<stdio.h>
main()
{
	int rn[2][3],x,y;
	printf("Enter elements");
	for (x=0 ;x<2; x++){
		for (y=0; y<3; y++){
		    scanf("%d",&rn[x][y]);
		}
	}
//	printf("%d",rn[0][y]);

	float cgpa[2][3];
	int a,b;
	printf("Enter the elements for array:  ");
	for (a=0 ;a<2; a++){
		for (b=0; b<3; b++){
		    scanf("%f",&cgpa[a][b]);
		}  
	}
	
	char grade[2][3];
	int c,d;
	printf("Enter the elements for array:");
	for(c=0;c<2;c++){
		for (d=0;d<3;d++){
			fflush(stdin);
			scanf("%c",&grade[c][d]);
		}
		
	}
	
	char name[2][3][100];
	int e,f;
	printf("Enter names: ");
	for (e=0;e<2;e++){
		for(f=0;f<3;f++){
			fflush(stdin);
			gets(name[e][f]);
			puts(name[e][f]);
		}
	}
	

	
//output printing
printf("The table for regnistration numbers : ");
for (x=0 ;x<2; x++){
	
	printf("\n");
		for (y=0; y<3; y++){
			
		    printf("  %d ",rn[x][y]);
		}
	}
printf("\nThe table for cgpa : ");
for (a=0 ;a<2; a++){
	
	printf("\n");
		for (b=0; b<3; b++){
			
		    printf("%.2f ",cgpa[a][b]);
		}
	}
printf("\nThe table for grades: ");
for (c=0 ;c<2; c++){
	
	printf("\n");
		for (d=0; d<3; d++){
			fflush(stdin);
			
		    printf("  %c ",grade[c][d]);
		}
	}
	
}
