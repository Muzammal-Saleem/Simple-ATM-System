#include <iostream>
using namespace std;
void manu()
{
    cout << "balance check    press 1" << endl
         << "deposit money    press 2" << endl
         << "widraw money     press 3" << endl
         << "Exit             press 4" << endl;
}

void bank(int n, double *a)
{
    switch (n)
    {
    case 1:
    {
        cout << "your current balance is : " << *a << "$" << endl;
        break;
    }
    case 2:
    {
        double deposit;
        cout << "Enter amount you wants to deposit : ";
        cin >> deposit;
        *a = *a + deposit;
        cout << "your current balance is : " << *a << "$" << endl;
        break;
    }
    case 3:
    {
        double widraw;
        cout << "Enter amount you wants to widraw : ";
        cin >> widraw;
        if (widraw <= *a)
        {
            *a = *a - widraw;
            cout << "Your current balance is : " << *a << endl;
            break;
        }
        cout << "your have not suficent balance " << endl;
        break;
    }
    default:
    {
        cout << "******Exit******" << endl;
        break;
    }
    }
}
int main()
{
    double balance = 100;
    double *bal = &balance;
    cout << "*****Welcome******" << endl;
    cout << "Enter your name : " << endl;
    string name;
    cin >> name;
    cout << "Enter pasward : " << endl;
    int code;
    cin >> code;
    if (code == 7078)
    {
        for (int i = 1; i = 1; i)
        {
            manu();
            int n;
            cin >> n;
            if ((n < 5) && (n > 0))
            {
                bank(n, bal);
                cout << "Thank you " << name << " for using our service" << endl;
            }
            else
            {
                cout << "you did some thing wrong";
            }
            cout << "press 0  to exit " << endl
                 << "press 1 to access again " << endl;
            cin >> i;
        }
    }
    else
    {
        cout << "wrong pasward " << endl;
    }

    return 0;
}