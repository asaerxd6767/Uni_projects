/*
Programs:
-- Calculate the Sum.
-- Calculate the Average.
-- Calculate the area of the following:
    1. Circle   2. rectangle (Pi = 3.14)
-- Enter 2 numbers and see if it's even or odd.
-- Enter 2 numbers and sort them (Swap)
-- The abslute value of number (if it's negative, then make it positive)
-- Enter 3 numbers and see the maximum and minimum.
-- Using if - Switch, make a calculator.
-- Using Switch, Let the user enter a number (1-7) and let the output display the day of the week.
-- Using Switch, Make the user choose one of alphabet characters and display a color (Ex: 'R' = Red)
-- Calculate the Sum - Factorial using 3 loop statements.
-- Calculate the Factorial from 1 to 10 (Ex: The fact of 3 = 6 | The fact of 4 = 24 | The fact of 5 = 120)
-- Make star - number patterns.
-- Using array find the sum - Average
-- Using array let user enter numbers and a key, if the key is found inside the array, display the location.
-- Using array let the user enter 5 numbers and make the program sort the numbers. Ex: (3, 2, 1, 4) = (1, 2, 3, 4)
-- Using functions print the maximum value of three values.
-- Using functions Calculate the rectangle area.
-- Using function Calculate the following (p = n! / (n + m)!)

PDF TASKS
-- Program computes the sum of all the odd between 0 - 100
-- Program reads 20 numbers and computes their average
-- Program reads unknown numbers of integers to count the numbers of odds and evens
-- Program to calculate the value of x^n (ex: x^4 = x*x*x*x)(r = x^n)
-- Program to calculate the following (12^2 + 10^2 + 8^2 + 6^2 + 4^2 + 2^2)
-- Program to calculate the following (1/2 + 2/3 + 3/4 + 4/5 ... 99/100)
-- Program to print a table with y, y^2, y^3 (y takes the values from 1 to 10)

Made by: Asser Mohammed Youssef.
*/
#include <iostream>
using namespace std;
/*
//Calculate the Sum
int main(){
    int x, y, z, sum;
    cin >> x >> y >> z;
    sum = x + y + z;
    cout << sum;
    return 0;
}
*/

/*
//Calculate the Average
int main(){
    int x, y, z, avg;
    cin >> x >> y >> z;
    avg = (x + y + z) / 3;
    cout << avg;
    return 0;
}
*/

/*
//Area of circle
int main(){
    int r, result;
    int const pi = 3.14; //Read-only value
    cin >> r;
    result = r * r * pi;
    cout << result;
    return 0;
}
*/

/*
//Area of rectangle
int main(){
    int l, w, result;
    cin >> l >> w;
    result = l * w;
    cout << result;
    return 0;
}
*/

/*
//Even or odd
int main(){
    int x;
    cin >> x;
    if(x % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";
    return 0;
}
*/

/*
//Abslute value
int main(){
    int x;
    cin >> x;
    if(x < 0)
        x = -x;
    cout << x;
    return 0;
}
*/

/*
//Sorting numbers
int main(){
    int n1, n2, temp;
    cin >> n1 >> n2;

    temp = n1;
    n1 = n2;
    n2 = temp;
    cout << "After swap: " << n1 << ", " << n2;
    return 0;
}
*/

/*
//Maximum value
int main(){
    int n1, n2, n3, max;
    cin >> n1 >> n2 >> n3;
    
    max = n1;
    if(max < n2)
        max = n2;
    else if(max < n3)
        max = n3;
    cout << max;
    return 0;
}
*/

/*
//Calculator switch
int main(){
    int n1, n2;
    char op;
    cin >> n1 >> n2 >> op;

    switch(op){
        case '+':
            cout << n1 + n2;
        break;
        
        case '-':
            cout << n1 - n2;
        break;

        case '*':
            cout << n1 * n2;
        break;

        case '/':
            cout << n1 / n2;
        break;
        
        default:
        cout << "Unknown operator.";
        break;
    }
return 0;
}
*/

/*
//Day of the week using numbers
int main(){
int n1;
cout << "Enter number (1-7)" << endl;
cin >> n1;

switch (n1)
{
    case 1:
        cout << "Sunday.";
    break;
    case 2:
        cout << "Monday.";
    break;
    case 3:
        cout << "Tuesday.";
    break;
    case 4:
        cout << "Wednesday.";
    break;
    case 5:
        cout << "Thursday.";
    break;
    case 6:
        cout << "Friday.";
    break;
    case 7:
        cout << "Saturday.";
    break;

default:
cout << "Unknown number, try again.";
    break;
}
return 0;
}
*/

/*
//Alphabet char colors
int main(){

    return 0;
}
*/

/*
//Factorial numbers
int main (){
    int x, fact;
    cin >> x;
    for(int i = 1; i <= x; i++){
        fact *= i;
    }
    cout << fact;
    return 0;
}
*/

/*
//Factorial table
int main(){
    int fact = 1;
    int n;
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= i; j++){
            fact *= j;
        }
    cout << "The fact of, " << i << " = " << fact << endl;
    fact = 1;
    }
return 0;
}
*/

