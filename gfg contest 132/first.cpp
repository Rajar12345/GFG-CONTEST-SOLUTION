int antiqueItems(int n, vector<int> &items, vector<int> &price) {
        unordered_map<int,int>val;
        int sum=0;
        int i;
        for(i=0;i<n;i++){
            if(val.find(items[i])!=val.end()){
                val[items[i]]=min(val[items[i]],price[i]);
            }
            else{
            val[items[i]]=price[i];
            }
        }
        for(auto v:val){
            sum+=v.second;
        }
        return sum;
    }