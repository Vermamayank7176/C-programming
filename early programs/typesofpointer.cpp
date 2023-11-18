#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Type of pointer :


    //(1) Wild pointer: When a pointer does not have any real address to store ,then it is know as Wild Pointer.
    int *ptr;
    cout<<ptr<<"  "<<*ptr<<endl;
    //Here ptr is an wild pointer.

    //(2) Null Pointer: When there is not avilable any address value for pointrer then pointer is known as Null Pointer.
    int *ptr1=NULL;
    cout<<ptr1<<"  "<<*ptr<<endl;
    
    //(3) Dangling pointer: It is a type of which points a unvalid memory location.

    int *ptr2;
    ptr2=NULL;
    {
        int x=10;
        ptr2=&x;
    }
    cout<<ptr2<<" "<<*ptr2<<endl;
    
   //(4)Void pointer: Void pointers are some special type pointers which can point any datatype variables address.
   //                 We can not directly derefrence this type pointers.

    void *ptr3;
    int x=10;
    float y=3.44;
    ptr3=&x;
    ptr3=&y;
    int *ptr4=(int *)ptr3;
    cout<<*ptr4<<"  "<<*(float *)ptr3<<endl;


}