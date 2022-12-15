#include <fstream>   
#include <string>  
#include <iostream>  
#include <streambuf>   
using namespace std;   
  
int main()   
{           
    //定義文件輸出流   
    ofstream oFile;   
  
    //打開要輸出的文件   
    oFile.open("scoresheet.csv", ios::out | ios::trunc);    // 這樣就很容易的輸出一個需要的excel 文件  
    oFile << "姓名" << "," << "年齡" << "," << "班級" << "," << "班主任" << endl;   
    oFile << "張三" << "," << "22" << "," << "1" << "," << "JIM" << endl;   
    oFile << "李四" << "," << "23" << "," << "3" << "," << "TOM" << endl;   
  
    oFile.close();   
      
           
    //打開要輸出的文件   
    ifstream iFile("scoresheet.csv");  
    string   readStr((std::istreambuf_iterator<char>(iFile)),  std::istreambuf_iterator<char>());   
     cout <<  readStr.c_str();  
  
      return 0;  
} 