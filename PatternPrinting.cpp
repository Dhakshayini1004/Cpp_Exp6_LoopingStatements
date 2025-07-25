/*Name : Dhakshayini Usha R
PRN : 24070123039
ENTC A2
*/
#include <iostream>
using namespace std;

int main(){
    int row;
    cout<<"Enter the number of rows :"<<endl;
    cin>>row;
    
// Right-angled Triangle
for(int i = 1; i <= row;i++){
    for(int j = 1; j <= i; j++){
        cout<<"*";
    }
    cout<<endl;
}
cout<<endl;
// Inverted Right-angled Triangle
for(int i = row; i >= 1;i--){
    for(int j = i; j >= 1 ; j--){
        cout<<"*";
    }
    cout<<endl;
}
cout<<endl;
// Mirrored Right-angled Triangle
 for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= row - i; j++){ 
            cout << " ";}
        for (int j = 1; j <= i; j++){ 
            cout << "*";}
        cout << endl;
 }   
 cout<<endl;
 //Simple Eqilateral Triangle
 for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= row - i; j++){ 
            cout << " ";}
        for (int j = 1; j <= i; j++){ 
            cout << "* ";}
        cout << endl;
 }   
 cout<<endl;
 
 // Complex Equilateral Triangle
 for(int i = 0; i< row; i++){
     for(int j = 0; j< row - i; j++){
         cout<<" ";
     }
     for(int j = 0; j< 2*i + 1;j++){
         cout<<"*";
     }
     cout<<endl;
 }
 cout<<endl;
// Number Triangle
int d = 1;
for(int i = 1; i <= row;i++){
    for(int j = 1; j <= i ; j++){
        cout<<d<<"\t";\
        d++;
    }
    cout<<endl;
}
    return 0;
}

/*
Sample Output:
Enter the number of rows :
5
*
**
***
****
*****

*****
****
***
**
*

    *
   **
  ***
 ****
*****

    * 
   * * 
  * * * 
 * * * * 
* * * * * 

     *
    ***
   *****
  *******
 *********

1	
2	3	
4	5	6	
7	8	9	10	
11	12	13	14	15	*/
