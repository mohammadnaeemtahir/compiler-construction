#include<iostream>
using namespace std;

int main(){
    int guess;
    bool flag = false;
	int numbers[10] = {1,2,3,4,5,6,7,8,9,10};
	int length = sizeof(numbers)/sizeof(numbers[0]);
    cout<<"Enter a number to search in the array: ";
    cin>>guess;
    for(int i=0; i<length;i++){
        if(numbers[i] == guess){
            flag = true;
            break;
        }
    }
    
    if(flag == true){
        cout<<guess<<" found in the array";
    }else{
        cout<<guess<<" no found";
    }
	return 0;
}





