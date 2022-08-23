#include <iostream>
using namespace std;

int main()
{
    int height ;
    int weight ;
    int BMI;

    cout << "Enter your height in Meters: ";
    cin >> height;
    cout << "Enter your weight in KG: ";
    cin >> weight;


    BMI = (weight) / (height * height);

    if (BMI < 20) {
        cout << "Underweight";
    }
    else if (BMI > 20 && BMI < 24.99) {
        cout << "Healthy weight";
    }
    else if (BMI > 25 && BMI < 29.99) {
        cout << "Overweight";
    }
    else (BMI < 30); {
        cout << "Obesity"; }

    return 0;
}