
#include <iostream>
using namespace std;
int main()
{
	for (int cock = 0; cock <= 20; cock++)
	{
		for (int hen = 0; hen <= 33; hen++)
		{
			for(int chick = 0; chick <= 100; chick += 3)
			{
				if ((cock + hen + chick == 100) && (5 * cock + 3 * hen + chick / 3 == 100))
				{
					cout << "cock: " << cock << ", hen: " << hen << ", chick: " << chick << endl;
				}
			}
		}
	}
	return 0;
}

//百钱买百鸡
//公鸡5元一只，母鸡3元一只，小鸡1元三只，100元钱买100只鸡，问公鸡、母鸡、小鸡各多少只？
//解题思路
//1. 公鸡、母鸡、小鸡的数量分别为cock、hen、chick
//2. 公鸡的数量cock的范围是0到20，因为100元钱最多可以买20只公鸡
//3. 母鸡的数量hen的范围是0到33，因为100元钱最多可以买33只母鸡
//4. 小鸡的数量chick的范围是0到100，因为100元钱最多可以买100只小鸡
//5. 公鸡、母鸡、小鸡的总数等于100，即cock + hen + chick == 100
//6. 公鸡、母鸡、小鸡的总金额等于100元，即5 * cock + 3 * hen + chick / 3 == 100
//7. 遍历公鸡、母鸡、小鸡的数量，判断是否满足上述两个条件，如果满足则输出结果
//8. 使用嵌套的for循环来实现遍历cock、hen、chick的范围
