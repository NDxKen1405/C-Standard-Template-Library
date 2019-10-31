/*Cho một vector chứa các số nguyên, hãy tính tổng các số tự nhiên trong vector

Đầu vào: vector chứa các số nguyên

Đầu ra: tổng các số tự nhiên trong vector*/





int sumOfVectorElements(vector<int> v)
{
	int res = 0;
	for (int i=0; i<v.size(); i++)
	{
		res += v[i];
	}
	
	return res;
}
