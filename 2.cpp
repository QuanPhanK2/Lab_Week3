#include <iostream> 
using namespace std;

int sumArr(int arr[], int n){
    int sum = 0;
    int *ptr;
    ptr = arr;
    for(int i = 0; i < n; i++){
        sum = sum + *(ptr+i);
    }
    return sum;

}
int main(){
    int n;
    
    cout << "Nhap so luong phan tu (<10): "; 
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Nhap gia tri phan tu thu " << i+1 << ": ";
        cin >> arr[i];
    }
    cout << "Tong cac phan tu cua day vua nhap vao la: " <<sumArr(arr, n);
    return 0;
}