class Gfg {
  public:
    int k;
    unordered_map<string,int>mp;
    Gfg(int gap){
        k=gap;
        
    }
    bool judgeOrNot(string &submissionId) {
        string name="";
        
        int idx=-1;
        for(int i=0;i<submissionId.size();i++){
            if(submissionId[i]=='@'){
                idx=i;
                break;
            }
            
            name+=submissionId[i];
        }
        int midNight=23*60*60 + 59*60 + 60;
        int hr=(submissionId[idx+1]-'0')*10 + submissionId[idx+2]-'0';
        int min=(submissionId[idx+4]-'0')*10 + submissionId[idx+5]-'0';
        
        int sec=(submissionId[idx+7]-'0')*10 + submissionId[idx+8]-'0';
        
        int time=hr*60*60 + min*60 +sec;
        
        if(!mp.count(name)){
            mp[name]=time;
            return true;
        }
        
        else{
            int diff=time-mp[name];
            
            if(diff<0) diff=midNight-mp[name] + time;
            
            if(diff>=k){
                mp[name]=time;
                return true;
            }
            
            else return false;
                
            
            
        }
        
    }
};