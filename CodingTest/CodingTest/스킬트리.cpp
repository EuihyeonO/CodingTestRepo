//#include <string>
//#include <vector>
//#include <queue>
//#include <functional>
//
//using namespace std;
//
//// 1.��ųƮ���� ���ڸ� �ϳ��� �˻�
//// 2.���ེų ���ڿ��� ���ԵǾ��ִ� ���ڶ��, Queue�� ��´�.
//// 3.���ڿ� �˻簡 ������, Queue�� ��� ������ ������ ���ེų ���ڿ��� ������ ������ �˻�.
//// 4.�߰��� �ٸ� ������ �ִٸ� Break �ϰ�, ���ٸ� Count++ 
//// 5. Count�� ��ȯ.
//
//int solution(string skill, vector<string> skill_trees)
//{
//    string Copy = skill;
//
//    int Count = 0;
//
//    function<bool(char _Skill)> Testing = [=](char _Skill)
//        {
//            for (int i = 0; i < Copy.size(); i++)
//            {
//                if (Copy[i] == _Skill)
//                {
//                    return true;
//                }
//            }
//
//            return false;
//        };
//
//    for (int i = 0; i < skill_trees.size(); i++)
//    {
//        queue<char> SkillQueue;
//
//        for (int j = 0; j < skill_trees[i].size(); j++)
//        {
//            if (Testing(skill_trees[i][j]) == true)
//            {
//                SkillQueue.push(skill_trees[i][j]);
//            }
//        }
//
//        int Index = 0;
//
//        while (SkillQueue.size() > 0)
//        {
//            char Skill = SkillQueue.front();
//
//            if (Skill == skill[Index])
//            {
//                Index++;
//                SkillQueue.pop();
//            }
//            else
//            {
//                break;
//            }
//        }
//
//        if (SkillQueue.size() == 0)
//        {
//            Count++;
//        }
//    }
//
//    return Count;
//}