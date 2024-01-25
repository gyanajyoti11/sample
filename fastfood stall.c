 #include <stdio.h>

int main()
{
    char c;
    int n;
    printf("Rakesh Food stall\n");
    printf("GIET GUNUPUR\n");
    printf("*************************\n");
    printf("food items available are as below\n");
    printf("B - Bora  Rs 5@pc \n");
    printf("A - Aluchop  Rs 3@pc \n");
    printf("S - Samosa  Rs 7@pc \n");
    printf("I - Idly  Rs 2@pc \n");
    printf("Enter your choice \n");
    scanf("%c",&c);
    printf("Enter Quantity\n");
    scanf("%d",&n);
    if(c=='B')
    {
        printf ("please pay : %d",5*n);
    }
    else if(c=='A')
    {
        printf ("please pay : %d",3*n);
    }
    else if(c=='S')
    {
        printf ("please pay : %d",7*n);
    }
    else if(c=='I')
    {
        printf ("please pay : %d",2*n);
    }
    else
    {
        printf ("Invalid Input");
    }




    return 0;


}






