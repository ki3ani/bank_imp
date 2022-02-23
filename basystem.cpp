#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//This The Function for the Normal User Dashboard
void normal_dashboard()
{

    int pick;
    int withdraw;
    string curr_u,curr_p;

    cout << "Welcome User\n";
    cout << "What do you want to do:\n";
    cout << "1.Withdraw Cash\n";
    cout << "2.Account Balance\n";
    cout << "3.Change my Password\n";
    cout << "\n";
    cin >> pick;
    if(pick == 1)
    {
        cout << "How much do you want to withdraw:\n";
        cin >> withdraw;
    }
    else if(pick == 2)
    {
        cout << "Your balance is:\n";
    }
    else if(pick == 3)
    {
        cout << "Enter Current Username:\n";
        cin >> curr_u;
        cout << "Enter current password\n";
        cin >> curr_p;
        cout << "Password reset successfully";
    }

}


//This is the function for depositing money
void Deposit_money()
{

  int depo;
  ifstream fin;
  ofstream fout;
  fin.open("inp3file.txt");
  fout.open("deposit.txt");
  cout << "How much do you want to deposit?\n";
  cin >> depo;

  fout << depo << "\n" <<endl;
}

//This function registers new clients
void reg_new_client()
{
  ifstream fin;
  ofstream fout;
  fin.open("inpfile.txt");
  fout.open("userDB.txt",ios::app);
  string username_3,password_3;
  cout << "Enter Username:\n";
  cin >> username_3;
  cout << "Enter Password:\n";
  cin >> password_3;

  fout << username_3 << "\n" << endl;
  fout << password_3 << "\n" << endl;




}
//This function resets your password
void reset_pass(string &current_pass, string &new_pass)
{

 string temp = current_pass;
 current_pass = new_pass;
 new_pass = temp;
}

//This is the admin login function
void admin_login_func()
{
    ifstream fin;
    ofstream fout;
    fin.open("inp2file.txt");
    fout.open("adminDB.txt");
    string username_1,password_1;
    cout << "Welcome to the Registration and Deposit Page\n";
    cout << "Enter Administrator Username and Password Login\n";
    cout << "Enter Username:\n";
    cin >> username_1;
    cout << "Enter Password:\n";
    cin >> password_1;

    fout << username_1  << "\n" << endl;
    fout << password_1 << "\n" << endl;

}
//This is the Normal Login Function
void normal_login_func()
{
    ifstream fin;
    ofstream fout;
    fin.open("inpfile.txt");
    fout.open("userDB.txt",ios::app);
    string username_2,password_2;
    cout << "Welcome to the Registration and Deposit Page\n";
    cout << "Enter Normal Username and Password Login\n";
    cout << "Enter Username:\n";
    cin >> username_2;
    cout << "Enter Password:\n";
    cin >> password_2;


    fout << username_2 << "\n" << endl;
    fout << password_2 << "\n" << endl;

}
//This is the admin dashboard function
void admin_dashboard()
{
    int x;
    int depo;
    string current_pass,new_pass;
    cout << "Welcome Admin\n" << endl;
    cout << "What do you wannt to do:\n" <<endl;
    cout << "1. Deposit money for client\n" <<endl;
    cout << "2. Register new Client\n" <<endl;
    cout << "3. Reset your password\n" <<endl;
    cin >> x;

    if(x == 1)
    {
        Deposit_money();

        }
        else if(x == 2)
        {
            cout << "Register New Client:\n";
            reg_new_client();


        }
        else if(x == 3)
        {
            cout << "What is your current password:\n";
            cin >> current_pass;
            cout << "What new password do you want:\n";
            cin >> new_pass;
            reset_pass(current_pass,new_pass);
            cout << "Password has been reset!!!";

        }
        else
        {
            cout << "Please enter an appropriate number";
        }

}




//This is the main Function
int main()
{


    int choice;
    int depo;

    cout << "WELCOME TO E-CASH SERVICES\n" << endl;
    cout << "Select option(1 or 2)\n" << endl;
    cout << "1.Normal User Login\n" <<endl;
    cout << "2. Admin Login\n" << endl;
    cin >> choice;

    if(choice == 2)
    {
     admin_dashboard();
    }
    else if(choice == 1)
    {
     normal_dashboard();
    }


 return 0;
}
