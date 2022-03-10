string multiply(string num1, string num2) {
        if(num1=="0"||num2=="0")
            return "0";
        int l1=num1.length();
        int l2=num2.length();
        vector<int>arr(l1+l2);
    
        int pf=0;
        int carry=0;
        int i=l2-1;
        while(i>=0)
        {
            int k=(arr.size()-1)-pf;
            int ival=num2[i]-'0';
           
            int j=l1-1;
            while(j>=0||carry!=0)
            {
                int jval=(j>=0)?(num1[j]-'0'):0;
          
                int prod=ival*jval+carry+arr[k];
                arr[k]=prod%10;   
                carry=prod/10;
              k--;

                j--;
            }
            pf++;
            carry=0;
            i--;
        }
        string ans="";
        bool flag=false;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0&&flag==false){
           continue;
            }
            else{
                flag=true;
                   ans+=to_string(arr[i]);
            }
        }
        
        return ans;

    }
