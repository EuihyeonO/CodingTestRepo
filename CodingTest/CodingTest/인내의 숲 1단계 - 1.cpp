//#include <iostream>
//#include <vector>
//
//int main()
//{
//    //N���� �����ϴ� ����� �� = N - 2���� �����ϴ� ����� ��  + N - 1 ���� �����ϴ� ����� �� 
//
//    int TargetFloor = 0;
//    std::cin >> TargetFloor;
//
//    std::vector<int> DP(TargetFloor + 1, 0);
//
//    DP[1] = 1;
//    DP[2] = 2;
//
//    for (int i = 3; i <= TargetFloor; i++)
//    {
//        DP[i] = DP[i - 1] + DP[i - 2];
//    }
//
//    std::cout << DP[TargetFloor] << std::endl;
//    return 0;
//}