//https://codeforces.com/problemset/problem/1669/A
#include<iostream>
using namespace std;

int main()
{
    int test;
    cin>>test;
    
    int rating;
    
    for(int i=1;i<=test;i++)
    {
        cin>>rating;
        
        if (rating >= 1900) {
        cout << "Division 1" << endl;
        } 
        
        else if (rating >= 1600 && rating <= 1899) {
        cout << "Division 2" << endl;
        } 
        
        else if (rating >= 1400 && rating <= 1599) {
        cout << "Division 3" << endl;
        } 
        
        else { // rating <= 1399
        cout << "Division 4" << endl;
        }
    
    }
    
    return 0;
}
