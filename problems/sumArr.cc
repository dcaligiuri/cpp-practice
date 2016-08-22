#include <iostream>
#include <string> 
using namespace std;



int highest(int theArr[]){
    int high = theArr[0];
    for( int a = 0; a < 5 ; a = a + 1 ){
        if (theArr[a] > high)
            high = theArr[a];
    }
    return high; 
}

int lowest(int theArr[]){
    int low = theArr[0];
    for( int a = 0; a < 5 ; a = a + 1 ){
        if (theArr[a] < low)
            low = theArr[a];
    }
    return low; 
}

int main(){
    int myArr[5] = {41, 10, 4 , 40, 69};
    cout << "The highest is " << highest(myArr) << endl;
    cout << "The lowest is " << lowest(myArr) << endl;
    return 0;
}


