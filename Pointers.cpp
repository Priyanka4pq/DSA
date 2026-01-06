#include <iostream>
using namespace std;

// int main(){
//     // int a=10;
//     // int* ptr = &a;
    
//     // cout<<&a<<endl;   //&a through this can get the address of a
//     // cout<<ptr<<endl;  //ptr gives address of a
//     // cout<<&ptr<<endl;   //&ptr gives address of ptr/

//     // float price = 100.25f;
//     // float* ptr = &price;

//     // cout<< ptr <<endl;
//     // cout<< &price <<endl;


//     //pointer to pointer

//     // int a= 10;
//     // int* ptr = &a;
//     // int** ptr1= &ptr;

//     // cout<<*(&a)<<endl;   //means a wali address pr jo value hai vo do..
//     // cout<< *(ptr)<<endl;  //*--- derefrencing operator hme address ki value lake deta hai. isme ptr main address of a store hai, and * use address ki value store krega
//     // cout<< &ptr<<endl;
//     // cout<< &ptr1<<endl;

//     //NULL POINTER

//     // int** ptr = NULL;
//     // cout<< ptr <<endl;


//     // Question:

//     // int a = 5;
//     // int* p= &a;
//     // int** q = &p;

//     // cout<< *p<<endl;  //*p -> *(&a) -> a pe kya value store hai -> 5
//     // cout<<**q<<endl;  
//     // cout<<p<<endl;
//     // cout<<*q<<endl;
    
//     return 0;
// }

//PASS BY VALUE

// void changeA(int a){   //pass by value
//     a= 20;
// } 
// int main(){
//     int a = 5;
//     changeA(a);
//     cout<< "inside main fn."<< a <<endl;
//     return 0; 
// }


//Pass by refrence

// void changeA(int* a){   //pass by refrence using pointer
//     *a= 20;
// } 
// int main(){
//     int a = 5;
//     changeA(&a);
//     cout<< "inside main fn."<< a <<endl;
//     return 0; 
// }


// void changeA(int &b){   //pass by refrence using alias
//     b= 20;
// } 
// int main(){
//     int a = 5;
//     changeA(a);
//     cout<< "inside main fn."<< a <<endl;
//     return 0; 
// }


//  ARRAY POINTER
// int main(){
//     int arr[]= {1,2,3,4,5};
    
//     // cout<< arr <<endl;
//     // cout<< &arr <<endl;
//     // cout<< *arr <<endl;  //1
    
//     //1. int a =15,b=10;
//     //2. int* ptr = &a;
//     //3. ptr = &b;       //but we cannot do these 3 using array

//     return 0;
// }



// POINTER ARITHMETIC

int main(){
    // int a = 10;
    // int* ptr = &a;

    // cout<<ptr<<endl;   //address of a aayega
    // // cout<<*ptr<<endl;   //address of a pe jo value hai vo aayegi
    // // ptr++;
    // // cout<<ptr<<endl;
    // // ptr--;
    // // cout<<ptr<<endl;

    // ptr = ptr+2; //2int-->8byte   8,8a,8b,8c,8d,8e,8f,10
    // cout<< ptr <<endl;


    // int arr[] ={1,2,3,4,5};
    // cout<< *arr <<endl;      //1
    // cout<< *(arr+1) <<endl;  //2
    // cout<< *(arr+2) <<endl;  //3
    // cout<< *(arr+3) <<endl;  //4

    // int arr[] ={1,2,3,4,5};
    // int* ptr2;   //100
    // int* ptr1= ptr2+2;  //100+ 2int means 8 bytes , therefor--> 108
    // cout<< ptr1-ptr2;   //2

    // int arr[] ={1,2,3,4,5};
    // int* ptr1;
    // int* ptr2;

    // cout<<ptr1<<endl;
    // cout<<ptr2<<endl;

    // cout<< (ptr1<ptr2)<<endl;


    // QUESTION: PREDICT OUTPUT

    int arr[]={10,20,30,40,50};
    int* ptr = arr;
    cout<<*ptr<<endl;  //gives value
    cout<<ptr<<endl;  //gives address
    cout<<*(ptr+1)<<endl;
    cout<<*(ptr+3)<<endl;
    ptr++;
    cout<<*ptr<<endl;

    return 0;

}