class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        
        int front = 0;
        int last  = 0;
        int mid   = 0;
        
        for(int i = 0; i < seats.size(); i++)
        {
            if(seats[i] == 0) 
                front++;
            else
                break;
            
        }
        
        for(int i = seats.size() - 1; i >= 0; i--)
        {
            if(seats[i] == 0) 
                last++;
            else
                break;
        }
        
        front = max(front, last);
        int tempMid = 0;
        for(int i = front; i < (seats.size() - last); i++)
        {
            if(seats[i] == 0) 
            {
                mid++;
                if(tempMid < mid) tempMid = mid;
            }
            else mid = 0;
        }
        
        cout<<front<<" "<<tempMid<<" "<<last;
        return max(front, (tempMid+1)/2);
    }
};
