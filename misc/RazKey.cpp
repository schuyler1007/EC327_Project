//
//  RazKey.cpp
//  
//
//  Created by Nick Hardy on 12/2/21.
//
//  Updated by Kaede Kawata on 12/6/21.

#include "RazKey.hpp"
using namespace std;

bool RazKey::checkLogin(string userLogin)
{
    if (userLogin == password)
    {
        cout<<"\t****welcome back****"<<endl;
        return true;
    }
    else
    {
        cout<<"\n\tWrong password"<<endl;
        return false;
    }
}

bool RazKey::checkChoice(char choiceInput)
{
    if (choiceInput == 'p')
    {
        cout<<"Read or Write? ";
        cin>>ReadOrWrite;
        if (ReadOrWrite == 'r'){
            ReadPasswords();
            return true;
        }
        else if(ReadOrWrite == 'w'){
            WritePassword();
            return true;
        }
        else{
            cout<<"enter a valid input"<<endl;
            return false;
        }
    }
    else if(choiceInput == 'b')
    {
        cout<<"Read or Write? ";
        cin>>ReadOrWrite;
        if (ReadOrWrite == 'r'){
            ReadBirthdays();
            return true;
        }
        else if(ReadOrWrite == 'w'){
            WriteBirthday();
            return true;
        }
        else{
            cout<<"enter a valid input"<<endl;
            return false;
        }
    }
    else if(choiceInput == 'r')
    {
        cout<<"Read or Write? ";
        cin>>ReadOrWrite;
        if (ReadOrWrite == 'r'){
            ReadRecepies();
            return true;
        }
        else if(ReadOrWrite == 'w'){
            WriteRecepie();
            return true;
        }
        else{
            cout<<"enter a valid input"<<endl;
            return false;
        }
    }
    else
    {
        cout<<"enter a valid input"<<endl;
        return false;
    }
}

/*
void ReadPasswords()
{
    cout<<"READ PASS"<<endl;
    string line;
      ifstream myfile ("passwords.txt");
      if (myfile.is_open())
      {
        while ( getline (myfile,line) )
        {
          cout << line << '\n';
        }
        myfile.close();
      }
      else cout << "Unable to open file";
}
void WritePassword()
{
    cout<<"\tWRITE PASS"<<endl;
    cin>>NewPassword;
    ofstream fout;
    ifstream fin;
    fin.open("passwords.txt");
    fout.open("passwords.txt", ios::app);
    if (fin.is_open())
    {
        fout<<"\n"<<NewPassword;
    }
    cout<<"Data has been added to the file"<<endl;
    fin.close();
    fout.close();

//    ofstream myfile ("passwords.txt");
//    if (myfile.is_open())
//    {
//        cout<<"\n\tNew Password: ";
//        cin>>NewPassword;
//        myfile << NewPassword;
//
//        myfile.close();
//    }

}
void ReadBirthdays()
{
    cout<<"READ BIRTDAYS\n\t"<<endl;
    string line;
      ifstream myfile ("birthdays.txt");
      if (myfile.is_open())
      {
        while ( getline (myfile,line) )
        {
          cout << line << '\n';
        }
        myfile.close();
      }
      else cout << "Unable to open file";
}
void WriteBirthday()
{
    cout<<"\tWRITE Birthday\n\t"<<endl;
    cin>>NewBirthday;
    ofstream fout;
    ifstream fin;
    fin.open("birthdays.txt");
    fout.open("birthdays.txt", ios::app);
    if (fin.is_open())
    {
        fout<<"\n"<<NewBirthday;
    }
    cout<<"Data has been added to the file"<<endl;
    fin.close();
    fout.close();
}
void ReadRecepies()
{
    cout<<"READ RECEPIE\n\t"<<endl;
    string line;
      ifstream myfile ("recepies.txt");
      if (myfile.is_open())
      {
        while ( getline (myfile,line) )
        {
          cout << line << '\n';
        }
        myfile.close();
      }
      else cout << "Unable to open file";
}
void WriteRecepie()
{
    cout<<"\tWRITE Recepie\n\t"<<endl;
    cin>>NewRecepie;
    ofstream fout;
    ifstream fin;
    fin.open("recepies.txt");
    fout.open("recepies.txt", ios::app);
    if (fin.is_open())
    {
        fout<<"\n"<<NewRecepie;
    }
    cout<<"Data has been added to the file"<<endl;
    fin.close();
    fout.close();
}
int main()
{
    cout<<"\n\tEnter User Password: ";
    cin>>userLogin;

    while (!checkLogin(userLogin))
    {
        cout<<"\n\tEnter User Password: ";
        cin>>userLogin;
    }
    cout<<"\n\n\tSelect a folder\n\t  PASSWORDS\n\t  BIRTHDAYS\n\t  RECIPIES\n";
    cin>>choiceInput;
//    cout<<choiceInput<<endl;
    checkChoice(choiceInput);
    return 0;
}
*/

string RazKey::Read(string line){
}

void RazKey::Write(istream& infile, string in){
}