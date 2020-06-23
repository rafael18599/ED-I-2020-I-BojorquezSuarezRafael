

#include <stdio.h>
#include <stdlib.h>
void hacer();
int m[3][3],m2[3][3],m3[3][3];
	int main(void) {
	setbuf(stdout,NULL);
	hacer(m,m2);
	//suma
	for(int i=0;i<3;i++){
			printf("\n");
				for(int j=0;j<3;j++){
					*(*(m3+i)+j)= *(*(m+i)+j) + *(*(m2+i)+j);
									}
						}
	printf("\n los elementos de la matriz 1 + matriz 2 son: ");
					for(int i=0;i<3;i++){
							printf("\n");
								for(int j=0;j<3;j++){
										printf("\t%d",m3[i][j]);
								}
					}
	return EXIT_SUCCESS;
}

void hacer(int a[3][3], int a2[3][3]){
	for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					a[i][j]=(rand()%5)+1;
				}
			}
	printf("\n los elementos de la matriz 1 son: ");
			for(int i=0;i<3;i++){
					printf("\n");
						for(int j=0;j<3;j++){
								printf("\t%d",a[i][j]);
						}
			}

	for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					a2[i][j]=(rand()%5)+1;
				}
			}
	printf("\n los elementos de la matriz 2 son: ");

	for(int i=0;i<3;i++){
						printf("\n");
							for(int j=0;j<3;j++){
									printf("\t%d",a2[i][j]);
							}
				}
}

