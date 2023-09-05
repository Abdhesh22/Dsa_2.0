#include<iostream>
using namespace std;

float converFarenheitToCalcius(int farenheit){
    return (farenheit - 32) / 1.8;
}

int main(){

    int farenheit;
    cout<<"Enter farenheit: "<<endl;
    cin>>farenheit;

    float calcius = converFarenheitToCalcius(farenheit);

    cout<<"calcius in "<< farenheit << " farenheit is "<<calcius<<endl;
    return 0;
}