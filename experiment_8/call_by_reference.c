#include<stdio.h>
void main(){
    int A = 5, B = 9;
    printf('Value of A is %d\n',A);
    printf('Value of B is %d\n',B);
    swap( &A , &B );
    printf('Value of A after swapping is %d\n',A);
    printf('Value of B after swapping is %d\n',B);
}
    
void swap( int *Pa , int *Pb){
    int temp = *Pa;
    *Pa = *Pb;
    *Pb = temp;
}
