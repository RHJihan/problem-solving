class Solution {
public:
    string solveEquation(string equation) {
        int leftX = 0, leftConst = 0;
        int rightX = 0, rightConst = 0;

        int n = equation.size();
        bool left = true;
        int sign = 1;
        int num = 0;
        bool numExist = false;

        for (int i = 0; i <= n; i++) {
            if (i == n || equation[i] == '+' || equation[i] == '-' || equation[i] == '=') {
                if (numExist) {
                    if (left)
                        leftConst += sign * num;
                    else
                        rightConst += sign * num;
                }
                num = 0;
                numExist = false;

                if (i < n) {
                    if (equation[i] == '+')
                        sign = 1;
                    else if (equation[i] == '-')
                        sign = -1;
                    else if (equation[i] == '=') {
                        left = false;
                        sign = 1;
                    }
                }
            } else if (equation[i] == 'x') {
                if (!numExist) num = 1;
                if (left)
                    leftX += sign * num;
                else
                    rightX += sign * num;
                num = 0;
                numExist = false;
            } else {
                num = num * 10 + (equation[i] - '0');
                numExist = true;
            }
        }

        int coefX = leftX - rightX;
        int constVal = rightConst - leftConst;

        if (coefX == 0 && constVal == 0)
            return "Infinite solutions";
        if (coefX == 0)
            return "No solution";

        return "x=" + to_string(constVal / coefX);
    }
};
