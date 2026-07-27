#include <stdio.h>
struct spo 
{
char name[200];
char sport[200];
int age;
float weight;
float height;
};
void accept(struct spo S[100],int n)
{
 for(int i=0;i<n;i++)
   {
   printf("Enter Name : \n");
   scanf("%s",S[i].name);
   printf("Enter Sport Name :\n");
   scanf("%s",S[i].sport);
   printf("Enter Age :\n");
   scanf("%d",&S[i].age);
   printf("Enter Weight:\n");
   scanf("%f",&S[i].weight);
   printf("Enter Height :\n");
   scanf("%f",&S[i].height);
   } 
}
void display(struct spo S[100], int n)
{
 for(int j=0;j<n;j++)
   {
   printf("Name :%s\n",S[j].name);
   printf("Sport :%s\n",S[j].sport);
   printf("Age:%d\n",S[j].age);
   printf("Weight :%.2f\n",S[j].weight);
   printf("Height:%.2f\n",S[j].height);
   }

}
void Linear_search(struct spo S[100],int n , int target) 
{ 
   int i =0; 
   while (i<n)
    { 
   if(S[i].age==target) 
   { 
    printf("Found At %d\n",i+1); 
   break;
    } 
    i++; 
    } 
    if(i==n)  
    { 
    printf("Not Found\n"); 
    
    } 

 }
//void seq_search(struct spo S[100],int n , int target) 
//{
//}
void Bin_search(struct spo S[100],int n , int target) 
{ int mid;
int l=1;
int h=n;
while(l<=n)
   {
   mid=(l+h)/2;
   if(S[mid].age==target)
   {
   printf("Found at%d\n",mid);
   break;
   }
   else
   {
   if(S[mid].age>target)
   {
   h=mid-1;
   }
   else
   {
   l=mid+1;
   }
   }
  }
  if(l>h)
  {
  printf("Not in array \n");
  } 
}

int main()
{ 
struct spo S[100];
int n;
printf("Enter size of data :\n");
 scanf("%d", &n);
  accept(S, n);
printf("\n");
display(S,n);
Linear_search(S,n,24);
Bin_search(S,n,24);
return 0;
}
