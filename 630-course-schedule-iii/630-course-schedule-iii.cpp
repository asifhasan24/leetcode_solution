class Solution {
public:
    struct comparator{
      bool operator()(const vector<int>& v1, const vector<int>& v2) {
          return v1[1] < v2[1];
      } 
    };
    
    /** Main Function ***/
    int scheduleCourse(vector<vector<int>>& courses) 
    {
        sort(courses.begin(), courses.end(), comparator());
        
        // Priority Queue by default sorted in MAX HEAP ORDER
        priority_queue<int> q;
        
        int sum = 0;
        for (auto& c : courses)
        {
            int t = c[0]; //Course time
            int d = c[1]; //Max day before which course has to be completed
            
            q.push(t);
            sum += t;
            
            if (sum > d)
            {
                sum -= q.top(); //This can be some other long course
                q.pop();
            }

        }
        return q.size();
    }
};