/*
//Star pattern
int main(){
    int n; //Size
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "#";
        }
    cout << endl;
    }
return 0;
}
*/

/*
//Inverse star pattern
int main(){
    int n; //Size
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j++){
            cout << "#";
        }
    cout << endl;
    }
return 0;
}
*/

/*
//Number pattern
int main(){
    int n; cin >> n;
    int z = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << z;
        }
    z++;
    cout << endl;
    }
return 0;
}
*/

/*
//Sum in array
int main(){
    int ar[5] = {3, 2, 4, 5, 2};
    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum += ar[i];
    }
    cout << sum;
    return 0;
}
*/

/*
//Average in array
int main(){
    float avg, sum;
    int size = 5;
    int ar[5] = {3, 2, 1, 7, 2};

    for(int i = 0; i < 5; i++){
        sum += ar[i];
    }
    avg = sum / size;
    cout << avg;
    return 0;
}
*/

/*
//Find the location of the key
int main(){
    int ar[5] = {1, 3, 5, 2, 9};
    int key = 5;
    int location;
    for(int i = 0; i < 5; i++){
        if(ar[i] == key){
            location = i;
            cout << "Found the key in: " << location << endl;
            break;
        }
        else if(i == 4){
            cout << "The key is not found." << endl;
        }
    }
    return 0;
}
*/

/*
//Sorting
int main(){
    int ar[5] = {5, 2, 8, 1, 9};
    int temp;

    //sorting array
    for(int i = 0; i < 5; i++){
        for(int j = i; j < 5; j++){
            if(ar[i] > ar[j]){
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    //Output the array
    for(int i = 0; i < 5; i++){
        cout << ar[i] << " ";
    }
    return 0;
}
*/

/*
//maximum using function
int fun(int, int, int);
int main(){
    int x, y, z;
    cin >> x >> y >> z;
    cout << fun(x, y, z);
    return 0;
}
int fun(int a, int b, int c){
    int max;
    if(a > b && a > c)
    max = a;
    else if(b > a && b > c)
    max = b;
    else if(c > a && c > b)
    max = c;

    return max;
}
*/

/*
//Rectangle using function
void fun(int, int, int &);
int main(){
    int l, w, area;
    cin >> l >> w;
    fun(l, w, area);
    cout << area;
    return 0;
}
void fun(int l, int w, int &area){
    area = l * w;
}
*/

/*
//program that computes the following (p = n! / (n + m)!)
double fact(double);
int main(){
    double n, m, p;
    cin >> n >> m;
    p = fact(n) / fact(n + m);
    cout << p;
    return 0;
}
double fact(double num){
    double fact1;
    for(int i = 1; i < num; i++){
        fact1 *= i;
    }
    return fact1;
}
*/

/*
//Program computes the sum of all the odd between 0 - 100
int main(){
    int sum = 0;
    for(int i = 0; i <= 100; i++){
        if(i % 2 == 1){
            sum += i;
        }
    }
    cout << sum;
    return 0;
}
*/

/*
//Program reads 20 numbers and computes their average
int main(){
    double sum;
    for(int i = 1; i <= 20; i++){
        cin >> sum;
    }
    cout << sum / 20;
    return 0;
}
*/

/*
//Program reads unknown numbers of integers to count the numbers of odds and evens
int main(){
    int x;
    int ce, co;
    ce = co = 0;
    cout << "Enter numbers (Using 0 = stop)" << endl;
    while(true){
        cin >> x;
        if(x % 2 == 0){
            ce++;
        }
        else if(x % 2 == 1){
            co++;
        }
        if(x == 0)
        break;
    }
    cout << "\nEven numbers: " << ce << ", Odd numbers: " << co;
    return 0;
}
*/

/*
//Program to calculate the value of x^n (ex: x^4 = x*x*x*x)(r = x^n)
int main(){
    int x, n, r;
    cin >> x >> n;
    for(int i = 1; i <= n; i++){
        r = x * x;
    }
    cout << r;
    return 0;
}
*/

/*
//Program to calculate the following (12^2 + 10^2 + 8^2 + 6^2 + 4^2 + 2^2)
int main(){
    int sum = 0;
    for(int i = 12; i >= 2; i-=2){
        sum += i * i;
    }
    cout << sum;
    return 0;
}
*/

/*
//Program to calculate the following (1/2 + 2/3 + 3/4 + 4/5 ... 99/100)
int main(){
    double sum = 0.0;
    for(int i = 1.0; i <= 100; i++){
        sum += i / (i + 1.0);
    }
    cout << sum;
    return 0;
}
*/

/*
//Program to print a table with y, y^2, y^3 (y takes the values from 1 to 10)
int main(){
    for(int i = 1; i <= 10; i++){
        cout << "The square of, " << i << " = " << i*i << endl;
        cout << "The 3rd square of, " << i << " = " << i*i*i << endl << endl;
    }
    return 0;
}
*/
