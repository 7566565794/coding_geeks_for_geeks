/*
simple but not so efficient so solution complexity is o(n^2)
*/
#include <iostream>
using namespace std;
void calc_span(int arr[],int n){
    int span[n];
    for(int i=0;i<n;i++){
        span[i]=1;
    }
    int j;
    for(int i=1;i<n;i++){
        // span[i]=1;
        j=i-1;
        while( j >= 0 && arr[i] >= arr[j] ){
            span[i]++;
            j--;
        }
    }
	   for(int i=0;i<n;i++){
	       cout<<span[i]<<" ";
	   }
	   cout<<endl;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int s;
	    cin>>s;
	    int arr[s];
	    for(int i=0;i<s;i++){
	        cin>>arr[i];
	    }
	    calc_span(arr,s);
	}
	return 0;
}
