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
    
// 1. Right-angled Triangle
for(int i = 1; i <= row;i++){
    for(int j = 1; j <= i; j++){
        cout<<"*";
    }
    cout<<endl;
}
cout<<endl;

// 2. Inverted Right-angled Triangle
for(int i = row; i >= 1;i--){
    for(int j = i; j >= 1 ; j--){
        cout<<"*";
    }
    cout<<endl;
}
cout<<endl;

// 3. Mirrored Right-angled Triangle
 for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= row - i; j++){ 
            cout << " ";}
        for (int j = 1; j <= i; j++){ 
            cout << "*";}
        cout << endl;
 }   
 cout<<endl;

 // 4. Simple Eqilateral Triangle
 for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= row - i; j++){ 
            cout << " ";}
        for (int j = 1; j <= i; j++){ 
            cout << "* ";}
        cout << endl;
 }   
 cout<<endl;
 
  // 5. Simple Inverted Eqilateral Triangle
 for (int i = row; i >= 1; i--) {
        for (int j = 1; j <= row - i; j++){ 
            cout << " ";}
        for (int j = 1; j <= i; j++){ 
            cout << "* ";}
        cout << endl;
 }   
 cout<<endl;
 
 // 6. Complex Equilateral Triangle
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
 
// 7. Number Triangle
int d = 1;
for(int i = 1; i <= row;i++){
    for(int j = 1; j <= i ; j++){
        cout<<d<<"\t";\
        d++;
    }
    cout<<endl;
}
cout<<endl; 

 //8. Diamond Pattern
 for (int i = 1; i < row; i++) {
        for (int j = 1; j < row - i; j++){ 
            cout << " ";}
        for (int j = 1; j <= i; j++){ 
            cout << " *";}
        cout << endl;
 }   
 for (int i = row; i >= 1; i--) {
        for (int j = 1; j <= row - i; j++){ 
            cout << " ";}
        for (int j = 1; j <= i; j++){ 
            cout << "* ";}
        cout << endl;
 }   
 cout<<endl;
 
 //9. Hour-Glass Pattern
 for (int i = row; i > 1; i--) {
        for (int j = 1; j <= row - i; j++){ 
            cout << " ";}
        for (int j = 1; j <= i; j++){ 
            cout << " *";}
        cout << endl;
 }   
 for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= row - i; j++){ 
            cout << " ";}
        for (int j = 1; j <= i; j++){ 
            cout << " *";}
        cout << endl;
 }
 cout<<endl;
 
 // 10. Row- Number Pyramid
for(int i = 1; i <= row;i++){
    for(int j = 1; j <= i ; j++){
        cout<<i<<"\t";
    }
    cout<<endl;
}
cout<<endl; 

// 11. Mirrored Numbered-Triangle 
for (int i = 1; i <= row; i++) {
        for (int j=0; j < row - i; j++){
            cout <<" ";
        }
        for (int j=0; j < i; j++){ 
            cout << i+j;
        }
        cout << endl;
}
cout<<endl;
// 12. Alphabet Pyramid 
for (int i = 1; i<= row; i++){
    for(int j = 1; j<= i; j++ ){
        //ASCII Character of A is 65
       printf("%c",64+i);
    }
    cout<<endl;
}
cout<<endl;

// 13. Continuous Alphabet Pyramid 
int alpha_number = 65;
for (int i = 1; i <= row; i++){
    for(int j = 1; j<= i; j++ ){
        //ASCII Character of A is 65
       printf("%c",alpha_number);
       alpha_number++;
    }
    cout<<endl;
}
cout<<endl;

// 14. Half Diamond Pattern 
for(int i = 1; i <= row;i++){
    for(int j = 1; j <= i; j++){
        cout<<" *";
    }
    cout<<endl;
}
for(int i = row - 1; i >= 1;i--){
    for(int j = i; j >= 1 ; j--){
        cout<<" *";
    }
    cout<<endl;
}
cout<<endl;

// 15. Mirrored Right-angled Triangle
 for (int i = 1; i < row; i++) {
        for (int j = 1; j <= row - i; j++){ 
            cout << " ";}
        for (int j = 1; j <= i; j++){ 
            cout << "*";}
        cout << endl;
 }   
 for (int i = row; i > 0; i--) {
        for (int j = 1 ; j <= row - i; j++){ 
            cout << " ";}
        for (int j = 1; j <= i; j++){ 
            cout << "*";}
        cout << endl;
 }   
 cout<<endl;

    return 0;
}

/*Sample Output: 
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

* * * * * 
 * * * * 
  * * * 
   * * 
    * 

     *
    ***
   *****
  *******
 *********

1	
2	3	
4	5	6	
7	8	9	10	
11	12	13	14	15	

    *
   * *
  * * *
 * * * *
* * * * * 
 * * * * 
  * * * 
   * * 
    * 

 * * * * *
  * * * *
   * * *
    * *
     *
    * *
   * * *
  * * * *
 * * * * *

1	
2	2	
3	3	3	
4	4	4	4	
5	5	5	5	5	

    1
   23
  345
 4567
56789

A
BB
CCC
DDDD
EEEEE

A
BC
DEF
GHIJ
KLMNO

 *
 * *
 * * *
 * * * *
 * * * * *
 * * * *
 * * *
 * *
 *

    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *
*/
