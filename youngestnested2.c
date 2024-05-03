#include<stdio.h>
int main(){
    int Ajay,Shyam,Ram;
    printf("Enter Ajays age: ");
    scanf("%d",&Ajay);
    printf("Enter Shyams age: ");
    scanf("%d",&Shyam);
    printf("Enter Rams age: ");
    scanf("%d",&Ram);
    if(Ajay>Shyam){
    	if(Shyam>Ram){
    		printf("Ram is youngest");
		}else{
			printf("Shyam is youngest");
		}
	}
	else {
		if(Ajay>Ram){
			printf("Ram is youngest");
		}
		else{
			printf("Ajay is youngest");
		}
	}
    
}