//#include <iostream>
//
//class A
//{
//public:
//    void Death() {}
//    void Attack() {}
//};
//
//class AProxy
//{
//public:
//    void Attack()
//    {
//        if (NewA == nullptr)
//        {
//            NewA = new A();
//        }
//
//        NewA->Attack();
//    }
//
//    void Death()
//    {
//        if (NewA == nullptr)
//        {
//            std::cout << "A��ü�� ���������� �ʾҴµ�, �ı��Ϸ� �Ͽ����ϴ�." << std::endl;
//            return;
//        }
//
//        NewA->Death();
//        delete NewA;
//        NewA = nullptr;
//    }
//
//private:
//    A* NewA = nullptr;
//};
//
//int main()
//{
//    AProxy* NewProxy = new AProxy();
//
//    NewProxy->Attack();
//    NewProxy->Death();
//
//    return 0;
//}