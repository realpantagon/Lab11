#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
#include <fstream>
using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");

    int i=0;
    string text;
    double sum=0,xbar=0,num;

    while(getline(source,text)){
        num=atof(text.c_str());
        sum += num;
        xbar += pow(num,2);
        i++;
    }
    double mean = sum/i,deviation;

    deviation = sqrt((xbar/i)-pow(mean,2));

    cout << "Number of data = "<< i << endl;
    cout << setprecision(3);
    cout << "Mean = "<< mean << endl;
    cout << "Standard deviation = "<< deviation;

    source.close();
}