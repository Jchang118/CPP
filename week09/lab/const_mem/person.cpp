class Person{
    private:
        static const int Len = 30;
        // enum {Len = 30};
        char name[Len];
    
    public:
        Person():name{"LiXia"}
        {}

        void display();
};
