//inefficient approach
#include <iostream>
using namespace std;

void next_greater(int arr[],int n){
    int res[n];
    for(int i=0;i<n;i++){
        res[i]=-1;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                res[i]=arr[j];
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    next_greater(arr,n);
	}
	return 0;
}
// didnt pass all the test cases, not good coz samsung will not take u.
