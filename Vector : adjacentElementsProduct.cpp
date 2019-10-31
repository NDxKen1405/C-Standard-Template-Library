/*Cho một vector chứa các số nguyên, hãy tìm giá trị lớn nhất của tích của 2 số nguyên liên tiếp trong vector

Đầu vào: vector chứa các số nguyên

Đầu ra: tích lớn nhất của 2 số nguyên liên tiếp trong vector*/





int adjacentElementsProduct(std::vector<int> inputVector)
{
    int max = 0;
    int temp;
    for(int i = 0; i < inputVector.size() - 1; i++)
    {
        temp = inputVector[i] * inputVector[i + 1];
        if(temp > max)
        {
            max = temp;
        }
    }
    return max;
}
