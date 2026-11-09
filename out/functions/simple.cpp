#include<iostream>
using namespace std;
float simple(float p,float r,float t){
    return p*r*t/100;
}
int main(){
// float answer= simple(3,4,5);
// cout<< answer<< endl;
float p,r,t;
cout<< "Enter the Principal: ";
cin>>p; 
cout<< "Enter the Rate: ";
cin>>r;
cout<< "Enter the Time: ";
cin>>t;
cout<< "Simple interest= "<< simple(p,r,t);
cin>>p;
    return 0;
}