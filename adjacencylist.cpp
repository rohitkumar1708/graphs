#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int n;
cout<<"enter the number of nodes\n";
cin>>n;
vector <int > a[n+1];
vector <int >:: iterator it;
int e;
cout<<"enter number of edges\n";
cin>>e;
cout<<"enter the edges between nodes (space separated)\n";
while(e--)
{
int x,y;
cin>>x>>y;
a[x].push_back(y);
}
for(int i = 1;i <= n;i++)
 {   
 cout << "Adjacency list of node " << i << ": ";
 for(int j = 0;j < a[i].size();++j)
 {
 if(j == a[i].size() - 1)
 cout << a[i][j] << endl;
 else
 cout << a[i][j] << " --> ";
 }
 }

return 0;
}
