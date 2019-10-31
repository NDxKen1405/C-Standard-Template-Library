/*Cho một vector chứa các số nguyên, hãy tính tổng các số tự nhiên trong vector

Đầu vào: vector chứa các số nguyên

Đầu ra: tổng các số tự nhiên trong vector*/




int sumOfVectorElementsUsingIterator(vector<int> v)
{
	int res = 0;
	for (auto it = v.begin(); it != v.end(); ++it)
		res += *it;
	
	return res;
}
