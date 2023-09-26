
/*
given squre matrix rotate 90 degree anticlockwise
link: https://practice.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1?page=1&difficulty[]=0&category[]=Matrix&sortBy=submissions
*/




//solution
class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // code here 
        //revese each row seperate
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        //swap the row with column //transpose
        for(int i=0;i<n-1;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    } 
};
