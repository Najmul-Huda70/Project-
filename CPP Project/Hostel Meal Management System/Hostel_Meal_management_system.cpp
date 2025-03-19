// Najmul Huda
#include <bits/stdc++.h>
#include <iomanip> //setw(width),setprecision(),fixed
#include <vector>  //vector
#include <fstream> // file read,write
using namespace std;
typedef long long ll;
bool vis[32];
class Member
{
public:
    string name;
    double Total_Meals;
    int Total_Deposit;

    Member(string name)
    {
        this->name = name;
        Total_Meals = 0;
        Total_Deposit = 0;
    }
};
class Deposit
{
public:
    string date, name;
    int amount;
};

void meal_details(vector<Member> &Hostel, vector<vector<double>> &Meal, int Hostel_member)
{
    cout << "-----------------------------------------------------------------------------------" << endl;
    cout << "|" << setw(3) << left << "Day";
    for (int i = 0; i < Hostel_member; i++)
    {
        cout << "| " << setw(8) << left << Hostel[i].name << "  ";
    }
    cout << endl;
    cout << "------------------------------------------------------------------------------------" << endl;
    // for (int i = 0; i < 32; i++)
    // {
    //     cout << vis[i] << " ";
    // }
    // cout << endl;
    for (int i = 1; i < 32; i++)
    {
        if (!vis[i])
            break;

        cout << setw(6) << left << i;
        for (int j = 0; j < Hostel_member; j++)
        {
            cout << setw(6) << fixed << setprecision(1) << left << Meal[i][j] << "      ";
        }
        cout << endl;
    }
}
void Details_print(vector<Member> &Hostel, int Hostel_member, int Hostel_Total_Cost, int Hostel_Total_Meals)
{
    // Meal Rate
    double Meal_Rate = (Hostel_Total_Meals > 0) ? (double)Hostel_Total_Cost / Hostel_Total_Meals : 0;

    // Print
    cout << "\n\t\t\tHostel Management System\n"
         << endl;
    cout << "---------------------------------------------------------------------------" << endl;
    cout << "| " << setw(15) << left << "Name"
         << "| " << setw(12) << "Total Meals"
         << "| " << setw(12) << "Total Cost"
         << "| " << setw(12) << "Deposit"
         << "| " << setw(12) << "Balance" << " |" << endl;
    cout << "---------------------------------------------------------------------------" << endl;

    // Print
    for (int i = 0; i < Hostel_member; i++)
    {
        double Total_Cost = Hostel[i].Total_Meals * Meal_Rate;
        double Balance = Hostel[i].Total_Deposit - Total_Cost;

        cout << "| " << setw(15) << left << Hostel[i].name
             << "| " << setw(12) << fixed << setprecision(2) << Hostel[i].Total_Meals
             << "| " << setw(12) << fixed << setprecision(2) << Total_Cost
             << "| " << setw(12) << Hostel[i].Total_Deposit
             << "| " << setw(12) << fixed << setprecision(2) << Balance << " |" << endl;
    }

    cout << "---------------------------------------------------------------------------" << endl;
    cout << "\nHostel Total Cost : " << Hostel_Total_Cost << endl;
    cout << "Hostel Meal Rate : " << Meal_Rate << endl;
}

int32_t main()
{
    vector<Member> Hostel;

    for (int i = 0; i < 32; i++)
    {
        vis[i] = false;
    }
    // read
    ifstream file("Meal_history.csv");

    int Hostel_member;
    file >> Hostel_member;
    vector<vector<double>> Meal(32, vector<double>(Hostel_member, 0));
    string day;
    file >> day;

    for (int i = 0; i < Hostel_member; i++)
    {
        string name;
        file >> name;
        Hostel.push_back(Member(name));
    }
    int dd;
    while (file >> dd)
    {

        vis[dd] = true;
        for (int i = 0; i < Hostel_member; i++)
        {
            double meal;
            file >> meal;
            Meal[dd][i] = meal;
            Hostel[i].Total_Meals += meal;
        }
    }

    file.close();
    // read
    ifstream Depo("Deposit.csv");
    vector<Deposit> deposit;
    string date;
    while (Depo >> date)
    {
        string nam;
        int amount;
        Depo >> nam >> amount;
        deposit.push_back({date, nam, amount});

        for (int i = 0; i < Hostel_member; i++)
        {
            if (Hostel[i].name == nam)
            {
                Hostel[i].Total_Deposit += amount;
                break;
            }
        }
    }

    Depo.close();
    int Hostel_Total_Cost = 0;
    ifstream Hostel_cost("Hostel_Cost.csv");
    string dt;
    while (Hostel_cost >> dt)
    {
        string nm;
        Hostel_cost >> nm;
        int cost;
        Hostel_cost >> cost;
        Hostel_Total_Cost += cost;
    }
    Hostel_cost.close();
    // Total Meals
    double Hostel_Total_Meals = 0;
    for (int i = 0; i < Hostel_member; i++)
    {
        Hostel_Total_Meals += Hostel[i].Total_Meals;
    }

    cout << "\nNajmul Huda\nRoll:12\nSession : 2022-23\nDept. of CSE,NeU" << endl;
    cout << "\n\t\t----------------------------" << endl;
    cout << "\t\t| Hostel Management System |" << endl;
    cout << "\t\t----------------------------" << endl;
    while (true)
    {
        cout << "\n\nOption Choice \n1.Add meal for this day\n2.Add Deposit\n3.Add Hostel Cost\n4.View Meal Details\n5.Summary\n0.Close" << endl;
        cout << "\nDo you want?" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            // write
            ofstream file("Meal_History.csv", ios::app); // ios::app --> without remove
            int new_day = 1;
            while (vis[new_day])
                new_day++;
            file << setw(6) << left << new_day;
            vis[new_day] = true;
            for (int i = 0; i < Hostel_member; i++)
            {
                cout << Hostel[i].name << " : ";
                double meal;
                cin >> meal;
                Meal[new_day][i] = meal;
                Hostel[i].Total_Meals += meal;
                file << setw(12) << left << fixed << setprecision(1) << meal;
            }
            file << endl;
            file.close();
            cout << "\nMeal adding Done........." << endl;
        }
        else if (op == 2)
        {
            cout << "Enter Current date Name Amount - For example : 01/03/2025 Najmul 1000\n";
            ofstream Depo("Deposit.csv", ios ::app);
            string date, name;
            cin >> date >> name;
            Depo << "\n"
                 << date << " " << name << " ";
            int tk;
            cin >> tk;
            Depo << tk << endl;
            deposit.push_back({date, name, tk});

            for (int i = 0; i < Hostel_member; i++)
            {
                if (Hostel[i].name == name)
                {
                    Hostel[i].Total_Deposit += tk;
                    break;
                }
            }
            Depo.close();
            cout << "Added Your Deposit................" << endl;
        }
        else if (op == 3)
        {
            cout << "Enter Current date Name Cost - For example : 01/03/2025 Najmul 1000\n";
            ofstream Cost("Hostel_Cost.csv", ios ::app);
            string date, name;
            cin >> date >> name;
            Cost << "\n"
                 << date << " " << name << " ";
            int tk;
            cin >> tk;
            Cost << tk << endl;
            Hostel_Total_Cost += tk;
            Cost.close();
            cout << "Added Your Cost................" << endl;
        }
        else if (op == 4)
        {
            meal_details(Hostel, Meal, Hostel_member);
        }
        else if (op == 5)
        {
            cout << "Total Cost : ";

            Details_print(Hostel, Hostel_member, Hostel_Total_Cost, Hostel_Total_Meals);
        }
        else
            break;
    }
    return 0;
}
