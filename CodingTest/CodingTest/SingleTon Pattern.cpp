

////�⺻ �̱� ��

//class Singleton
//{
//private:
//    Singleton() {}
//    ~Singleton() {}
//
//    static Singleton instance;
//
//public:
//    static Singleton& GetIstance()
//    {
//        return instance;
//    }
//};
//
//Singleton Singleton::instance;


/*------------------------------------------------------------------------------------------------*/

////���̳��� �̱���

//class Singleton
//{
//private:
//    Singleton() {}
//    ~Singleton()
//    {
//        delete Instance;
//        Instance = nullptr;
//    }
//
//    static Singleton* Instance;
//
//public:
//    static Singleton* GetIstance()
//    {
//        if (Instance == nullptr)
//        {
//            Instance = new Singleton();
//        }
//
//        return Instance;
//    }
//};
//
//Singleton* Singleton::Instance = nullptr;

/*------------------------------------------------------------------------------------------------*/

////���̾ �̱���

//class Singleton
//{
//private:
//    Singleton() {}
//    ~Singleton() {}
//
//public:
//    static Singleton& GetIstance()
//    {
//        static Singleton Instance;
//        return Instance;
//    }
//};

/*------------------------------------------------------------------------------------------------*/
