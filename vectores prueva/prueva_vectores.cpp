#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    char buffer[80];
    double suma;
    vector<double> v;

    v.push_back(999.25);
    v.push_back(888.50);
    v.push_back(777.25);
    v.push_back(666.50);

    suma = 0;
    for(int i = 0; i < v.size(); i++)
    {
        suma += v[i];
        sprintf(buffer, "%10.2f", v[i]);
        cout << buffer << endl;
    }
	
    cout << "----------" << endl;
    sprintf(buffer, "%10.2f", suma);		
    cout << buffer << endl;	

    cin.get();
    return EXIT_SUCCESS;
}
