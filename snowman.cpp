#include<stdexcept>//https://www.cplusplus.com/reference/
#include <iostream>   // std::cout
#include <string>     // std::string, std::to_string
#include "snowman.hpp"
using namespace std;


const int REQUESTED_LENGTH = 8;  

/**
 * print snowman
 */
string ariel::snowman(int input) {
    
    inputTest(input); //Check if input is as required
    
    string snowOutput=partA(input)+partB(input)+"\n"+partC(input)+"\n"+partD(input);
         
    return snowOutput;
}

/**
 * The snowman's hat
 */
string partA( int input){
    string inputS = to_string(input); //Convert input to a string
    string bodyPart=" ";
    if(inputS[0]=='1')
        bodyPart=" _===_ \n";
    else if (inputS[0]=='2') 
        bodyPart="  ___  \n ..... \n";
    else if (inputS[0]=='3')
        bodyPart="   _   \n  /_\\  \n";
    else
        bodyPart="  ___  \n (_*_) \n";
    
    return bodyPart;
}

/**
 * The snowman's face
 */
string partB( int input){
    string inputS = to_string(input); //Convert input to a string
    string bodyPart=" ";
    if(inputS[4]=='2') //The hand is raised
        bodyPart="\\";
    bodyPart=bodyPart+"(";   

    if(inputS[2]=='1')
        bodyPart=bodyPart+".";
    else if (inputS[2]=='2') 
        bodyPart=bodyPart+"o";
    else if (inputS[2]=='3')
        bodyPart=bodyPart+"O";
    else
        bodyPart=bodyPart+"-";


    if(inputS[1]=='1')
        bodyPart=bodyPart+",";
    else if (inputS[1]=='2') 
        bodyPart=bodyPart+".";
    else if (inputS[1]=='3')
        bodyPart=bodyPart+"_";
    else
        bodyPart=bodyPart+" ";   
            

    if(inputS[3]=='1')
        bodyPart=bodyPart+".";
    else if (inputS[3]=='2') 
        bodyPart=bodyPart+"o";
    else if (inputS[3]=='3')
        bodyPart=bodyPart+"O";
    else
        bodyPart=bodyPart+"-";
   
    bodyPart=bodyPart+")";
    if(inputS[5]=='2')
        bodyPart=bodyPart+"/";
    else
        bodyPart=bodyPart+" ";
    return bodyPart;
}

/**
 * The snowman's belly
 */
string partC( int input){
    string inputS = to_string(input); //Convert input to a string
    string bodyPart="";
    if(inputS[4]=='1')
        bodyPart=bodyPart+"<(";
    else if (inputS[4]=='3') 
        bodyPart=bodyPart+"/(";
    else
        bodyPart=bodyPart+" (";
            
    if(inputS[6]=='1')
        bodyPart=bodyPart+" : )";
    else if (inputS[6]=='2') 
        bodyPart=bodyPart+"] [)";
    else if (inputS[6]=='3') 
        bodyPart=bodyPart+"> <)";
    else
        bodyPart=bodyPart+"   )";
                 
    if(inputS[5]=='1')
        bodyPart=bodyPart+">";  
    else if (inputS[5]=='3')
        bodyPart=bodyPart+"\\";
    else                                  
        bodyPart=bodyPart+" ";     
    return bodyPart;
}

/**
 * The snowman's base
 */
string partD( int input){
    string inputS = to_string(input); //Convert input to a string
    string bodyPart=" ";
    if(inputS[7]=='1')
        bodyPart=bodyPart+"( : ) ";
    else if (inputS[7]=='2') 
        bodyPart=bodyPart+"(\" \") ";
    else if (inputS[7]=='3') 
        bodyPart=bodyPart+"(___) ";
    else
        bodyPart=bodyPart+"(   ) ";
    return bodyPart;
}

/**
 * Check if input length is as required and the digits are in the correct range
*/
void inputTest(int input){
    string inputS = to_string(input); //Convert input to a string
    if ( inputS.size() > REQUESTED_LENGTH )
        throw invalid_argument("Input length is longer than the requested length");
            
    else if ( inputS.size() < REQUESTED_LENGTH )
        throw invalid_argument("Input length is shorter than the requested length");
    else {
        for(int i=0;i<REQUESTED_LENGTH;i++){
            if(inputS[i]!='1' && inputS[i]!='2' && inputS[i]!='3' && inputS[i]!='4')
                throw std::out_of_range{"Digit is not between 1-4"};  
        }
    }

}


/*
//for my own use
int main() 
    {
	cout << ariel::snowman(11114411) << endl; 
	cout << ariel::snowman(33232124) << endl; 
	cout << ariel::snowman(13114414) << endl; 
	cout << ariel::snowman(14114414) << endl; 
	cout << ariel::snowman(11114414) << endl; 
	cout << ariel::snowman(11111111) << endl; 


    return 1;
    }
*/