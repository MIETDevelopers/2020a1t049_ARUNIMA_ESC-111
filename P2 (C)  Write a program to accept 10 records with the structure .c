#include<stdio.h>
#include<string.h>
struct employees{  
    char name[25]; 
    int age; 
    float salary; 
    int employee;
}temp,e[10];

    int main(){
        int i, j=0;  
        for ( i = 0; i < 10; ++i){
            e[i].employee = i+1; 
            printf("\nInformation of  %d employee:\n" , e[i].employee);     
            printf("Enter the name of the employee: ");
            scanf("%s", &e[i].name);
            printf("Enter the age of the employee: ");
            scanf("%d", &e[i].age);
            printf("Enter the salary of the employee: ");
            scanf("%f", &e[i].salary);
        }
        printf("\n--------------Before Sorting------------\n");    
        for ( i = 0; i < 10; ++i){
            printf("\n\nInformation of  %d employee:\n" ,i+1);     
            printf("Name of the employee: ");
            puts(e[i].name);
            printf("Age of the employee: %d",e[i].age);          
            printf("\nSalary of the employee: %.f ",e[i].salary);
        }
        printf("\n\n--------------After Sorting------------\n");
        for ( i = 0; i < 10; i++){
            for ( j = i+1; j < 5; j++){
                if (strcmp(e[i].name,e[j].name)>0){
                    temp = e[i];
                    e[i] = e[j];
                    e[j] = temp;
                }
            }    
        }
        for ( i = 0; i < 10; ++i){
            printf("\n\nInformation of  %d employee:\n" ,i+1);     
            printf("Name of the employee: ");
            puts(e[i].name);
            printf("Age of the employee: %d",e[i].age);          
            printf("\nSalary of the employee: %.f ",e[i].salary);
        }  
        return 0; 
    }