#include <stdio.h>  
   
biggest2() {  
    int a, b;  
    printf("\nPlease Enter Two different values\n");  
    scanf("%d %d", &a, &b);  
    
    if(a > b) 
    {
        printf("\n%d is Largest\n", a);          
    } 
    else if (b > a)
    { 
        printf("\n%d is Largest\n", b);  
    } 
    else 
    {
	printf("\nBoth are Equal\n");
    }
   
   // return 0;  
}
