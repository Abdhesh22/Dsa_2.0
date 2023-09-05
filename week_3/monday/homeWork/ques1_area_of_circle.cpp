#include<iostream>
using namespace std;


float computeAreaOfCircle(int radius){
    return 3.14 * radius * radius;
}


int main(){

    int radius;
    cout<<"Enter the radius of circle: "<<endl;
    cin>>radius;

    float areaOfCircle = computeAreaOfCircle(radius);

    cout<<"Area is: "<<areaOfCircle<<endl;

    return 0;
}