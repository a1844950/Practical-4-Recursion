#include <iostream>
#include "Reverse.h"
#include "Truckloads.h"
#include "EfficientTruckloads.h"
using namespace std;

int main() {
    Reverse R1;
    Truckloads T1;
    EfficientTruckloads E1;

    int num;
    string str;
    int n1, n2;
    cin >> num >> str;

    num = R1.reverseDigit(num);
    str = R1.reverseString(str);
    if (num == 0)  cout << "ERROR" << " ";
    else
        cout << num << " " << str << " ";

    int pagm_num1 = -1, pagm_num2 = -1;
    cin >> n1;
    if (cin.fail())
        cout << "ERROR" << " ";
    else
        pagm_num1 = n1;
    cin >> n2;
    if (cin.fail())
        cout << "ERROR" << " ";
    else
        pagm_num2 = n2;
    
    if (pagm_num1!=-1&& pagm_num2!=-1)
    {
        int ans = E1.numTrucks(pagm_num1, pagm_num2),ans2 = T1.numTrucks(pagm_num1, pagm_num2);
        cout << ans << " " << ans2 << " " << endl;
    }


    return 0;
}
