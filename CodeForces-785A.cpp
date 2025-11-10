//https://codeforces.com/problemset/problem/785/A
#include<iostream>
using namespace std;

int main()
{
    int n;//the number of polyhedron
    cin>>n;

    string arr[5]={"Tetrahedron","Cube","Octahedron","Dodecahedron","Icosahedron"};//the polyhedrons
    int faces[5]={4,6,8,12,20};//polyhedrons faces
    int sum=0;//for counting the sum of polyhedrons faces


    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;

        for(int j=0;j<5;j++)
        {
            if(arr[j]==a)
            {
                sum+=faces[j];
            }
        }
    }

    cout<< sum<<endl;

    return 0;
}
