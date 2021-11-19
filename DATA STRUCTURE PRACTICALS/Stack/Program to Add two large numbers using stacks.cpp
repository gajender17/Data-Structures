#include <bits/stdc++.h>
using namespace std;

string findSum(string str1, string str2)
{

if (str1.length() > str2.length())

swap(str1, str2);
string str = "";
stack<char> s1;
stack<char> s2;
int n1 = str1.length(), n2 = str2.length();

for (int i = 0; i < n1; i++)

s1.push(str1[i]);

for (int i = 0; i < n2; i++)

s2.push(str2[i]);

int carry = 0;

for (int i = 0; i<n1; i++)

{

int sum = ((s1.top() - '0') + (s2.top() - '0') + carry);

s1.pop();

s2.pop();

str.push_back(sum % 10 + '0');

carry = sum / 10;

}

for (int i = n1; i<n2; i++)

{

int sum = ((s2.top() - '0') + carry);

s2.pop();

str.push_back(sum % 10 + '0');

carry = sum / 10;

}

if (carry)

str.push_back(carry + '0');
reverse(str.begin(), str.end());
return str;
}

int main()
{

string line;

ifstream myfile("file.txt");
int i = 1;
string s1, s2;
cout << "Enter 1st number to be added\n";
cin >> s1;
cout << "Enter 2nd number to be added\n";
cin >> s2;
cout << "Answer is: " << findSum(s1, s2) << endl;

if (myfile.is_open())

{
while (getline(myfile, line))
{

cout << line << '\n';
if (line == "")
continue;

if (i == 1)
s1 = line;
else if (i == 2)

{
s2 = line;
cout << "Answer is: " << findSum(s1, s2) << endl;
}
i = i % 2 + 1;
}
myfile.close();
}
system("pause");
return 0;
}


/*

OUTPUT -

Enter 1st number to be added
5900000
Enter 2nd number to be added
100000
Answer is: 6000000

*/
