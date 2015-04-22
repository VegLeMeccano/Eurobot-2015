#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    string s;
    s = "# START IN";


    cout<<s<<endl;

    if(s.find("START IN") != string::npos)
    {
        cout<<"founded"<<endl;
    }


    return 0;
}
