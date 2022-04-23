#include <iostream>
using namespace std;

int romanToInt(string s){
    int result = 0, temp = 0;
    for(int i = 0; i<s.length(); i++) {
        if(i != 0){
            switch (s[i])
                {
                case 'M':
                    temp = 1000;
                    //if character is M, M before character is C. The value will subtract by 100
                    if(s[i-1] == 'C'){
                        temp = temp - 200;
                    }
                    result = result + temp;
                    break;
                case 'D':
                    temp = 500;
                    //if character is D, D before character is C. The value will subtract by 100
                    if(s[i-1] == 'C'){
                        temp = temp - 200;
                    }
                    result = result + temp;
                    break;
                case 'C':
                    temp = 100;
                    //if character is C, C before character is X. The value will subtract by 10
                    if(s[i-1] == 'X'){
                        temp = temp - 20;
                    }
                    result = result + temp;
                    break;
                case 'L':
                    temp = 50;
                    //if character is L, L before character is X. The value will subtract by 10
                    if(s[i-1] == 'X'){
                        temp = temp - 20;
                    }
                    result = result + temp;
                    break;
                case 'X':
                    temp = 10;
                    //if character is X, X before character is I. The value will subtract by 1
                    if(s[i-1] == 'I'){
                        temp = temp - 2;
                    }
                    result = result + temp;
                    break;
                case 'V':
                    temp = 5;
                    //if character is V, V before character is I. The value will subtract by 1
                    if(s[i-1] == 'I'){
                        temp = temp - 2;
                    }
                    result = result + temp;
                    break;
                case 'I':
                    result = result + 1;
                    break;
                default:
                    break;
                }

        }else{
            switch (s[0])
            {
            case 'M':
                result = result + 1000;
                break;
            case 'D':
                result = result + 500;
                break;
            case 'C':
                result = result + 100;
                break;
            case 'L':
                result = result + 50;
                break;
            case 'X':
                result = result + 10;
                break;
            case 'V':
                result = result + 5;
                break;
            case 'I':
                result = result + 10;
                break;
            default:
                break;
            }
        }
    }
    return result;
}

int main()
{
     string s;
     cout << "Enter a string: ";
     cin >> s;
     int value = romanToInt(s);
     cout << "The value is: "<< value;
     cout<<endl;
    return 0;
}

