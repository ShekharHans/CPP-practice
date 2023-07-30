#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Dynamiclly
    // vector<int> *vp = new vector<int>();

    // statically
    vector<int> v;
    // insert elemnt
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);

    v[1] = 100;

    cout << "Size : " << v.size() << endl;
    // cout << v[0] << " " << v[1] << " " << v[2] << endl;
    // cout << v.at(10) << endl;

    cout << "The array is : " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    // Remove the last element
    v.pop_back();
    cout << "After delete the last element : " << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}