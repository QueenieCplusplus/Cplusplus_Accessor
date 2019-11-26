# Cplusplus_Accessor
存取權限（aka. Access Control）

任何實例都可以直接存取 public: 的部分，而程式僅能藉由 public 關鍵字後的 member func 存取實例的 private 成員。

    class ShareMarket{

               此處為封裝區 Encapsulation
              /
             /
            /
           /
          /
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
                       \
                        \
                         \ 
                          \
                           \ 
                            此處作抽象化處理 Abstract 
            

    };
    
  如上介面（即類別的公有函數）定義不完全，此類別可以稱為抽象類別。
  如下，則為類別的具體化，稱為具體類別。
  
      class ShareMarket{

               此處為封裝區 Encapsulation
              /
             /
            /
           /
          /
       private:
            char target[10];
            int shares;
            float share_val;
            double total_val;
            void know_totoal(){
              total_val= shares * share_val;
            }

       public:
            void before(const char *com, int n, double pr);
            void buy(int shareAmount, double dealPrice);
            void sell(int shareAmount, double dealPrice);
            void after(double dealPrice);
            void show();
                       \
                        \
                         \ 
                          \
                           \ 
                            此處作抽象化處理 Abstract 


    };


