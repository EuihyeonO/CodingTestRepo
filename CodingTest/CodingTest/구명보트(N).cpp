//#include <string>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
///*
// 
//��Ʈ�� �� 2�� Ż �� �ִٴ°� �ٽ�.
//Sum �� limit���� �۴��� �׳� ������ ��. ( ������ 2�� �̻� ���¿�� ���� )
//
//*/
//int solution(vector<int> people, int limit)
//{
//    sort(people.begin(), people.end());
//
//    int Left = 0;
//    int Right = people.size() - 1;
//    int Sum = people[Left] + people[Right];
//
//    int Count = 0;
//    int PeopleCount = 0;
//
//    while (Left < Right)
//    {
//        int Sum = people[Left] + people[Right];
//        
//        if (Sum <= limit)
//        {
//            Left++;
//            Right--;
//
//            Count++;
//            
//            PeopleCount += 2;
//
//            continue;
//        }
//        else if (Sum > limit)
//        {
//            Right--;
//            
//            Count++;
//
//            PeopleCount += 1;
//        }
//    }
//
//    if (people.size() - PeopleCount == 1)
//    {
//        Count++;
//    }
//
//    return Count;
//}
//
//int main()
//{
//    solution({70, 50, 80, 50, 90, 40}, 240);
//}