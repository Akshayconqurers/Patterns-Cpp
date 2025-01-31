#include <iostream>
using namespace std;

int main(){
    
    int n;
    
    cout << "Enter the value of n : ";
    cin >> n;
    
    // outer loop
    for(int i=1; i<n; i++){
        
        // loop for printing spaces
        for(int j=1; j<=n-i; j++){
        cout <<" ";
        }
        
        //loop for printing stars
        for(int k=1; k<= 2*i-1; k++){
            cout<<"*";
        }
        
        // next line
        cout<<endl;
    }
    return 0;
}

Output-

    *    
   ***   
  *****  
 ******* 
*********
