#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i,j,k,n; // declare variables and matrixes as
   float a[10][10],b,x[10];
   printf("\nEnter the size of matrix: ");
   scanf("%d",&n);
   printf("\nEnter the elements of augmented matrix (rowwise):\ n");
   for(i=1; i<=n; i++) {
      for(j=1; j<=(n+1); j++) {
         cout << "A [" << i << ", " << j << " ] =";
         cin >> a[i][j];
      }
   }
   //to find the elements of diagonal matrix
   for(j=1; j<=n; j++) {
      for(i=1; i<=n; i++) {
         if(i!=j) {
            b=a[i][j]/a[j][j];
            for(k=1; k<=n+1; k++) { 
               a[i][k]=a[i][k]-b*a[j][k];
            }
         }
      }
   }
   cout<<"\nThe solution is:\n";
   for(i=1; i<=n; i++) {
      x[i]=a[i][n+1]/a[i][i];
      cout<<"x"<<i << "="<<x[i]<<" ";
	return 0;
}
}
