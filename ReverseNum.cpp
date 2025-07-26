/*Name : DHakshayini Usha R
PRN : 24070123039
ENTC A2
*/
#include<iostream>
using namespace std;

int main(){
    int num, rev = 0;
    cout<<"Enter a number: ";
    cin>>num;
    while(num != 0){
        int digit = num % 10;
        rev = rev*10 + digit;
        num = num/10;
    }
    cout<<"Reversed num : "<<rev;
    return 0;
}

/*Sample Output: 
Enter a number: 550
Reversed num : 55

Enter a number: -571827
Reversed num : -728175*/
