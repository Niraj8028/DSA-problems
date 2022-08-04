 priority_queue<int,vector<int>,greater<int> > pq;
       int sum;
       for(int i=0;i<arr.size();i++)
       {
           sum=0;
           for(int j=i;j<arr.size();j++)
           {
               sum+=arr[j];
               if(pq.size() < k )
               {
                   pq.push(sum);
               }
               else
               {
                   if(pq.top() < sum )
                   {
                       pq.pop();
                       pq.push(sum);
                   }
               }
           }
       }
       return pq.top();
       
   }