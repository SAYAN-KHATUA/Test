#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
int main()
{
    int ch,item,c=0,flag=0;
    struct node*temp,*start,*x;
    temp=(struct node*)malloc(sizeof(struct node));
    start=temp;
    do{
        printf("Enter the data :");
        scanf("%d",&temp->data);
        temp->next=NULL;
        printf("To give the next data press 1:");
        scanf("%d",&ch);
        if(ch!=1)
        {
            break;
        }
        temp->next=(struct node*)malloc(sizeof(struct node));
        temp=temp->next;
    }while(ch==1);
    printf("Entered elements are below:\n");
    x=start;
    while(x!=NULL)
    {
        printf("%d ->",x->data);
        x=x->next;
    }
    printf("\nEnter the element which you want to search in the list:");
    scanf("%d",&item);
    x=start;
    while(x!=NULL)
    {
        if(x->data==item)
        {
            flag=5;
            break;
        }
        c++;
        x=x->next;
    }
    if(flag==5)
    {
        printf("The searching item is found on the address of %d in the %d position.",x->next,c+1);
    }
    else{
        printf("Searching item is not found in the list.");
    }
    return 0;
}