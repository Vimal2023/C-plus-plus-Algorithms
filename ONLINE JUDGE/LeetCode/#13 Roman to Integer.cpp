class Solution {
public:
    int romanToInt(string s) {
        string rom=s;
        int a=rom.size(),ans=0;
        for(int i=0;i<a;i++)
        {
            {
                if(rom.at(i)=='I')
                {
                ans=ans+1;
                }
            }
            {
                if(rom.at(i)=='V')
                {
                ans=ans+5;
                }
            }
            {
                if(rom.at(i)=='X')
                {
                ans=ans+10;
                }
            }
            {
                if(rom.at(i)=='L')
                {
                ans=ans+50;
                }
            }
            {
                if(rom.at(i)=='C')
                {
                ans=ans+100;
                }
            }
            {
                if(rom.at(i)=='D')
                {
                ans=ans+500;
                }
            }
            {
                if(rom.at(i)=='M')
                {
                ans=ans+1000;
                }
            }
            if(i+1<a)
            {
                {
                if((rom.at(i)=='I')&&(rom.at(i+1)=='V'))
                {
                    ans=ans-2;
                }            
                }
                {
                if((rom.at(i)=='I')&&(rom.at(i+1)=='X'))
                {
                    ans=ans-2;
                }            
                }
                {
                if((rom.at(i)=='X')&&(rom.at(i+1)=='L'))
                {
                    ans=ans-20;
                }            
                }
                {
                if((rom.at(i)=='X')&&(rom.at(i+1)=='C'))
                {
                    ans=ans-20;
                }            
                }
                {
                if((rom.at(i)=='C')&&(rom.at(i+1)=='D'))
                {
                    ans=ans-200;
                }            
                }
                {
                if((rom.at(i)=='C')&&(rom.at(i+1)=='M'))
                {
                    ans=ans-200;
                }            
                }
            }
            
        }
        return ans;
    }
};