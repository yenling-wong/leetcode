#include <string>
#include <vector>

using namespace std;

class OrderedStream {
public:
    int pointer = 0;
    string* stream;
    OrderedStream(int n) {
        stream = new string[n];
    }
    
    vector<string> insert(int idKey, string value) {
        vector<string> chunk;
        
        stream[idKey - 1] = value;
        
        while(stream[pointer] != "\0") {
            chunk.push_back(stream[pointer]);
            pointer += 1;
        }
        
        return chunk;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */
