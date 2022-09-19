#include<iostream>
using namespace std;

#define ll long long int

void rotation()
{
    ll i,j,k,x,n;
    cin>>n;
    cin>>x;
    int B[n][n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            for(k=0;k<n;k++)
                cin>>B[i][j][k];
    
    while(x--){
        int temp= 0;
        i=j=k=0;
        while(j<n){
            for(i=0;i<n;i++){
                temp+=B[i][j][i];
                B[i][j][i]=temp-B[i][j][i];
                temp-=B[i][j][i];
            }
            j++;
            if(j<n){
                for(i=n-1;i>=0;i--){
                temp+=B[i][j][i];
                B[i][j][i]=temp-B[i][j][i];
                temp-=B[i][j][i];
            }
            }
            j++;
        }
        B[0][0][0]=temp;
        i=j=k=0;
        while(j<n){
            for(i=0;i<n;i++){
                temp+=B[n-i-1][j][i];
                B[n-1-i][j][i]=temp-B[n-1-i][j][i];
                temp-=B[n-1-i][j][i];
            }
            j++;
            if(j<n){
                for(i=n-1;i>=0;i--){
                temp+=B[n-1-i][j][i];
                B[n-1-i][j][i]=temp-B[n-1-i][j][i];
                temp-=B[n-1-i][j][i];
            }
            }
            j++;
        }
        B[n-1][0][0]=temp;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                cout<<B[i][j][k]<<" ";}}}
}
int main()
{
    rotation();
}
