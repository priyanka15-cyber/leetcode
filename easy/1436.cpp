string destCity(vector<vector<string>>& paths)
    {
           for(int i=0;i<paths.size();i++)
           {
               int count=0;
               for(int j=0;j<paths.size();j++)
                    if(paths[i][1]==paths[j][0])
                        count++;
               if(count==0)
                   return paths[i][1];
           }
        return " ";
    }


string destCity(vector<vector<string>>& paths) {
        // unordered_map<string,int> m;
        unordered_set<string> m;

        for(int i=0;i<paths.size();i++)
            m.insert(paths[i][0]);
        
        for(int i=0;i<paths.size();i++){
            if(m.find(paths[i][1])==m.end())
                return paths[i][1];
        }
        return "";
    }
