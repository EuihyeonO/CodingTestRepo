//#include <iostream>
//
////1,2,3 ���� n�� ���� �� �ִ� ����� ��
//int Case = 0;
//
//void Recursive(int _CurHP)
//{
//    if (_CurHP == 1)
//    {
//        return;
//    }
//
//    if (_CurHP < 1)
//    {
//        Case++;
//        return;
//    }
//
//    Recursive(_CurHP - 1);
//    Recursive(_CurHP - 2);
//    Recursive(_CurHP - 3);
//}
//
//int main()
//{
//    int StartHP = 0;
//    std::cin >> StartHP;
//
//    Recursive(StartHP);
//    std::cout << Case;
//
//    return 0;
//}