//#include <string>
//#include <vector>
//
//using namespace std;
//
////�ڿ��� n���� ������ s�� ���� �� �־�� �Ѵ�.
////�� ��, ������ ���� �ִ��� ���� ������.
//
//vector<int> solution(int n, int s)
//{
//    if (s < n)
//    {
//        return { -1 };
//    }
//
//    vector<int> Answer(n, 0);
//
//    int Share = s / n;
//    int Remain = s % n;
//
//    for (int i = Answer.size() - 1; i >= 0; i--)
//    {
//        Answer[i] = Share;
//
//        if (Remain > 0)
//        {
//            Answer[i] += 1;
//            Remain--;
//        }
//    }
//
//
//    return Answer;
//}