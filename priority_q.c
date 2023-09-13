#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
int prior;
};
struct node*f=0;
struct node *r=0;
struct node *cn(int val,int p)//cn create node
{
struct node *nn;
nn=(struct node*)malloc(sizeof(struct node));
nn->data=val;
nn->prior=p;
nn->next=0;
return nn;
}
void enq(int e,int p){
struct node *nn,*temp=f;
nn=cn(e,p);
if(f==NULL || p<f->prior)
{
nn->next=f;
f=nn;
}
else{
while(temp->next!=NULL && temp->next->prior<=p)
temp=temp->next;
nn->next=temp->next;
temp->next=nn;}}
int deq()
{
if(f==NULL){
printf("mty");
return 0;
}
else{
struct node *temp=f;
int x=f->data;
f=f->next;
free(temp);
return x;
}
}

int main(){
enq(10,0);
enq(20,9);
enq(45,-1);
enq(56,23);
enq(30,4);
enq(40,7);
printf("%d",deq());
printf("%d",deq());
printf("%d",deq());
printf("%d",deq());
printf("%d",deq());//deque ele ents will come as result
}

