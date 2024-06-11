//#include <algorithm>
//#include <vector>
//#include <iostream>
//
//class Object
//{
//public:
//    Object() { std::cout << "�Ϲ� ������" << std::endl; };
//    Object(const Object& _Other) { std::cout << "���� ������" << std::endl; };
//    Object(const Object&& _Other) noexcept { std::cout << "�̵� ������" << std::endl; };
//
//    Object(int _A) { std::cout << "int 1�� ������" << std::endl; };
//    Object(int _A, int _B) { std::cout << "int 2�� ������" << std::endl; };
//    Object(int _A, int _B, int _C) { std::cout << "int 3�� ������" << std::endl; };
//};
//
//void push_back(const Object& _Object)
//{
//    Object* NewObject = new Object(_Object);
//    //NewObject�� ���Ϳ� ���� 
//}
//
//void push_back(Object&& _Object)
//{
//    Object* NewObject = new Object(std::move(_Object));
//    //NewObject�� ���Ϳ� ���� 
//}
//
//template<class... Types>
//void emplace_back(const Types&&... _Args)
//{
//    Object* NewObject = new Object(std::forward(_Args));
//    //NewObject�� ���Ϳ� ����
//}
//
//int main()
//{
//    Object NewObject;
//    std::cout << "--------------------" << std::endl;
//    
//    std::vector<Object> NewVector;
//    NewVector.reserve(100);
//
//    NewVector.push_back(NewObject);
//    std::cout << "--------------------" << std::endl;
//    NewVector.push_back(Object());
//    std::cout << "--------------------" << std::endl;
//
//    NewVector.emplace_back(Object());
//    std::cout << "--------------------" << std::endl;
//    NewVector.emplace_back(3);
//    std::cout << "--------------------" << std::endl;
//    NewVector.emplace_back(3, 5, 7);
//}