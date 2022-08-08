/*   SUPER MARKET BILLING SYSTEM IN C++ */
/*
    A mini project developed in C++  language to be used for billing at places like super market,
    malls shops and various market places. The whole software is developed in C++ by using the
    concepts of Object Oriented Programming and the concepts of C++ such as File Handeling.
    The  working of code: The Software is a menu driven system.In which it asks for the user
    to select from the menu which acivity does the user had to perform.Such as Add, delete and show bill details.

    This project is By-->
    19CM003 Bhagyashree  Tekade
    19CM007 Ayush  Bulbule
    19CM020 Pratham Gaur
    19CM0033 Malhar Joshi
    19CM057 Akansha Shewatkar

 */

#include <iostream>
#include <windows.h>
#include <conio.h>
#include <fstream>
#include <string.h>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
using namespace std;
//global variable declaration
int k = 7, r = 0, flag = 0;
COORD coord = {0, 0};

//Function to set Cursor to place
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
//User Defined data Type Date
struct date
{
    int mm, dd, yy;
};

//Objects For File Handling
ofstream fout;
ifstream fin;

//Class Item holding Item no and Name
class item
{
    int itemno;
    char name[25];
    date d;

public:
    void add()
    {
        cout << "\tItem No: ";
        cin >> itemno;
        cout << "\tName of the item: ";
        cin.ignore();
        cin.getline(name, 24);
        //gets(name);
        cout << "\n\tManufacturing Date(dd mm yy): ";
        cin >> d.dd >> d.mm >> d.yy;
    }
    void show()
    {
        cout << "\n\tItem No: ";
        cout << itemno;
        cout << "\n\tName of the item: ";
        cout << name;
        cout << "\n\tDate : ";
        cout << d.dd << "-" << d.mm << "-" << d.yy;
    }
    void report()
    {
        gotoxy(3, k);
        cout << itemno;
        gotoxy(13, k);
        puts(name);
    }
    int retno()
    {
        return (itemno);
    }
};

//amount class Derived from item to hold
class amount : public item
{
    float price, qty, gst, gross, dis, netamt;

public:
    void add();
    void show();
    void report();
    void calculate();
    void pay();
    float getnetamt()
    {
        return (netamt);
    }
    float getdis()
    {
        float discount = (qty * (price * (dis / 100)));
        return (discount);
    }
    float gettax()
    {
        float tax = (qty * (price * (gst / 100)));
    }
} amt;

void amount::add()
{
    item::add();
    cout << "\tPrice:    ";
    cin >> price;
    cout << "\tQuantity: ";
    cin >> qty;
    cout << "\tGST %%: ";
    cin >> gst;
    cout << "\tDiscount %%: ";
    cin >> dis;
    calculate();
    fout.write((char *)&amt, sizeof(amt));
    fout.close();
}
void amount::calculate()
{
    gross = price + (price * (gst / 100));
    netamt = qty * (gross - (gross * (dis / 100)));
}
void amount::show()
{
    fin.open("billitems.dat", ios::binary);
    fin.read((char *)&amt, sizeof(amt));
    item::show();
    cout << "\n\n\tNet amount: ";
    cout << netamt;
    fin.close();
}

void amount::report()
{
    item::report();
    gotoxy(23, k);
    cout << price;
    gotoxy(33, k);
    cout << qty;
    gotoxy(44, k);
    cout << gst;
    gotoxy(52, k);
    cout << (gst / 2);
    gotoxy(62, k);
    cout << (gst / 2);
    gotoxy(72, k);
    cout << dis;
    gotoxy(84, k);
    cout << netamt;
    k = k + 1;
    if (k == 50)
    {
        gotoxy(25, 50);
        cout << "PRESS ANY KEY TO CONTINUE...";
        getch();
        k = 7;
        system("cls");
        gotoxy(30, 3);
        cout << " ITEM DETAILS ";
        gotoxy(3, 5);
        cout << "NUMBER";
        gotoxy(13, 5);
        cout << "NAME";
        gotoxy(23, 5);
        cout << "PRICE";
        gotoxy(33, 5);
        cout << "QUANTITY";
        gotoxy(44, 5);
        cout << "GST";
        gotoxy(52, 5);
        cout << "SGST";
        gotoxy(62, 5);
        cout << "CGST";
        gotoxy(72, 5);
        cout << "DEDUCTION";
        gotoxy(84, 5);
        cout << "NET AMOUNT";
    }
}

