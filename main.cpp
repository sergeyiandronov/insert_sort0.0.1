#include <iostream>
#include <sstream>
using namespace std;

int main() {
   unsigned  int n;

    string line;
    getline(cin,line);
    istringstream numstream(line);
    if(!(numstream>>n)){
        cout<<"An error has occuried while reading input data.";
        exit(0);
    }

    getline(cin,line);
    istringstream arrstream(line);
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        if(!(arrstream>>arr[i])){
            cout<<"An error has occuried while reading input data.";
            exit(0);
        }

    }

    
   
    for(  int j=1;j<n;j++){
        
        for( int i=j-1;i>-1&&arr[i]>arr[i+1];i--){
           	        
                         swap(arr[i],arr[i+1]);
           
                
        }
              
   }

    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

