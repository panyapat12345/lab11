#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main(){

    ifstream fin("score.txt");
    string t;
    double sum = 0, SD, x;
    int n = 0;

    while(getline(fin, t)){
        sum += stod(t);
        n++;
        x +=  pow(stod(t), 2);
    }

    SD = sqrt((x/n) - pow(sum/n, 2));
    
    cout << "Number of data = " << n << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum/n << endl;
    cout << "Standard deviation = " << SD;
}