#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;

int main () {

cout<<" ==============================="<<endl;
cout <<"     ALL IN ONE, CALCULATOR"<<endl;
cout<<" ==============================="<<endl;
cout <<endl;

int choice;
cout <<"1) BMI Calculator"<<endl;
cout <<"2) Tax Calculator"<<endl;
cout <<"3) Temp Converter"<<endl;
cout <<"4) Parking Fee Calculator"<<endl;
cout <<"5) Naira Converter"<<endl;
cout <<"6) Exit";
cout <<endl;
cout <<"Enter your choice (1-6): ";
cin >> choice;
cout <<endl;

 while(choice<1 || choice>6){
    cout<<"ERROR!!! Invalid Choice "<<endl;
    cout<<endl;

    cout<<  "Re-enter Choice (1-6) :";
    cin>> choice;}

switch (choice) {

  //CASE ONE(1)/////////////////////////////////////////////////////////////////////////////////////////////////////////////

  case 1:{
  cout << "You picked BMI Calculator"<<endl;
  double height;
  double weight;


  cout<<" ==============================="<<endl;
  cout<<"   MICHAELS   BMI   CALCULATOR"  <<endl;
  cout<<" ==============================="<<endl;

  //ENTER WEIGHT IN KG...............
  cout<<"   Enter Weight(in Kg):";
  cin>>weight;
  cout<<endl;

 //put a condition to catch invalid input of weight
  while (weight<=0){
  cout<<"   Re-Enter a Valid Weight(in Kg):";
  cin>>weight;}
  cout<<endl;


  //ENTER HEIGHT IN METERES
  cout<<"   Enter Height(in metres):";
  cin>>height;
  cout<<endl;

  //put a condition to catch invalid input of height
  while (height<=0){
  cout<<"   Re-Enter a Valid Height(in Metres):";
  cin>>height;}


  double bmi=weight/pow(height,2);
  cout<<"=========================================="<<endl;
  cout<<"   Body Mass Index(BMI):    "<<bmi<<endl;
  cout<<"=========================================="<<endl;


  if (bmi<18.5){
    cout<<endl;
    cout<<"  Remark : Underweight"<<endl;
    cout<<"  Advice : Eat more protein."<<endl;}

  else if (bmi>=18.5 && bmi <=24.9){
    cout<<endl;
    cout<<"  Remark : Normal Weight"<<endl;
    cout<<"  Advice : Nice Physique, Keep it up"<<endl;}

  else if (bmi>=25.0 && bmi <=29.9){
    cout<<endl;
    cout<<"  Remark : Overweight"<<endl;
    cout<<"  Advice : Eat healthier, move more."<<endl;}

  else if (bmi>=30.0){
    cout<<endl;
    cout<<"  Remark : Obese"<<endl;
    cout<<"  Advice : Small changes help."<<endl;}

    break;}



    //CASE TWO///////////////////////////////////////////////////////////////////////////////////////////////////////

  case 2:{
  cout << "You picked Tax Calculator";
  cout <<endl;
  double gross_earnings;

  cout<<" ==============================="<<endl;
  cout<<"  MICHAELS   TAX   CALCULATOR"  <<endl;
  cout<<" ==============================="<<endl;
  cout<<"  Enter Earnings(in USD):";
  cin>>gross_earnings;
  cout<<endl;

    double income_tax=         .15 * gross_earnings;
    cout<<"Income tax:         $"<<income_tax<<endl;

    double health_insurance=   .05 * gross_earnings;
    cout<<"Health insurance:   $"<<health_insurance<<endl;

    double pension =           .06 * gross_earnings;
    cout<<"Pension:            $"<<pension<<endl;

    double insurance =         .05 * gross_earnings;
    cout<<"Investments:        $"<<insurance<<endl;

    double municipal_tax =     .02 * gross_earnings;
    cout<<"Municipal tax:      $"<<municipal_tax<<endl;


    // We would conclude it with calculating the total//

    cout<<endl;
    double net_earning =gross_earnings-(income_tax+health_insurance+pension+insurance+municipal_tax);
    cout<<"==============================="<<endl;
    cout<<"  Net Earnings=          $"<<net_earning<<endl;
    cout<<"==============================="<<endl;

    break;}

    //CASE THREE(3)///////////////////////////////////////////////////////////////////////////////////////////////////////

    case 3:
    {cout <<  "You picked Temperature Converter"<<endl;
        cout <<endl;
        cout<<"=================================="<<endl;
        cout <<" MICHAEL'S TEMPERATURE CONVERTER" <<endl;
        cout<<"=================================="<<endl;
        cout <<endl;

        //lets call name of variable as temp_choice, short for temperature choice
        short temp_choice;

        cout <<"1) FARHENHEIT TO CELCIUS"<<endl;
        cout <<"2) CELCIUS TO FARHENHEIT"<<endl;

        cout <<endl;

        cout <<"ENTER YOUR CONVERSION CHOICE (1-2):";

        cin>>temp_choice;
        cout <<endl;

        while(temp_choice<1 || temp_choice>2)
        {cout<<"ERROR!!! Invalid Choice "<<endl;
        cout<<endl;

        cout<<  "Re-enter Choice (1-2) :";
        cin>> temp_choice;}



        //include a switch here to perfectly execute between the farhenheit and the celcius

        switch (temp_choice) {

        //make case one for farhenheit to celcius//
            case 1:
            {cout<<" --------------------------------"<<endl;
            cout << "      FARHENHEIT TO CELCIUS"<<endl;
            cout<<" --------------------------------"<<endl;
            double farhenheit;
            cout <<endl;
            cout <<"ENTER TEMPERATURE IN FARHENHEIT:";
            cin >>farhenheit;
            cout <<endl;

            cout<<" ==============================="<<endl;
            cout<<"     CELCIUS:       "<<(farhenheit -32) / 1.8<<endl;
            cout<<" ==============================="<<endl;
            break;}

        //make case two for celcius to farhenheit//


            case 2:
            {cout<<" --------------------------------"<<endl;
            cout << "     CELCIUS TO FARHENHEIT "<<endl;
             cout<<" --------------------------------"<<endl;
            double celcius;
            cout <<endl;
            cout <<"ENTER TEMPERATURE IN CELCIUS:";
            cin >>celcius;
            cout <<endl;

            cout<<" ==============================="<<endl;
            cout<<"   FARHENHEIT:   "<<(celcius * 1.8) + 32<<endl;
            cout<<" ==============================="<<endl;
            break;}
            }
            break;}


   //CASE FOUR(4)///////////////////////////////////////////////////////////////////////////////////////////////////////



        case 4:
        {cout << "  You picked Parking Fee Calculator  "<<endl;
            cout<<"=================================="<<endl;
            cout<<"      PARKING FEE CALCULATOR"<<endl;
            cout<<"=================================="<<endl;
            cout<<endl;
            short hours;
            short minutes;
            cout<<"    ENTER HOURS:";
            cin>>hours;
            cout<<endl;
            cout<<"    ENTER MINUTES:";
            cin>>minutes;
            cout<<endl;

//let me put a loop to make the user re-enter the values for the times

        while(hours==0 && minutes==0){
cout<<"    Error: Hours and Minutes cannot be both Zero"<<endl;
cout<<endl;
cout<<"    Re-enter Hours:";
cin>>hours;
cout<<endl;
cout<<"    Re-enter Minutes:";
cin>>minutes;}


        //checking for illegal minutes
        //in other to make it interactive we would insert while, to avoid a complete crash

        while(minutes<0 || minutes>59 || (hours==0 && minutes==0)){
        if(hours==0 && minutes==0){
cout<<"    Error: Hour is Already Zero!, Minutes cannot be zero"<<endl;}

        else{
cout<<"    Error: Minutes must be between 0-59"<<endl;}

cout<<endl;
cout<<"    Re-enter Minutes:";
cin>>minutes;}

        cout<<endl;

        int vehicle_choice;
        double standard_fare=0.0;//standard fare per hour

        //so we will use the prompt of
        //1.heavy duty truck
        //2.car
        //3.bike
        //4.keke

cout << " Select Vehicle Type:" << endl;
cout << " 1. Heavy Duty Truck" << endl;
cout << " 2. Car" << endl;
cout << " 3. Bike"<< endl;
cout << " 4. Keke"<< endl;
cout<<endl;
cout << " Enter choice (1-4): ";
cin  >>vehicle_choice;
cout<<endl;

        //WE WILL PUT AN IF/ELSE STATEMENT TO BLOCK NUMBERS OUT OF 1-4
        //trap any number that is not 1,2,3,4

        while(vehicle_choice<1 || vehicle_choice>4){
cout<<endl;
cout<<"    Error: Vehicle Type must be between 1-4"<<endl;
cout<<"    Re-enter choice (1-4): ";
cin>>vehicle_choice;
cout<<endl;}

        //so we will use a cin to send the input to the if/else
cout<<endl;

        if(vehicle_choice==1){
           standard_fare=8.0;//Rate for Heavy Duty Truck
        }

        else if(vehicle_choice==2){
           standard_fare=6.0;//Rate for Car
        }

        else if(vehicle_choice==3){
           standard_fare=2.0;//Rate for Bike
        }

        else if(vehicle_choice==4){
           standard_fare=4.0;//Rate for Keke
        }

        double total_hours=hours+(minutes/60.0);

        double parking_fee=ceil(total_hours*standard_fare);


cout<<"    Parking Fee:"<<parking_fee<<" $"<<endl;
cout<<endl;

       if(parking_fee<= 0){
cout<<"    [ALERT] Security Error: Calculated fee is 0.0 $"<<endl;
cout<<"        SYSTEM MANIPULATED. PLEASE CONTACT ADMIN";
        return 1;
        }

       //LET ME PUT AN ADMINS APPROVAL TO THE RECEIPT

cout<<"=================================="<<endl;
cout<<"   APPROVED BY MICHAEL TERTSUA   "<<endl;
cout<<"=================================="<<endl;

        break;}


   //CASE FIVE(5)///////////////////////////////////////////////////////////////////////////////////////////////////////


    case 5:
{cout << "You picked Naira-FX Calculator"<<endl;
cout<<"===================================="<<endl;
cout<<"------------------------------------"<<endl;
    cout<< endl;
    short currency;
    cout<<"  (0. US Dollar (USD)             "<<endl;
    cout<<"  (1.Euro (EUR)                   "<<endl;
    cout<<"  (2.British Pound (GBP)          "<<endl;
    cout<<"  (3.Canadian Dollar (CAD)        "<<endl;
    cout<<"  (4.UAE Dirham (AED)             "<<endl;
    cout<<"  (5.Chinese Yuan (CNY)           "<<endl;
    cout<<"  (6.Ghanian Cedi (GHS)           "<<endl;
    cout<<"  (7.Japanese Yen (JPY)           "<<endl;
    cout<<"  (8.South African Rand (ZAR)     "<<endl;
    cout<<"  (9.CFA Franc (XOF)              "<<endl;
    cout << endl;
cout<<"===================================="<<endl;
cout<<"===================================="<<endl;


    cout<<"BASE CURRENCY: NIGERIAN NAIRA(NGN)"<<endl;
    cout<<endl;
    cout<<"ENTER CURRENCY CHOICE (0-9): ";

    //so we will use a cin to send the input to the if/else

    cin >>currency;
    cout <<endl;

    //put a while to catch any invalid numbers..........//

    while(currency<0 || currency>9){
    cout <<"ERROR!!! Invalid Currency Choice "<<endl;
    cout <<endl;

    cout <<  "Re-enter Choice (0-9) :";
    cin >> currency;}
    cout <<endl;

    // double naira holds the Naira value entered by the user

    double naira;
    cout<<" --------------------------------"<<endl;
    cout <<"   ENTER NGN:";
    cin >>naira;
    cout<<" --------------------------------"<<endl;
    cout <<endl;
cout<<"=========================================="<<endl;

    if (currency == 0) {
    cout << "US Dollar (USD): " <<     naira / 1394.00 << endl;
}
else if (currency == 1) {
    cout << "Euro (EUR): " <<          naira / 1577.00 << endl;
}
else if (currency == 2) {
    cout << "British Pound (GBP): "<<  naira / 1836.00 << endl;
}
else if (currency == 3) {
    cout << "Canadian Dollar (CAD):"<<  naira / 977.00 << endl;
}
else if (currency == 4) {
    cout << "UAE Dirham (AED): " <<     naira / 366.00 << endl;
}
else if (currency == 5) {
    cout << "Chinese Yuan (CNY): " <<   naira / 200.00 << endl;
}
else if (currency == 6) {
    cout << "Ghanian Cedi (GHS): " <<   naira / 121.00 << endl;
}
else if (currency == 7) {
    cout << "Japanese Yen (JPY): " <<     naira / 9.10 << endl;
}
else if (currency == 8) {
    cout << "South African Rand (ZAR): "<<naira / 76.00 << endl;
}
else if (currency == 9) {
    cout << "CFA Franc (XOF): "<<          naira / 2.40 << endl;
}
cout<<"=========================================="<<endl;

        break;}


   //CASE SIX(6)///////////////////////////////////////////////////////////////////////////////////////////////////////


    case 6:
        {cout << "Goodbye!";
        cout<<endl;
        break;}


return 0;}
}

