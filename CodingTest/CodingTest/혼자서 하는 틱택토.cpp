//#include <string>
//#include <vector>
//
//using namespace std;
//bool isComplete(const vector<string>& _Board, char _OX)
//{
//    //����üũ
//    for (int i = 0; i < 3; i++)
//    {
//        if (_Board[i][0] == _Board[i][1] && _Board[i][1] == _Board[i][2] && _Board[i][0] == _OX)
//        {
//            return true;
//        }
//    }
//
//    //����üũ
//    for (int i = 0; i < 3; i++)
//    {
//        if (_Board[0][i] == _Board[1][i] && _Board[1][i] == _Board[2][i] && _Board[0][i] == _OX)
//        {
//            return true;
//        }
//    }
//
//    //�밢�� üũ
//    if (_Board[0][0] == _Board[1][1] && _Board[1][1] == _Board[2][2] && _Board[0][0] == _OX)
//    {
//        return true;
//    }
//
//    if (_Board[0][2] == _Board[1][1] && _Board[1][1] == _Board[2][0] && _Board[0][2] == _OX)
//    {
//        return true;
//    }
//
//    return false;
//}
//
//int solution(vector<string> board)
//{
//    //����Ǽ� 1
//    //O�� ���� < X�� ����
//
//    //����Ǽ� 2
//    //O�� X�� �� �� 3���� �ϼ��� ���
//
//    //����� �� 3
//    //O�� �ϼ��ߴµ�, X�� ������ O���� ���ų� ���� ���
//
//    //����� �� 4
//    //X�� �ϼ��ߴµ�, O�� X���� ���� ���� ���
//
//    int OCount = 0;
//    int XCount = 0;
//
//    for (int i = 0; i < 3; i++)
//    {
//        for (int j = 0; j < 3; j++)
//        {
//            if (board[i][j] == 'O')
//            {
//                OCount++;
//            }
//            else if (board[i][j] == 'X')
//            {
//                XCount++;
//            }
//            else
//            {
//                continue;
//            }
//        }
//    }
//
//    bool isCompleteO = isComplete(board, 'O');
//    bool isCompleteX = isComplete(board, 'X');
//
//    if (XCount > OCount)
//    {
//        return 0;
//    }
//    else if (OCount - XCount > 1)
//    {
//        return 0;
//    }
//    else if (isCompleteO == true && isCompleteX == true)
//    {
//        return 0;
//    }
//    else if (isCompleteO == true && isCompleteX != true && XCount >= OCount)
//    {
//        return 0;
//    }
//    else if (isCompleteO != true && isCompleteX == true && OCount > XCount)
//    {
//        return 0;
//    }
//    else
//    {
//        return 1;
//    }
//}