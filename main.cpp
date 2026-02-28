
#include<iostream>
#include "cqueue.h"
using namespace std;
int main(){
cqueue<int>cq;
cq.enqueue(20);
cq.enqueue(5);
cq.enqueue(4);
cq.enqueue(3);
cq.dqueue();
cq.dqueue();
cq.enqueue(1);
cq.display();
cout<<"The number of elements in circular queue is : "<<cq.size()<<endl;
return 0;
}