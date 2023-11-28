#include <iostream>
using namespace std;
int main()
{
    //1

    void Sum(int a)
    {
        if (a > 0)
        {
            cout << a % 10;
            Sum(a / 10);
        }
    }

    int main()
    {
        int a;
        cin >> a;
        Sum(a);
    }
    //2
 
    int Sum(int a, int b)
    {
        if (a > b)return 0;
        return a + Sum(a + 1, b);
    }

    int main() {
        int a;
        int b;
        cout << "Enter the first number in the range: ";
        cin >> a;
        cout << "Enter a lower number in the range of: ";
        cin >> b;
        int sum = Sum(a, b);
        cout << sum;
    }
    //3

    int degreeofnumber(int number, int degree) {

        if (degree == 0)return 1;
        return number * degreeofnumber(number, degree - 1);
    }
    int main() {
        int number;
        int degree;
        cout << "enter a number: ";
        cin >> number;
        cout << "enter the degree: ";
        cin >> degree;
        int result = degreeofnumber(number, degree);
        cout << result;
    }
    //4
   
    void sum(int a)
    {
        a--;
        if (a > 0)
        {
            sum(a);
        }
        cout << a + 1 << " ";
    }

    int main()
    {
        int a;
        cin >> a;
        sum(a);
    }
    //5
   
    int main()
    {
        static int b = 5;
        static int a = 1;

        if (b < a)
        {
            cout << b;
            b++;
            if (b != a)
            {
                main();
            }
        }

        else if (b > a)
        {
            b--;
            cout << b;
            if (a < b)
            {
                main();
            }
        }
    }
    //6
   
    void degree(int a)
    {
        if (a < 2)
        {
            cout << "no";
        }
        if (a == 2)
        {
            cout << "yes" << "\n";
        }

        int b = 0;

        if (a > 2)
        {
            b++;
            degree(a / 2);
        }
    }

    int main()
    {
        int a;
        cin >> a;
        degree(a);
    }
    //7
    
    int Sum(int a)
    {
        if (a > 0)
        {
            return(a % 10) + Sum(a / 10);
        }
    }

    int main()
    {
        int a;
        cin >> a;
        int sum = Sum(a);
        cout << "Sum: " << sum - 1;
    }
    //8
    
    void Sum(int a)
    {
        if (a > 0)
        {
            cout << a % 10 << " ";
            Sum(a / 10);
        }
    }

    int main()
    {
        int a;
        cin >> a;
        Sum(a);
    }
    //9
  
    void Sum(int a)
    {
        if (a > 0)
        {
            Sum(a / 10);
            cout << a % 10 << " ";
        }
    }

    int main()
    {
        int a;
        cin >> a;
        Sum(a);
    }
}
