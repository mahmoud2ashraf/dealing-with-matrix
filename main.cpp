#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    ifstream file;
    string word;
    char filename[80];
    cout<<"enter the file name : ";
    cin.getline(filename , 80);
    strcat(filename,".txt");
    file.open(filename);
    if(file.fail()){
        cout<<"error while open this file"<<endl;
        return 0;
        }
            while(!file.eof()){
                    file>>word;
                    string temp = "";
            for(int i=word.size()-4 ; i<word.size() ; i++){
                temp+=word[i];
            }
            if(temp=="dous"){
                cout<<word<<endl;
            }

            }

    return 0;
}
