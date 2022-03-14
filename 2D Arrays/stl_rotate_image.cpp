#include<iostream>
#include<algorithm>

using namespace std;

void rotate_stl(int a[][1000], int n){

    //Rotating using  STL reverse(start_container,end_container) methods
    for(int i=0;i<n;i++){
        reverse(a[i],a[i+n]);
    }
    //to take transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                swap(a[i][j],a[j][i]);
            }
        }
    }
}
void display(int a[][1000], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
}

int main() {
	int n;
    cin>>n;
	int a[1000][1000];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
    
    rotate_stl(a, n);
    display(a, n);

	return 0;
}