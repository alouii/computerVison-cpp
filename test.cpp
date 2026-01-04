#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int>v1(10,0);
    cout << "Sizeof vectorV:"<< v1.size() << endl;
    /*for(unsigned i=0;i<v1.size();++i){
        cout << v1[i] << " ";
    }*/
   for(auto x:v1){
    cout<<x<<" ";
   }
    return 0;
}