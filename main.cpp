#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dos.h>
#include <iomanip>

using namespace std;
class customer  // <-customer class
{
private:
    /* data */
public:
    string customername;
     string carmodel;
     string carnumber;
     char data;
     //variables defines in this class in public memnber
};
class  rent : public customer  // inhereted class from customer class
{
    public:
    int days=0,rentalfee=0; // additional int variables defined
    void data()
    {
        int login();
        login();
        cout<<"\t\t\t\t\t Please Enter Your Name: "<<endl;// taking data from the user
        cin>>customer::customername ; ////////!!!!!!!!!cin>>customer;
        cout<< endl;
        do
        {
            cout<<"\t\t\t\tPlease Select A Car"<<endl; // giving user a choice to select desired car
            cout<<"\t\t\t\tEnter '1' For Lambourghini- Urus S 2019"<<endl;
            cout<<"\t\t\t\tEnter '2' For Dodge challenger SRT Hell Cat 2019"<<endl;
            cout<<"\t\t\t\tEnter '3' For Land Rover- Defender 2019"<<endl;
            cout<<"\t\t\t\tEnter '4' For Koenisegg Regera 2019"<<endl;
            cout<<"\t\t\t\tEnter '5' For Land Rover- Range Rover- Velar 2019"<<endl;
            cout<<endl;
            cout<<"\t\t\t\tChoose A Car From Above Option : ";
            cin>>carmodel;
            cout<<"----------------------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
            if (carmodel=="1")
            {
                system("CLS");

                cout<<"You Have Choosed Lambourghini- Urus S 2019"<<endl;
                ifstream in1("1.txt");  //display details of madel a
                char str[300];
                while(in1) {
                    in1.getline(str, 200);
                    if (in1)
                    {
                      cout<<str<<endl;
                    }

                }
                sleep(2);
            }
            if (carmodel=="2")
            {
                system("CLS");

                cout<<"You Have Choosed Dodge challenger SRT Hell Cat 2019"<<endl;
                ifstream in2("2.txt");  //display details of madel a
                char str[300];
                while(in2) {
                    in2.getline(str, 200);
                    if (in2)
                    {
                      cout<<str<<endl;
                    }

                }
                sleep(2);
            }
            if (carmodel=="3")
            {
                system("CLS");

                cout<<"You Have Choosed Land Rover- Defender 2019"<<endl;
                ifstream in3("3.txt");  //display details of madel a
                char str[300];
                while(in3) {
                    in3.getline(str, 200);
                    if (in3)
                    {
                      cout<<str<<endl;
                    }

                }
                sleep(2);
            }
            if (carmodel=="4")
            {
                system("CLS");

                cout<<"You Have Choosed Koenisegg Regera 2019"<<endl;
                ifstream in4("4.txt");  //display details of madel a
                char str[300];
                while(in4) {
                    in4.getline(str, 200);
                    if (in4)
                    {
                      cout<<str<<endl;
                    }

                }
                sleep(2);
            }
            if (carmodel=="5")
            {
                system("CLS");

                cout<<"You Have Choosed Land Rover- Range Rover- Velar 2019"<<endl;
                ifstream in5("5.txt");  //display details of madel a
                char str[300];
                while(in5) {
                    in5.getline(str, 200);
                    if (in5)
                    {
                      cout<<str<<endl;
                    }

                }
                sleep(2);
            }
            if (carmodel!="1"  && carmodel!="2" && carmodel!="3" && carmodel !="4" && carmodel!="5")
            {
                cout<<"invalid carmodel.........."<<endl<<"please try again"<<endl;
            }
        }
        while(carmodel !="1" && carmodel !="2" && carmodel !="3" && carmodel !="4" && carmodel != "5");
        cout<<"------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"please provide following information: "<<endl;  //getting data from user related to rental services
        cout<<"please select a car no.  : ";
        cin>>carnumber;
        cout<<"Number Of Days you Wish To Rent The Car : ";
        cin>> days;
        cout<<endl;
    }
    void calculate()
    {
        sleep(2);
        system ("CLS");
        cout<<"Calculating Rent ......Please Wait......."<<endl;
        sleep(2);
        if (carmodel == "1"||carmodel=="1")
        rentalfee=days*10000;
        if (carmodel == "2"||carmodel=="2")
        rentalfee=days*25000;
        if (carmodel == "3"||carmodel=="3")
        rentalfee=days*27000;
        if (carmodel == "4"||carmodel=="4")
        rentalfee=days*30000;
        if (carmodel == "5"||carmodel=="5")
        rentalfee=days*32000;
    }
    void showrent()
    {
        cout<< "\n\t\t                                                         Car Rental - Customer Invoice                                                  "<<endl;
        cout<< "\t\t     /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////"<<endl;
        cout<< "\t\t     |  Invoice No. : "<<"--------------------------------------------------------------------------------|"<<setw(10)<<"#CNBR854206"<<"|"<<endl;
        cout<< "\t\t     |  Customer Name:"<<"--------------------------------------------------------------------------------|"<<setw(10)<<customername<<" |"<<endl;
        cout<< "\t\t     |  Car Model :"<<"---------------------------------------------------------------------------------- |"<<setw(10)<<carmodel<<" |"<<endl;
        cout<< "\t\t     |  Car NO.  :"<<"------------------------------------------------------------------------------------|"<<setw(10)<<carnumber<<" |"<<endl;
        cout<< "\t\t     |  Number Of Days :"<<"------------------------------------------------------------------------------|"<<setw(10)<<days<<" |"<<endl;
        cout<< "\t\t     |  Your Rental Amount IS :"<<"-----------------------------------------------------------------------|"<<setw(10)<<rentalfee<<" |"<<endl;
        cout<< "\t\t     |  Caution Money :"<<"-------------------------------------------------------------------------------|"<<setw(10)<<"0"<<" |"<<endl;
        cout<< "\t\t     |  Advanced :"<<"------------------------------------------------------------------------------------|"<<setw(10)<<"0"<<" |"<<endl;
        cout<< "\t\t     ===================================================================================================================================="<<endl;
        cout<<"\n";
        cout<< "\t\t     | Total Rental Amount IS :"<<"-----------------------------------------------------------------------|"<<setw(10)<<rentalfee<<" |"<<endl;
        cout<< "\t\t     # This IS A Computer Genrated Invoce And It Does Not"<<endl;
        cout<< "\t\t     Require An Authorised Signature #"<<endl;
        cout<< "  "<<endl;
        cout<< "\t\t     ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////"<<endl;
        cout<< "\t\t     You Are Advised TO Pay Up The Amount Before Due Dates......"<<endl;
        cout<< "\t\t     Otherwise Penelty Fee Will Be Applied .........."<<endl;
        cout<< "\t\t     ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////"<<endl;
        int f;
        system("PAUSE");
        system("CLS");
        ifstream inf("thanks.txt"); // thank file add karni hai
        char str[300];
        while(inf) {
            inf.getline(str, 300);
            if(inf) cout<< str <<endl;
        }
        inf.close();
    }
};
class welcome//welcome class
{
    public:
    int welcomee()
    {
        ifstream in("welcome.txt"); //display welcome ascii image txt on output screen
        if(!in) {
            cout <<"cannot open input file.\n";
        }
        char str[1000];
        while(in){
            in.getline(str, 1000); //delim default to\n
            if(in)
            cout <<str <<endl;
    }
    in.close();
    sleep(1);
    cout<<"\nstarting the program please wait..........."<<endl;
    sleep(1);
    cout<<"\nloading up files.........."<<endl;
    sleep(1);
    system ("CLS"); //clear screen

}
};
int main ()
{
    welcome obj1; //objectcreated for welcome class
    rent obj2; //object created for rent class and further member function are called
    obj1.welcomee(); //function called from object welcome
    obj2.data();
    obj2.calculate();
    obj2.showrent();
    return 0; //end of the program
}

int login(){
    string pass ="";
    char ch;
    cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t                              CAR RENTAL SYSTEM \n\n\n";
    cout<<"\t\t\t\t\t\t\t----------------------------------------------------";
    cout<<"\n\n\t\t\t\t\t\t\t         LOGIN : \n";
    cout<<"------------------------------------------------------------------\n\n";
    cout <<"\t\t\t\t\t\t Enter Password: ";
    ch =_getch();
    while(ch != 13){
        pass.push_back(ch);
        cout<< '*';
        ch =_getch();
    }
    if (pass == "pass") {
        cout<< "\n\n\t\t\t\t\t\t\tAccess Granted! \n";
        system("PAUSE");
        system("CLS");
    }else{
        cout<<"\n\n\n\t\t\t\t\t\t\tAccess Aborted.......\n\n\t\t\t\tPlease Try Again\n\n";
        system("PAUSE");
        system("CLS");
        login();
    }
}
