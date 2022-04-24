#include<stdio.h>
#include<math.h>

int main() {
int arr[3][3];
int i,j,product=1,sum=0,choice;

printf("Enter 1 for Sum of diagonal Elements\nEnter 2 for Product of Diagonal Elements");
scanf("%d",&choice);

switch(choice)
{ case 1:
    {for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
        {scanf("%d",&arr[i][j]);
        }
    }    
printf("\n");  
for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
        {printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
       { if(i==j)
        sum=sum+arr[i][j];
       }
    }
    printf("The Sum of diagonal elements:%d",sum);
    break;
  case 2:
    {for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
        {scanf("%d",&arr[i][j]);
        }
    }    
printf("\n");  
for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
        {printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
        for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
       { if(i==j)
        product=product*arr[i][j];
       }
    }
    printf("The Product of diagonal elements:%d",product);
    break;
    case 3: 
    break;
    default:
    printf("\nInvalid Choice");
    }
return 0;}
}

