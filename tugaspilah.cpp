#include <iostream>
#include <fstream> 
#include <string>

using namespace std;

int main(){

    ifstream dataLog;
    ofstream information, warning, error;

    //Membuka file yang diperlukan
    dataLog.open("log.txt");
    information.open("information.txt");
    warning.open("warning.txt");
    error.open("error.txt");

    string line;

    //Looping untuk mengambil data dari log.txt
    while(getline(dataLog, line)) 
    {
        //Selection untuk mencari dan mengambil kalimat yang berisi keyword tersebut
        if(line.find("Information") != string::npos) 
        {
            information<<line<<endl;
        }
        else if(line.find("Warning") != string::npos)
        {
            warning<<line<<endl;
        }
        else if(line.find("Error") != string::npos)
        {
            error<<line<<endl;
        }
    }

    //Menutup semua file yang sudah dibuka
    dataLog.close();
    information.close();
    warning.close();
    error.close();

    //Memberitahu bahwa proses pemilahan sudah selesai
    cout<<"======================================="<<endl;
    cout<<"Proses pemilahan data log sudah selesai"<<endl;
    cout<<"======================================="<<endl;

    return 0;
}