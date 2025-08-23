#include <stdio.h>
int BinomialCoefficient(int n , int r) {
	if (r == 0 || r == n)
	    return 1;
	return BinomialCoefficient(n-1,r-1) + BinomialCoefficient(n-1,r);
}

int main(){
	int n , r;
		printf("Enter value of n and r: ");
		scanf("%d %d",&n,&r);
		
		if(r>n || n<0 || r<0){
			printf("Invalid input!");
			scanf("%d %d",&n,&r);
		} else {
			int result = BinomialCoefficient(n,r);
			printf("C(%d,%d) = %d\n",n,r,result);
		}
		
		return 0;
		
		
		
		}
