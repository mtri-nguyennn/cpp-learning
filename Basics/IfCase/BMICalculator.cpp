#include <iostream>
#include <string>
using namespace std;


int main(){
    double mass, height, BMI;
    string BMI_category;

    cout << "Enter your mass:";
    cin >> mass;
    cout << "Enter your height:";
    cin >> height;
    BMI = mass/(height * height);

    if (BMI <= 18.5) {
        BMI_category = "Underweight";
    } else if (BMI <= 24.9) {
        BMI_category = "Normal weight";
    } else if (BMI <= 29.9) {
        BMI_category = "Overweight";
    } else {
        BMI_category = "Obese";
    }

    cout << "Your BMI is " << BMI << ", and you are " << BMI_category << endl;
    return 0;
}