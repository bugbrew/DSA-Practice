#include<iostream>
using namespace std;

bool Number(int num){
    if(num == 0){
        return true;
    }
    if(num % 10 == 0){
        return false;
    }
    return true;
}

int main(){
    int num = 1800;

    if (Number(num))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    cout << "true" << endl;

    return 0;
}