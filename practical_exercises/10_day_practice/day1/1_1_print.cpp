#include <iostream>
#include <stdlib.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int i, j, k, f;
    for(i=1; i<=4; i++){
        for(j=1; j<=30; j++) {
            cout<<" ";
        } // end of for j
        for(k=1; k<=8-2*i;k++) {
            cout<<"-";
	} // end of for k
	for(f=1; f<=2*i; f++) {
	    cout<<"*";
	} // end of for f
        cout<<endl;
    } // end of for i

   
    return 0;
}
