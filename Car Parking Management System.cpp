/*CAR PARKING MANAGEMENT SYSTEM*/
#include<iostream>
using namespace std;
int main(){
    int r=0,c=0,b=0,amount=0,total_veh=0,choice;

    while(true){
        cout<<"Welcome to Parking System";
        cout<<"\n Press 1: for Rickshaw ";
        cout<<"\n Press 2: for Cars";
        cout<<"\n Press 3: for Buses";
        cout<<"\n Press 4: to Show Record";
        cout<<"\n Press 5: for Delete Record";
        cout<<"\n Press 6: Cost for Rickshaw: ";
        cout<<"\n Press 7: Cost for Car: ";
        cout<<"\n Press 8: Cost for Bus: ";
        cout<<"\n Enter Choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                r++;
                amount = amount+10;
                total_veh++;
                cout<<"\n Add 1 Rickshaw in record \n";
                system("\n pause");
                system("cls");   
            
            case 2:
                c++;
                amount=amount+20;
                total_veh++;
                cout<<"\n Add 1 Car in record \n";
                system("\n pause");
                system("cls");   
            
            case 3:
                b++;
                amount=amount+15;
                total_veh++;
                cout<<"\n Add 1 Bus in record \n";
                system("\n pause");
                system("cls");   
            
            case 4:
                cout<<"Total Amount="<<amount;
                cout<<"\n Total Vehicles= "<<total_veh;
                cout<<"\n Rickshaw= "<<r;
                cout<<"\n Cars= "<<c;
                cout<<"\n Buses= "<<b;
                system("\n pause");
                system("cls");
            
            case 6:
                cout<<"10\n";
                system("\n pause");
                system("\n cls");

            case 7:
                cout<<"20";
                system("\n pause");
                system("\n cls");

            case 8:
                cout<<"15";
                system("\n pause");
                system("\n cls");

            case 5:
                c=0;r=0;b=0;amount=0;total_veh=0;

                cout<<"\n\n Delete Record";
                break;
            
            default:
                cout<<"\n\n Invalid Input";
                system("\n pause");
                system("cls");

            
        }
    } 
}