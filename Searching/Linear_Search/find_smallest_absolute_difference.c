//codechef
//C Language

//CODE
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n,k;
	scanf("%d %d",&n,&k);
	int arr[n];;
	for(int i =0;i<n;i++) {
	    scanf("%d",&arr[i]);
	}
	
	int mindiff = abs(k - arr[0]);
	int answer = arr[0];
	
	
	for(int i=1;i<n;i++) {
	    int diff = abs(k-arr[i]);
	    
	    if(diff < mindiff) {
	        mindiff = diff;
	        answer = arr[i];
	    } 
	    else if (diff == mindiff && arr[i] < answer) {
	        answer = arr[i];
	    }
	    
	}
	printf("%d",answer);
	return 0;
	

}