void amount::pay()
{
    show();
    cout << "\n\n\n\t\t*********************************************";
    cout << "\n\t\t                 DETAILS                  ";
    cout << "\n\t\t*********************************************";
    cout << "\n\t\tPRICE                     :" << price;
    cout << "\n\t\tQUANTITY                  :" << qty;
    cout << "\n\t\tGST PERCENTAGE            :" << gst;
    cout << "\n\t\tDISCOUNT PERCENTAGE       :" << dis;
    cout << "\n\n\n\t\tNET AMOUNT                :Rs." << netamt;
    cout << "\n\t\tTAX                       :Rs." << gettax();
    cout << "\n\t\tDISCOUNT                  :Rs." << getdis();
    cout << "\n\t\t*********************************************";
}

//Driver Code
int main()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout << setprecision(2);
    fstream tmp("temp.dat", ios::binary | ios::out);
menu:
    system("cls");
    gotoxy(25, 2);
    cout << "***************************************************" << endl;
    gotoxy(25, 4);
    cout << "\tSuper Market Billing System in C++" << endl;
    gotoxy(25, 6);
    cout << "***************************************************" << endl;
    gotoxy(25, 9);
    cout << "\t\tProject By------>" << endl;
    gotoxy(30, 11);
    cout << "\t\t 19CM003 Bhagyashree Tekade" << endl;
    gotoxy(30, 12);
    cout << "\t\t 19CM007 Ayush Bulbule" << endl;
    gotoxy(30, 13);
    cout << "\t\t 19CM020 Pratham Gaur" << endl;
    gotoxy(30, 14);
    cout << "\t\t 19CM033 Malhar Joshi" << endl;
    gotoxy(30, 15);
    cout << "\t\t 19CM057 Akansha Shewatkar\n"
         << endl;
    gotoxy(20, 16);
    cout << "__________________________________________________________________\n\n";
    cout << "** MAIN MENU **" << endl;
    cout << "\n\n\t\t1.Add/Remove/Edit Item to Bill\n\n";
    cout << "\t\t2.Print Bill Details\n\n";
    cout << "\t\t3.Show Item Details\n\n";
    cout << "\t\t4.Exit\n\n";
    cout << "\t\tPlease Enter Required Option: ";
    int ch, ff;
    float gtotal, totaldis;
    cin >> ch;
    switch (ch)
    {
    case 1:
    billedit:
        system("cls");
        gotoxy(25, 2);
        cout << "Bill Editor";
        gotoxy(25, 3);
        cout << "______________\n\n";
        cout << "\n\t\t1.Add Item Details\n\n";
        cout << "\t\t2.Edit Item Details\n\n";
        cout << "\t\t3.Delete Item Details\n\n";
        cout << "\t\t4.Back to Main Menu " << endl;
        cout << "\t\t Please Enter Required Option: ";
        int ch2;
        cin >> ch2;
        switch (ch2)
        {
        case 1:
            fout.open("billitems.dat", ios::binary | ios::app);
            amt.add();
            cout << "\n\t\tItem Added Successfully!";
            getch();
            goto billedit;
        case 2:
            int ino;
            flag = 0;
            cout << "\n\n\tEnter Item Number to be Edited :";
            cin >> ino;
            fin.open("billitems.dat", ios::binary);
            fout.open("billitems.dat", ios::binary | ios::app);
            if (!fin)
            {
                cout << "\n\nFile Not Found...";
                goto menu;
            }
            fin.seekg(0);
            r = 0;
            while (!fin.eof())
            {
                fin.read((char *)&amt, sizeof(amt));
                if (!fin.eof())
                {
                    int x = amt.item::retno();
                    if (x == ino)
                    {
                        flag = 1;
                        fout.seekp(r * sizeof(amt));
                        system("cls");
                        cout << "\n\t\tCurrent Details are\n";
                        amt.show();
                        cout << "\n\n\t\tEnter New Details\n";
                        amt.add();
                        cout << "\n\t\tItem Details editted";
                    }
                }
                r++;
            }
            if (flag == 0)
            {
                cout << "\n\t\tItem No does not exist...Please Retry!";
                getch();
                goto billedit;
            }
            fin.close();
            getch();
            goto billedit;
        case 3:
            flag = 0;
            cout << "\n\n\tEnter Item Number to be deleted :";
            cin >> ino;
            fin.open("billitems.dat", ios::binary);
            if (!fin)
            {
                cout << "\n\nFile Not Found...";
                goto menu;
            }
            //fstream tmp("temp.dat",ios::binary|ios::out);
            fin.seekg(0);
            while (fin.read((char *)&amt, sizeof(amt)))
            {
                int x = amt.item::retno();
                if (x != ino)
                    tmp.write((char *)&amt, sizeof(amt));
                else
                {
                    flag = 1;
                }
            }
            fin.close();
            tmp.close();
            fout.open("billitems.dat", ios::trunc | ios::binary);
            fout.seekp(0);
            tmp.open("temp.dat", ios::binary | ios::in);
            if (!tmp)
            {
                cout << "Error in File";
                goto billedit;
            }
            while (tmp.read((char *)&amt, sizeof(amt)))
                fout.write((char *)&amt, sizeof(amt));
            tmp.close();
            fout.close();
            if (flag == 1)
                cout << "\n\t\tItem Succesfully Deleted";
            else if (flag == 0)
                cout << "\n\t\tItem does not Exist! Please Retry";
            getch();
            goto billedit;
        case 4:
            goto menu;
        default:
            cout << "\n\n\t\tWrong Choice!!! Retry";
            getch();
            goto billedit;
        }

    case 2:
    billdetail:
        system("cls");
        gotoxy(25, 2);
        cout << "Bill Details";
        gotoxy(25, 3);
        cout << "================\n\n";
        cout << "\n\t\t1.All Items\n\n";
        cout << "\t\t2.Back to Main menu\n\n";
        cout << "\t\tPlease Enter Required Option: ";
        int ch3;
        cin >> ch3;
        if (ch3 == 1)
        {
            system("cls");
            gotoxy(30, 3);
            cout << " BILL DETAILS ";
            gotoxy(3, 5);
            cout << "ITEM NO";
            gotoxy(13, 5);
            cout << "NAME";
            gotoxy(23, 5);
            cout << "PRICE";
            gotoxy(33, 5);
            cout << "QUANTITY";
            gotoxy(44, 5);
            cout << "GST %";
            gotoxy(52, 5);
            cout << "SGST %";
            gotoxy(62, 5);
            cout << "CGST %";
            gotoxy(72, 5);
            cout << "DISCOUNT %";
            gotoxy(84, 5);
            cout << "NET AMOUNT";
            fin.open("billitems.dat", ios::binary);
            if (!fin)
            {
                cout << "\n\nFile Not Found...";
                goto menu;
            }
            fin.seekg(0);
            gtotal = 0;
            while (!fin.eof())
            {
                fin.read((char *)&amt, sizeof(amt));
                if (!fin.eof())
                {
                    amt.report();
                    gtotal += amt.getnetamt();
                    totaldis += amt.getdis();
                    ff = 0;
                }
                if (ff != 0)
                    gtotal = 0;
            }
            gotoxy(17, k);
            cout << "\n\n\n\t\t\tGrand Total = " << gtotal;
            cout << "\n\n\t\t Congratulations You Saved Total: Rs. " << totaldis << "  !!";

            getch();
            fin.close();
        }
        if (ch3 == 2)
        {
            goto menu;
        }
        goto billdetail;
    case 3:
        system("cls");
        flag = 0;
        int ino;
        cout << "\n\n\t\tEnter Item Number :";
        cin >> ino;
        fin.open("billitems.dat", ios::binary);
        if (!fin)
        {
            cout << "\n\nFile Not Found...\nProgram Terminated!";
            goto menu;
        }
        fin.seekg(0);
        while (fin.read((char *)&amt, sizeof(amt)))
        {
            int x = amt.item::retno();
            if (x == ino)
            {
                amt.pay();
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "\n\t\tItem does not exist....Please Retry!";
        getch();
        fin.close();
        goto menu;
    case 4:
        system("cls");
        gotoxy(20, 20);
        cout << "ARE YOU SURE, YOU WANT TO EXIT (Y/N)?";
        char yn;
        cin >> yn;
        if ((yn == 'Y') || (yn == 'y'))
        {
            gotoxy(12, 20);
            system("cls");
            cout << "************************** THANKS **************************************";
            getch();
            exit(0);
        }
        else if ((yn == 'N') || (yn == 'n'))
            goto menu;
        else
        {
            goto menu;
        }
    default:
        cout << "\n\n\t\tWrong Choice....Please Retry!";
        getch();
        goto menu;
    }
    return 0;
}
