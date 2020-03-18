//SOLUTION 2 USING HASMAP

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
        int count = 0;
        queue<int> q;
        vector<int> in_degree(numCourses, 0);
        map<int, vector<int>> hMap;
        
        for(auto edge : prerequisites)
        {
            in_degree[edge[1]]++;
            hMap[edge[0]].push_back(edge[1]);
        }
        for(int i = 0; i < numCourses; i++)
            if(in_degree[i] == 0)
                q.push(i);
        
        while(!q.empty())
        {
            int curVertex = q.front();
            q.pop();

            for(auto adjacentVertex : hMap[curVertex])
                if(--in_degree[adjacentVertex] == 0)
                    q.push(adjacentVertex);
            
            count++;
        }
        
        return (count == numCourses);
        
    }
};


//SOLUTION 1 : WITHOUT HASHMAP, KAHN'S ALGO

// class Solution {
// public:
//     bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        
//         int count = 0;
//         queue<int> q;
//         vector<int> in_degree(numCourses, 0);
        
//         for(auto edge : prerequisites)
//             in_degree[edge[1]]++;
        
//         for(int i = 0; i < numCourses; i++)
//             if(in_degree[i] == 0)
//                 q.push(i);
        
//         while(!q.empty())
//         {
//             int curVertex = q.front();
//             q.pop();
            
//             for(int i = 0; i < prerequisites.size(); i++)
//             {
//                 if(prerequisites[i][0] == curVertex && (--in_degree[prerequisites[i][1]] == 0))
//                     q.push(prerequisites[i][1]);
//             }
            
//             count++;
//         }
        
//         return (count == numCourses);
        
//     }
// };
