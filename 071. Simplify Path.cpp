//C++ Code
//Title      Simplify Path
//Difficulty Medium

class Solution {
public:
    string simplifyPath(string path) {
        if(path.size() == 0)
            return "/";
        
        string absPath;
        vector<string> tempPath;

        size_t pos = 0;
        string delimiter = "/", token;
        while ((pos = path.find(delimiter)) != string::npos) {
            token = path.substr(0, pos);
            if(token.size() > 0)
                tempPath.insert(tempPath.end(), token);
            path.erase(0, pos + delimiter.length());
        }
        if(path.size() != 0)
            tempPath.insert(tempPath.end(), path);
        
        int tempIndex = 0, tempSize = tempPath.size();
        while(tempIndex < tempSize)
        {
            if((tempIndex == 0 && tempPath[tempIndex] == "..") || tempPath[tempIndex] == ".")
            {
                tempPath.erase(tempPath.begin()+tempIndex, tempPath.begin()+tempIndex+1);
                tempSize--;
            }
            else if(tempPath[tempIndex] == "..")
            {
                tempPath.erase(tempPath.begin()+tempIndex-1, tempPath.begin()+tempIndex+1);
                tempSize -= 2;
                tempIndex--;
            }
            else
                tempIndex++;
        }
        
        if(tempPath.size() == 0)
            absPath += "/";
        else
        {
            for(int i = 0; i < tempPath.size(); i++)
            {
                absPath = absPath + "/" + tempPath[i];
            }
        }
        
        return absPath;
    }
};
