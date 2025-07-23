// Name : Dhakshayini Usha R
//PRN:24070123039 ENTC A2
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char password[15] = "Dhakshayini44";
    char enter_pass[15];
    int trial = 0;
    while(trial < 5){
            //Input Password
            cout<<"Enter your Password"<<"\t";
            cin>>enter_pass;
            if(strcmp(password,enter_pass) == 0){
                cout<<"Hooray Unlocked!"<<endl;
                exit(0);
            }
            else{
                trial++;
            if(trial == 5){
        cout<<"Come Back Later, You have a forgetfull brain!!"<<endl;
        exit(0);
    }
            cout<<"Oh-Oh Wrong password, Try again"<<endl;
            continue;
            }
        } 
    
    return 0;
}


/*Sample Output: 
Enter your Password	Dhakshayini
Oh-Oh Wrong password, Try again
Enter your Password	v
Oh-Oh Wrong password, Try again
Enter your Password	Dhakshayini
Oh-Oh Wrong password, Try again
Enter your Password	Dhakshayini
Oh-Oh Wrong password, Try again
Enter your Password	Dhakshayini
Come Back Later, You have a forgetfull brain!!
  */
