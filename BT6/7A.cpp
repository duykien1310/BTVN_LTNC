#include<iostream>
using namespace std;

void print(int a[], int n){
    for(int i=1;i<=n;i++) cout << a[i]<<" ";
    cout << endl;
}

void swapp(int a[], int s1, int s2)
{
    int t=a[s1];
    a[s1]=a[s2];
    a[s2]=t;
}

void HoanVi(int a[], int low, int high, int n)
{
    if(low==high){
        print(a, n); return;
    }
    for(int i=low;i<=high;i++){
        swapp(a, low, i);
        HoanVi(a, low+1, high, n);
        swapp(a, low, i);
    }
}
int main(){
    int n; cin >> n;
    int a[n+1];
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
    HoanVi(a, 1, n, n);
    return 0;
}