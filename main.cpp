#include<iostream>
using namespace std;

int main()
{   int n=0;
    cout<<"Berapa banyak isi dari array yang ingin dibuat?";
    cin>>n;
    int arr[n];
    cout<<"Sebutkan isi arraynya: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                for(int k=j; k<n; k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    cout<<"Hasil setelah bilangan berduplikat/sama dibuang:"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
