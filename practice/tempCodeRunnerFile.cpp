    for(int i=0;i<a.size()-1;i++)
    {
       for(int j=i+1;j<a.size();j++)
       {

          if(a[i]==a[j])
          {
              int key=a[i];
              int size= a.size();
               
              int first = firstocc(a,key,size);
              int last = lastocc(a,key,size);
              cout<<"first : "<<first<<" Last : "<<last<<endl;
              cout<<"element : "<<a[first]<<" element : "<<a[last]<<endl;
   
            
          }
       }
    }