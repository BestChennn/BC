#include<iostream>
using namespace std;

int main(){
    int N=1,A=0,D=0;
    if(N!=0){
    while(N!=0){
        cout << "Enter an integer: ";
        cin >> N; 
        if(N%2==0){
            A++;
                    }
                    else{
                        D++;
                    }
        
    }
    }
    cout << "#Even numbers = " <<A-1 << "\n";
    cout << "#Odd numbers = " << D;

    
    return 0;
}
