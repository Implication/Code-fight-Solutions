/*
Ratiorg got statues of different sizes as a present from CodeMaster for his birthday,
each statue having an non-negative integer size. Since he likes to make things perfect, 
he wants to arrange them from  smallest to largest so that each statue will be bigger 
than the previous one exactly by1. He may need some additional statues to be able to accomplish that. 
Help him figure out the minimum number of additional statues needed.

Example

For statues = [6, 2, 3, 8], the output should be
makeArrayConsecutive2(statues) = 3.

Ratiorg needs statues of sizes 4, 5 and 7.

Input/Output

[time limit] 500ms (cpp)
[input] array.integer statues

An array of distinct non-negative integers.

Guaranteed constraints:
1 ≤ statues.length ≤ 10,
0 ≤ statues[i] ≤ 20.

[output] integer

The minimal number of statues that need to be added to existing statues such that it contains every integer size from an interval [L, R] (for some L, R) and no other sizes.

*/

int makeArrayConsecutive2(std::vector<int> statues) {
    int nonConsecutives = 0;
    for(int i = 0; i < statues.size(); i++){
        for(int j = i + 1; j < statues.size(); j++){
            if(statues[i] > statues[j])
                iter_swap(statues.begin() + i, statues.begin() + j);
        }
        cout << statues[i];
    }
    for(int i = 0; i < statues.size() - 1; i++){
        if(statues[i + 1] != statues[i] + 1){
            int temp = statues[i] + 1;
            while(temp != statues[i+1]){
                temp = temp + 1;
                nonConsecutives++;
            }
        }
    }
    return nonConsecutives;
}
