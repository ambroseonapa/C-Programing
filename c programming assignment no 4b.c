/*Question 4*/

/*4 i*/

#include<stdio.h>

float *addarrays(float array1[],float array2[],int size)
{
    int i;
    printf("please enter the size\n");
    scanf("%d",&size);
    float array3[size];
    printf(" Please enter the  values of array1:\n");
    for(i=0;i<size;i++)
    {

        scanf("%f",&array1[i]);


    }
    printf("Please enter the values of array2:\n");
    for(i=0;i<size;i++)
    {

        scanf("%f",&array2[i]);

    }
    printf("The values of array3 are:\n");
    for(i=0;i<size;i++)
    {
    array3[i]=array1[i]+array2[i];

    printf("\t%.0f",array3[i]);
    }
    printf("\nThe pointers of array3 are;\n");
    {
        for(i=0;i<size;i++)
        {
            printf("\t%X",&array3[i]);
        }
    }

}
int main()
{

    float array1[200];
    float array2[200];

    *addarrays(array1,array2,200);
    return 0;

}
