class Solution {
public:
    string defangIPaddr(string address) {
       for(int i=0;i<address.length()-1;i++){
            if(address[i+1]=='.'){
               address.insert(i+1,"[");
               
			   i++;
		}}
		for(int i=1;i<address.length();i++){
			if(address[i-1]=='.'){
				address.insert(i,"]");
			}
		}
        return address;
    }
};
