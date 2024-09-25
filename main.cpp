#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    /*for ( int i=0;  i<=10; i++){
        cout<<i<<" ";
    }
    */
    //problem2


    /*  int sum = 0;

    for (int i = 1; i <= 10; i++) {
            std::cout << i;
            sum += i;
        }

        cout << " " << sum << endl;

        return 0;

*/
    //problem3
    /* for ( int i=1; i<=100; ++i){
        if (i%5==0) {
            continue;
        }
        cout<< i;
        cout<<endl;
    }*/

    //problem4
    /*int n;
    cout<<" Enter a number: ";
    cin>>n;
    for ( int i=10; i <= n; i += 10){
            cout<< i<<" ";
            }
            cout<<endl;*/
    // problem5

    /*for ( char c='A'; c<='Z'; ++c){
        cout<<c<<" ";
        if (( c-'A'+1)%5==0){
            cout<<endl;
        }
    }*/
    //problem6

    /*int numClasses;

    cout << "Enter the number of classes: ";
    cin >> numClasses;

    double totalCredits = 0.0;
    double totalQualityPoints = 0.0;

    for (int i = 0; i < numClasses; ++i) {
        int credits;
        double totalMarks;

        cout << "Enter credits and total marks for class " << (i + 1)<< ": ";
        cin >> credits >> totalMarks;

        totalQualityPoints += credits * totalMarks;
        totalCredits += credits;
    }

    double gpa = (totalCredits > 0) ? (totalQualityPoints / totalCredits) : 0.0;

    cout << std::fixed << std::setprecision(4);
    cout << "Your total GPA is " << gpa <<endl;*/

    // problem7
    bool isPrime(int number) {
        if (number < 2) return false;
        for (int = 2; i * i <= number; ++i) {
            if (number * i == 0) {
                return false;
            }
        }
        return true;
    }
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number) {
        cout << "Number is prime\n";
    } else {
        cout << " Number is not prime\n";
    }

    return 0;
}
