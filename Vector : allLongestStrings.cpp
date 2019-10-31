/*Cho một vector chứa các xâu kí tự, hãy trả ra vector khác chứa các xâu kí tự có độ dài dài nhất theo thứ tự như thứ tự xuất hiện trong vector ban đầu

Ví dụ:

Với đầu vào inputArray = ["aba", "aa", "ad", "vcd", "aba"], kết quả là allLongestStrings(inputArray) = ["aba", "vcd", "aba"].
Các xâu trong vector trả về đều có độ dài là 3
Đầu vào: vector chứa các số xâu kí tự

Đầu ra: vector chứa các xâu kí tự có độ dài dài nhất*/




std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray)
{
    vector <string> res;
    int count = 0;
    for(int i = 0; i < inputArray.size(); i++)
    {
        if(inputArray[i].length() > count)
        {
            count = inputArray[i].length();
        }
    }

    for(int i = 0; i < inputArray.size(); i++)
    {
        if(count == inputArray[i].length())
        {
            res.push_back(inputArray[i]);
        }
    }
    return res;
}
