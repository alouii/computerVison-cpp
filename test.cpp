int main(){
    vector<A*> v1;
    v1.push_back(new A(1));
    cout<<"First ready!\n";
    v1.push_back(new A(2));
    cout<<"Secondary ready!\n";
    v1.push_back(new A(3));
    cout<<"Tertiary ready!\n";
    return 0;       
}