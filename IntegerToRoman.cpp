class Solution {
public:
    string intToRoman(int num) {
        string romanNum = "";
        
        if (num == 1) return "I";
        
        while (num > 1)
        {
            while (num / 1000 != 0)
            {
                romanNum += "M";
                num -= 1000;
            }
            while (num / 900 != 0)
            {
                romanNum += "CM";
                num -= 900;
            }
            while (num / 500 != 0)
            {
                romanNum += "D";
                num -= 500;
            }
            while (num / 400 != 0)
            {
                romanNum += "CD";
                num -= 400;
            }
            while (num / 100 != 0)
            {
                romanNum += "C";
                num -= 100;
            }
            while (num / 90 != 0)
            {
                romanNum += "XC";
                num -= 90;
            }
            while (num / 50 != 0)
            {
                romanNum += "L";
                num -= 50;
            }
            while (num / 40 != 0)
            {
                romanNum += "XL";
                num -= 40;
            }
            while (num / 10 != 0)
            {
                romanNum += "X";
                num -= 10;
            }
            while (num / 9 != 0)
            {
                romanNum += "IX";
                num -= 9;
            }
            while (num / 5 != 0)
            {
                romanNum += "V";
                num -= 5;
            }
            while (num / 4 != 0)
            {
                romanNum += "IV";
                num -= 4;
            }
            switch(num)
            {
                case 1: romanNum += "I";num -= 1;break;
                case 2: romanNum += "II";num -= 2;break;
                case 3: romanNum += "III";num -= 3;break;
            }
        }
        return romanNum;
    }
};