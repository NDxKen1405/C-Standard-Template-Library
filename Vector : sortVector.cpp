/*Cho một vector chứa các số nguyên, hãy sắp xếp các số nguyên trong vector theo thứ tự tăng dần

Đầu vào: vector chứa các số nguyên

Đầu ra: vector đã được sắp xếp*/



std::vector<int> sortVector(std::vector<int> v)
{
    sort(v.begin(), v.end());
    return v;
}
