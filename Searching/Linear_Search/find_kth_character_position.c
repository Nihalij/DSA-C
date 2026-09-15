//codechef
//C Language

// CODE
#include <stdio.h>

int main() {
    char s1[100001];
    char c1;
    int k;
    int count = 0;
    
    scanf("%s %c %d", s1,&c1,&k);
    
    for(int i=0;s1[i]!='\0';i++) {
        if (s1[i] == c1) {
            count++;
            
            if(count == k) {
                printf("%d",i);
                return 0;
            }
            
        }
    }
    printf("-1");
    return 0;
    
