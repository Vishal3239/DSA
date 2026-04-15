sort(robot.begin(),robot.end());
    int n=factory.size();
    vector<pair<int,int>>s_Factory;
    for(int i=0;i<n;++i){
        s_Factory.push_back({factory[i][0],factory[i][1]});  
    }
    vector<int>spand;
    for(auto x:s_Factory){
        int temp=x.second;
        while(temp!=0){
            spand.push_back(x.first);
            temp--;
        }
    }
    long long ans=0;
    for(int i=0;i<robot.size();++i){
        ans+=abs(robot[i]-spand[i]);
    }
    return ans;