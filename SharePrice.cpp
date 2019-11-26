 // 2019, 1126, 10:00, by Queenie
 // Class & Access Control & Data Hidden
 
 class ShareMarket{

//            此處為封裝區 Encapsulation
//           /
//          /
//         /
//        /
//       /
   private:
        char target[10];
        int shares;
        float share_val;
        double total_val;
        void know_totoal(){
          total_val= shares * share_val;
        }


        //      實作區 （成員函數）
        //     /
        //    /
        //   /
        //  /
        // /
   public:
        void before(const char *com, int n, double pr); //請使用建構子替代之
        void buy(int shareAmount, double dealPrice);
        void sell(int shareAmount, double dealPrice);
        void after(double dealPrice);
        void show();
                //    \
                //     \
                //      \ 
                //       \
                //        \ 
                //         此處作抽象化處理 Abstract 


};
