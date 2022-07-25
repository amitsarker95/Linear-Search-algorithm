#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cout<<"Enter the array size : ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
char c;
cout<<"If you want to search any value from this array then enter (Y) : ";
cin>>c;

while(toupper(c)=='Y'){

int value;
cout<<"Enter the value do you want search : ";
cin>>value;
int flag = 0;
for(int i=0;i<n;i++){
    if(value == arr[i]){
        cout<<"Found in index number : "<<i<<endl<<"Position number : "<<i+1<<endl;
        flag = 1;
    }
}
if(flag == 0){
    cout<<"Value is not found ."<<endl;
}

cout<<"Do you want to search again then enter (Y) : ";
cin>>c;

}



return 0;
}
