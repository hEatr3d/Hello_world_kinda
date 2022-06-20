#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    // cout << "hello world!";
    // ofstream theOutput;
    // theOutput.open("output.txt");

    // theOutput << "hello world!";

    short a = 0, b = 0, c = 0;

    char wellHelloWorld[]{ "hello world!" };
    char badassery[]{ " n,ait f it, I wil o it" }; // "(Hell) n(o),( w)ait f(or) it, I wil(l) (d)o it"
    char stop[]{ "o old" };
    char cease[]{ ",a  o" };

    for (int i = 0; wellHelloWorld[i] != '\0'; i++)
    {
        Sleep(125);
        if( wellHelloWorld[i] !=  stop[a])
        {
            char print = wellHelloWorld[i] - 32;
            if (wellHelloWorld[i] == '!')
            print = wellHelloWorld[i];
            cout << print;
        }
        else
        {
            for ( ; badassery[c] != cease[b] && badassery[c] != '\0'; c++)
            {
                Sleep(125);
                char print = badassery[c];
                cout << print;
            }
            b++;
            a++;
            i--;
        }
    }

    return 0;
}
