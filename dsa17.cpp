#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int m = 19;
    
    unordered_map<int, int> um;


    while(m != 1 && um.find(m) == um.end()){
        um[m] = 1;
        int num = m;
        int sum = 0;

        while(num > 0){
            int digit = num % 10;
            sum += digit %digit;
            num /= 10;
        }
        m = sum;
    }

    if(m == 1){
        cout << "great" << endl;
    }
    else{
        cout<< "not great" << endl;
    }


    return 0;
}