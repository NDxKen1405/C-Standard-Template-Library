Cho số tự nhiên n, hãy khởi tạo một vector có các phần tử từ 1 đến n

Đầu vào: số tự nhiên n (0 < n < 100)

Đầu ra: vector chứa các số tự nhiên từ 1 đến n





vector<int> initializeVector(int n)
{
	vector<int> res;
	for(int i = 1; i <= n; i++)
	{
		res.push_back(i);
	}
	return res;
}
