//define a map
map<int, string> mapStudent;

//insert a pair
mapStudent.insert(pair<int, string>(000, "student_zero"));

//insert a value_type, can't overwrite data
mapStudent.insert(map<int, string>::value_type(001, "student_one"));

//insert using index
mapStudent[123] = "student_first";
mapStudent[456] = "student_second";

pair<iterator, bool> insert (const value_type& val);

pair<map<int, string>::iterator, bool> Insert_Pair;

Insert_Pair = mapStudent.insert(map<int, string>::value_type (001, "student_one"));

if(!Insert_Pair.second)
    cout << "Error insert new element" << endl;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        int size = nums.size();
        int difference;
        for (int i = 0; i< size; i++)
        {
            difference = target - nums[i];
            if (m.find(difference) != m.end())
            {
                return {m[difference],i};
            }
            m.insert({nums[i],i});
        }
        return {};
    }
};
