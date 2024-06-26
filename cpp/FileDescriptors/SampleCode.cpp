
#include <iostream>
#include <fstream>
#include <filesystem>
using namespace std;
void createFile(string path)
{
    ofstream file(path);
    if (file.is_open())
    {
        cout << "file created successfully!!!" << endl;
        file.close();
    }
    else
    {
        cerr << "Error while creating file!!!" << endl;
        file.close();
    }
}
void writeFile(string path)
{
    ofstream file(path, ios::app);
    if (file.is_open())
    {
        cout << "Enter context to add to the file: " << endl;
        string context;
        getline(cin, context);
        file << context;
        file << "\n";
        cout << "File write successful!!!" << endl;
        file.close();
    }
    else
    {
        cerr << "Error occurred while writing!!!" << endl;
        file.close();
    }
}
void readFile(string path)
{
    ifstream file(path);
    if (file.is_open())
    {
        string line;
        cout << "file content:  " << endl;
        while (getline(file, line))
        {
            cout << line << endl;
        }
        file.close();
    }
    else
    {
        cerr << "Failed to read Fail!!!" << endl;
        file.close();
    }
}
int main()
{
    string path = "sample.txt";
    createFile(path);
    writeFile(path);
    readFile(path);
    return 0;

}