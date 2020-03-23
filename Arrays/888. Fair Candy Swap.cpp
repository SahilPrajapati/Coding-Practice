
        /*
        int sumA = arraySum(A);
        int sumB = arraySum(B);
        bool flag = false;
        
        if(sumB > sumA)
        {
            swap(sumA, sumB);
            swap(A,B);
            flag = true;
        }
        
        int sizeA = A.size();
        int sizeB = B.size();
        
        vector<int> result(2,0);
        
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        
        for(int i = 0; i < sizeA; i++)
        {
            for(int j = 0; j < sizeB; j++)
            {
                if(((sumA - A[i] + B[j]) == (sumB - B[j] + A[i]))) 
                {
                    result[0] = (!flag) ? A[i] : B[j];
                    result[1] = (!flag) ? B[j] : A[i];
                    return result;
                }
                else if(((sumA - A[i] + B[j]) > (sumB - B[j] + A[i]))) break;
                
            }
        }
        
        return result;
        */
