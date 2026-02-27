
#include<iostream>
using namespace std;
template<typename T>
class cqueue{
private:
T *ptr;
int capacity;
int front;
int rear;
int sz=0;
public:
//default constructor
cqueue(){
this->capacity=4;
this->ptr=new T[this->capacity];
this->front=-1;
this->rear=-1;
this->sz=0;
}
//copy constructor
cqueue(const cqueue &other){
this->capacity=other.capacity;
this->sz=other.sz;
this->front=0;
this->rear=sz-1;
this->ptr=new T[this->capacity];
int j=0;
for(int i=other.front;i!=rear;i=(i+1)%other.capacity){
this->ptr[j]=other.ptr[i];
j++;
}
this->ptr[j]=other.ptr[other.rear];
}

//move constructor
cqueue(cqueue &&other){
this->ptr=other.ptr;
this->capacity=other.capacity;
this->sz=other.sz;
this->front=other.front;
this->rear=other.rear;
other.ptr=NULL;
other.capacity=0;
other.sz=0;
other.front=-1;
other.rear=-1;
}

//copy assignment operator
cqueue & operator=(const cqueue &other){
if(this->ptr!=NULL){
delete [] this->ptr;
this->capacity=0;
this->sz=0;
}
this->front=0;
this->rear=sz-1;
this->capacity=other.capacity;
this->sz=other.sz;
this->ptr=new T[this->capacity];
int j=0;
for(int i=other.front;i!=rear;i=(i+1)%other.capacity){
this->ptr[j]=other.ptr[i];
j++;
}
this->ptr[j]=other.ptr[other.rear];
return *this;
}

//move assignment operator
cqueue & operator=(cqueue &&other){
if(this->ptr!=NULL){
delete [] this->ptr;
this->capacity=0;
this->sz=0;}
this->front=other.front;
this->rear=other.rear;
this->ptr=other.ptr;
this->capacity=other.capacity;
this->sz=other.sz;
other.ptr=NULL;
other.capacity=0;
other.sz=0;
other.front=-1;
other.rear=-1;
return *this;
}

//destructor
~cqueue(){
delete [] this->ptr;
}

//enqueue
void enqueue(T x){
if(this->rear==-1 && this->front==-1){
this->rear=0;
this->front=0;
this->ptr[0]=x;
cout<<this->ptr[0]<<" is added "<<endl;
this->sz++;
}
else if(this->front==(this->rear+1)%capacity){
int cp=2*this->capacity;
T *tmp=new T[cp];
int j=0;
for(int i=this->front;i!=this->rear;i=(i+1)%capacity){
tmp[j++]=this->ptr[i];
}
tmp[j++] = ptr[rear];
delete [] this->ptr;
this->ptr=tmp;
this->capacity=cp;
this->front=0;
this->rear=j-1;
this->rear=(this->rear+1)%capacity;
this->ptr[this->rear]=x;
cout<<this->ptr[this->rear]<<" is added "<<endl;
this->sz++;
}
else{
this->rear=(this->rear+1)%this->capacity;
this->ptr[this->rear]=x;
cout<<this->ptr[this->rear]<<" is added "<<endl;
this->sz++;
}
}

//dqueue
void dqueue(){
if(this->front==-1 && this->rear==-1){
cout<<"underflow"<<endl;
}
else if(this->front==this->rear){
cout<<this->ptr[this->front]<<" is deleted"<<endl;
this->front=-1;
this->rear=-1;
this->sz--;
}
else{
cout<<this->ptr[this->front]<<" is deleted"<<endl;
this->front=(this->front+1)%this->capacity;
this->sz--;
}
}

//size
int size(){
return this->sz;
}

//isFull
int isFull(){
return this->sz==this->capacity;
}

//isEmpty
int isEmpty(){
return this->sz==0;
}

//peek
T peek(){
if(isEmpty()){
    throw runtime_error("queue empty\n");
}
return this->ptr[this->front];
}

//display
void display(){
if(isEmpty()){
    cout<<"queue empty\n";
    return;
}
cout<<"The queue is as follows : "<<endl;
for(int i=this->front;i!=this->rear;i=(i+1)%capacity){
cout<<this->ptr[i]<<" ";}
cout<<this->ptr[this->rear]<<endl;
}
};
