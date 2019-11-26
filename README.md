# Cplusplus_Accessor
存取權限（aka. Access Control）

任何實例都可以直接存取 public: 的部分，而程式僅能藉由 public 關鍵字後的 member func 存取實例的 private 成員。

    class ShareMarket{

       private:
            char target[10];
            int shares;
            float share_val;
            double total_val;

       public:
            void before();
            void buy();
            void sell();
            void after();
            void show();

    };


