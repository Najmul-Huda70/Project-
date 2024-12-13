#include <bits/stdc++.h>
using namespace std;
int addition(int x)
{
    int ans = 0;
    while (x--)
    {
        int value;
        cin >> value;
        ans += value;
    }
    return ans;
}
int Multiplication(int x)
{
    int ans = 1;
    while (x--)
    {
        int value;
        cin >> value;
        ans *= value;
    }
    return ans;
}
int substruction(int a, int b) { return a - b; }
int Division(int a, int b)
{
    if (b == 0)
    {
        cout << "Error" << endl;
    }
    return a / b;
}
int power(int a, int b)
{
    int result = 1;
    for (int i = 0; i < b; i++)
    {
        result *= a;
    }
    return result;
}
unsigned long long int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    else
    {
        return n * factorial(n - 1);
    }
}
int combination(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int permutation(int n, int r)
{
    return factorial(n) / factorial(n - r);
}
int Others_to_Decimal(int number, int base)
{
    int cnt = 0, mode, power = 0;
    while (number > 0)
    {
        mode = number % 10;

        cnt += mode * pow(base, power);
        power++;
        number /= 10;
    }
    return cnt;
}
int Hexadecimal_to_Decimal(string num, int base)
{
    int cnt = 0, mode, power = 0;

    for (int i = num.size() - 1; i >= 0; i--)
    {
        if (num[i] >= 'A' && num[i] <= 'F')
        {
            mode = num[i] - 'A' + 10;
        }
        else if (num[i] > '0' && num[i] <= '9')
        {
            mode = num[i] - '0';
        }
        cnt += mode * pow(base, power);
        power++;
    }
    return cnt;
}
string Decimal_to_Others(int number, int base)
{
    int mode;
    if (number == 0)
        return "0";

    string str = "";
    while (number > 0)
    {
        int mode = number % base;
        char digit;
        if (mode < 10)
        {
            digit = '0' + mode;
        }
        else if (base == 16 && mode >= 10)
        {
            digit = 'A' + (mode - 10);
        }

        str = digit + str;
        number /= base;
    }

    return str;
}
string Others_to_Others(int number, int base_1, int base_2)
{
    int O_to_O = Others_to_Decimal(number, base_1);
    string ans = Decimal_to_Others(O_to_O, base_2);
    return ans;
}
string Hexadecimal_to_Others(string num, int base_1, int base_2)
{
    int H_to_D = Hexadecimal_to_Decimal(num, base_1);
    string ans = Decimal_to_Others(H_to_D, base_2);
    return ans;
}
#define PI 3.14159265358979323846
double degree_to_radian(double degree)
{    // 1 degree = PI/180.0
    return degree * PI / 180.0;
}

double sine(double degree)
{
    return sin(degree_to_radian(degree));
}

double cosine(double degree)
{
    return cos(degree_to_radian(degree));
}

double tangent(double degree)
{
    return tan(degree_to_radian(degree));
}

double cotangent(double degree)
{
    return 1.0 / tan(degree_to_radian(degree));
}

double secant(double degree)
{
    return 1.0 / cos(degree_to_radian(degree));
}

double cosecant(double degree)
{
    return 1.0 / sin(degree_to_radian(degree));
}
double logarithm(double x,double base)
{   //the logarithm formula: log_a(x) = ln(x) / ln(a)
    return log(x)/log(base);
}
double logarithm_e_base(double x)
{    //ln(x) = log_e(x)
    return log(x);
}

int main()
{
    cout << "**************************\n\tCalculator Project\n**************************\nName: Najmul Huda\nRoll:12;\nRegistration No: 202204012\nSession: 2022-2023\n**************************\n"
         << endl;
    while (true)
    {
        cout << "\nChoose an operation: \n1.Arithmatic function \n2.Permutation & Combination\n3.logarithmic function \n4.Conversion(Number System)\n5.trigonalmetric oparator\n6.Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        { case 1:

        {   int option;
            cout<<"\nChoose an operation: \n1. Addition\n2.Multiplication \n3.Subtraction\n4.Division\n5.Power\nEnter your choice: ";
            cin>>option;
           
        if(option==1 || option ==2)
        {
            int x;
            cout << "How many numbers to input : ";
            cin >> x;
            cout << "Enter " << x << " values: ";
            if (choice == 1)
                cout << "Result of Addition: " << addition(x) << endl;
            else
                cout << "Result of Multiplication: " << Multiplication(x) << endl;
            break;
        }
        else if(option==3)
        {
            int a, b;
            cout << "Enter the values of a and b : ";
            cin >> a >> b;
            cout << "Result (a - b): " << substruction(a, b) << endl;
            break;
        }
        else if(option==4)
        {
            int a, b;
            cout << "Enter the values of a and b : ";
            cin >> a >> b;
            if (b == 0)
            {
                cout << "Error: Division by zero" << endl;
            }
            else
            {
                cout << "Result (a / b): " << Division(a, b) << endl;
            }
            break;
        }
        else if(option==5)
        {
            int a, b;
            cout << "Enter the values of a and b : ";
            cin >> a >> b;
            cout << "Result (a ^ b): " << power(a, b) << endl;
            break;
        }
        }
        case 2:
        { int option;
        cout<<"\nChoose an operation: \n1.Factorial\n2.Permutaion\n3.Combination\nEnter your choice: ";
        cin>>option;
       if(option==1)
        {
            int a;
            cout << "Enter the value of a for factorial: ";
            cin >> a;
            cout << "Result: " << factorial(a) << endl;
            break;
        }
        else if(option==2)
        {
            int n, r;
            cout << "Enter the values of n and r for combination: ";
            cin >> n >> r;
            cout << "Result of Combination (nCr): " << combination(n, r) << endl;
            break;
        }
        else if(option==3)
        {
            int n, r;
            cout << "Enter the values of n and r for permutation: ";
            cin >> n >> r;
            cout << "Result of Permutation (nPr): " << permutation(n, r) << endl;
            break;
        }
        }
        case 3:
        { int point;
        cout<<"\ntype:\n1.log_a(x)\t2.log_e(x)\nchose an option: ";
        cin>>point;
       double x, base;
    cout << "Enter the value of x: ";
    cin >> x;
    if(point == 1)
    {cout << "Enter the base of the logarithm: ";
    cin >> base;
    cout << "Log_"<<base<<"(" <<x<< ")= " << logarithm(x,base)<<endl; break;
        }
        else{cout <<"ln("<<x<<") or Log_e("<<x<< ")= "<<logarithm_e_base(x)<<endl; break;}
        }
        case 4:
        {
                cout << "\nConversion(Number System)\n\nChoose an operation: \n1.Binary to Decimal\n2.Octal to Decimal\n3.Hexadecimal to Decimal\n4.Decimal to Binary\n5.Decimal to Octal\n6.Decimal to Hexadecimal\n7.Binary to Octal\n8.Binary to Hexadecimal\n9.Octal to Binary\n10.Octal to Hexadecimal\n11.Hexadecimal to Octal\n12.Hexadecimal to Binary"
                     << endl;
                int choice_C;
                cout << "Enter your choice: ";
                cin >> choice_C;

               if(choice_C==1)
                {
                    long long int number;
                    cout << "Enter your Binary number: ";
                    cin >> number;
                    cout << "Binary to Decimal: " << Others_to_Decimal(number, 2) << endl;
                    break;
                }
               else if(choice_C==2)
                {
                    long long int number;
                    cout << "Enter your Octal number: ";
                    cin >> number;
                    cout << "Octal to Decimal: " << Others_to_Decimal(number, 8) << endl;
                    break;
                }
                else if(choice_C==3)
                {
                    string num;
                    cout << "Enter your Hexadecimal number: ";
                    cin >> num;
                    cout << "Hexadecimal to Decimal: " << Hexadecimal_to_Decimal(num, 16) << endl;
                    break;
                }
                else if(choice_C==4)
                {
                    long long int number;
                    cout << "Enter your Decimal number: ";
                    cin >> number;
                    cout << "Decimal to Binary: " << Decimal_to_Others(number, 2) << endl;
                    break;
                }

              else if(choice_C==5)
                {
                    long long int number;
                    cout << "Enter your Decimal number: ";
                    cin >> number;
                    cout << "Decimal to Octal: " << Decimal_to_Others(number, 8) << endl;
                    break;
                }

                else if(choice_C==6)
                {
                    long long int number;
                    cout << "Enter your Decimal number: ";
                    cin >> number;
                    cout << "Decimal to Hexadecimal: " << Decimal_to_Others(number, 16) << endl;
                    break;
                }

               else if(choice_C==7)
                {
                    long long int number;
                    cout << "Enter your Binary number: ";
                    cin >> number;
                    cout << "Binary to Octal: " << Others_to_Others(number, 2, 8) << endl;
                    break;
                }

                else if(choice_C==8)
                {
                    long long int number;
                    cout << "Enter your Binary number: ";
                    cin >> number;
                    cout << "Binary to Hexadecimal: " << Others_to_Others(number, 2, 16) << endl;
                    break;
                }

                else if(choice_C==9)
                {
                    long long int number;
                    cout << "Enter your Octal number: ";
                    cin >> number;
                    cout << "Octal to Binary: " << Others_to_Others(number, 8, 2) << endl;
                    break;
                }

               else if(choice_C==10)
                {
                    long long int number;
                    cout << "Enter your Octal number: ";
                    cin >> number;
                    cout << "Octal to Hexadecimal: " << Others_to_Others(number, 8, 16) << endl;
                    break;
                }

              else if(choice_C==11)
                {
                    string num;
                    cout << "Enter your Hexadecimal number: ";
                    cin >> num;
                    cout << "Hexadecimal to Octal: " << Hexadecimal_to_Others(num, 16, 8) << endl;
                    break;
                }

               else if(choice_C==12)
                {
                    string num;
                    cout << "Enter your Hexadecimal number: ";
                    cin >> num;
                    cout << "Hexadecimal to Binary: " << Hexadecimal_to_Others(num, 16, 2) << endl;
                    break;
                }
                else{
                    cout << "Invalid choice for conversion operation!" << endl;
                    break;
                }
            }
        case 5:
           
            {
                double angle;
                int op;
                cout << "\nChoose an operation: \n1.sine\n2.cosine\n3.tangent\n4.cotangent\n5.secant\n6.cosecant";
                cout << "\nEnter your choice: ";
                cin >> op;

                if(op==1)
                {
                    cout << "Enter the angle in degree: ";
                    cin >> angle;
                    cout << "Sine: " << sine(angle) << endl;
                    break;
                }
                else if(op==2)
                {
                    cout << "Enter the angle in degree: ";
                    cin >> angle;
                    cout << "Cosine: " << cosine(angle) << endl;
                    break;
                }
                  else if(op==3)
                {
                    cout << "Enter the angle in degree: ";
                    cin >> angle;
                    cout << "Tangent: " << tangent(angle) << endl;
                    break;
                }
                  else if(op==4)
                {
                    cout << "Enter the angle in degree: ";
                    cin >> angle;
                    cout << "Cotangent: " << cotangent(angle) << endl;
                    break;
                }
                  else if(op==5)
                {
                    cout << "Enter the angle in degree: ";
                    cin >> angle;
                    cout << "Secant: " << secant(angle) << endl;
                    break;
                }

                  else if(op==6)
                {
                    cout << "Enter the angle in degree: ";
                    cin >> angle;
                    cout << "Cosecant: " << cosecant(angle) << endl;
                    break;
                }
                 
                else
                {
                    cout << "Invallid choice!" << endl;
                    break;
                }
                }
           
            case 6:
            {

                cout << "Exiting the calculator. Goodbye!" << endl;
                exit(0);
                break;
            }

            default:
                cout << "Invalid choice!" << endl;
            }
        }
    }

