#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;
int main(){
    int count =0;
    float sum=0;
    float sumquare=0;
    
    string tl;
    ifstream source("score.txt");
    while (getline(source,tl)){
        sum+= atof(tl.c_str());
        count++;
        sumquare+= pow(atof(tl.c_str()),2);
    }
    float mean=sum/count;
    cout << "Number of data = "<< count<<"\n";
    cout << setprecision(3);
    cout << "Mean = "<< mean <<"\n";
    cout << "Standard deviation = "<< pow((sumquare/count)-pow(mean,2),0.5);
}