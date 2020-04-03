//Solution 2
class FreqStack {
public:
    
    map<int, int> freqMap;
    map<int, stack<int>> setMap;
    int maxfreq;
    
    FreqStack() {
        maxfreq = 0;
    }
    
    void push(int x) {
        
        // Frequency of x 
        int freq = freqMap[x] + 1; 

        // Mapping of x with its frequency 
        freqMap[x]= freq; 

        // Update maxfreq variable 
        if (freq > maxfreq) 
            maxfreq = freq; 

        // Map element to its frequency list 
        // If given frequency list doesn't exist 
        // make a new list of the required frequency 
        setMap[freq].push(x);
    }
    
    int pop() {
        
        // Remove element from setMap 
        // from maximum frequency list 
        int top = setMap[maxfreq].top(); 
        setMap[maxfreq].pop(); 

        // Decrement the frequency of the popped element 
        freqMap[top]--; 

        // If whole list is poppped 
        // then decrement the maxfreq 
        if (setMap[maxfreq].size() == 0) 
            maxfreq--; 
        return top;
    }
};

//Solution 1 : Using vector of stacks;

// class FreqStack {
// public:
//     vector<stack<int>> Stack{10001};
//     map<int, int>hMap;
//     int maxFreq;
    
//     FreqStack() {
//         maxFreq = 0; 
//     }
    
//     void push(int x) {
        
//         hMap[x]++;
        
//         if(maxFreq < hMap[x])
//             maxFreq = hMap[x];
        
//         Stack[hMap[x]].push(x);
        
//     }
    
//     int pop() {
        
//         int top = Stack[maxFreq].top();
//         Stack[maxFreq].pop();
        
//         if(Stack[maxFreq].empty())
//         {
//             maxFreq--;
//         }
//         hMap[top]--;
        
//         return top;
        
//     }
// };

// /**
//  * Your FreqStack object will be instantiated and called as such:
//  * FreqStack* obj = new FreqStack();
//  * obj->push(x);
//  * int param_2 = obj->pop();
//  */



