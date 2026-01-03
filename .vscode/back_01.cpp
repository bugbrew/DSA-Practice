//FINDING SUBSETS 
//Input: abc
//Output: "a,b,c,ab,ac,bc,abc"

#include<iostream>
using namespace std;

void findSubsets(char *input, char *output, int i, int j){
    //base case
    if(input[i]=='\0'){
        output[j] = '\0';
        if(output[0]=='\0'){
            cout<<"Null"<<endl;
        }
        cout<<output<<endl;
        return;
    }
    //rec case
    //Include the ith letter
    output[j] = input[i];
    findSubsets(input, output, i+1, j+1);

    //Exclude the ith letter
    // output[j] = '\0';
    findSubsets(input,output, i+1, j);
}

int main(){
    char input[100];
    char output[100];
    cout<<"Give the input: ";
    cin>>input;
    findSubsets(input, output, 0, 0);
    return 0;
}