#include<iostream>
using namespace std;

float covertKmToMiles(int km){
    return km/1.60934;
}

int main(){
    int km;
    cout<<"Enter Kms. ";
    cin>>km;
    float miles = covertKmToMiles(km);
    cout<<"Miles in "<< km <<" km is"<<miles<<endl;
    return 0;
}