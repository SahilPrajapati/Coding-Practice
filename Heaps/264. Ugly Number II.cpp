//SOLUTION 2
class Solution {
public:
int nthUglyNumber(int n) {
    
        if(n < 7){
        return ;
        }
    
        vector<int>v = {1};int q=0,w=0,e=0;
    
        for(int i=1;i<n;i++)
        {
            
            int c1=v[q]*2;
            int c2=v[w]*3;
            int c3=v[e]*5;

            int num=min(min(c1,c2),c3);
            v.push_back(num);

            if(num==c1) {q++;}
            if(num==c2) {w++;}
            if(num==c3) {e++;}          
        }  
    return v.back();
    }

};

//SOLUTION 1

// class Solution {
// public:
    
//     int maxDivide(int number, int factor)
//     {
//         while(number % factor == 0)
//             number /= factor;
        
//         return number;
//     }
    
//     bool isUgly(int number)
//     {
//         number = maxDivide(number, 2);
//         number = maxDivide(number, 3);
//         number = maxDivide(number, 5);
        
//         return (number == 1);
//     }
    
//     int nthUglyNumber(int n) {
        
//         //SOLUTION 1
//         int count = 1;
//         int i = 1;
        
//         while(count != n)
//             if(isUgly(++i))
//                 count++;
        
//         return i;
        
//     }
// };
