#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

void ticTacToeFunction(){
    bool checkWinnerX = false, checkWinnerO = false;
    cout << "Please provide a Bi-Array and fill it up with \"x\" and \"o\", and the computer will show the winner " << endl;
    char biArray[3][3];
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Provide a character \"x\" or \"o\" ";
            cin >> biArray[i][j];
            tolower(biArray[i][j]);
            if(biArray[i][j] != 'x' && biArray[i][j] != 'o'){
                biArray[i][j] = '-';
            }
            
        }
        cout << endl;
    }
    
    
    
    // CHECKING "X"
    if('x' == biArray[0][0]){
        if('x' == biArray[1][0] && 'x' == biArray[2][0]){
            cout << "X wins";
            checkWinnerX =  true;
        }
        else if ('x' == biArray[0][1] && 'x' == biArray[0][2]){
            cout << "X wins";
            checkWinnerX = true;
        }
        else if('x' == biArray[1][1] && 'x' == biArray[2][2]){
            cout << "X wins";
            checkWinnerX = true;
        
        }
    }
    
    else if('x' == biArray[1][0] && 'x' == biArray[1][1] && 'x' == biArray[1][2]){
        cout << "X wins";
        checkWinnerX = true;
    
    }
    else if('x' == biArray[2][0] && 'x' == biArray[2][1] && 'x' == biArray[2][2]){
        cout << "X wins";
        checkWinnerX = true;
        
        
    }
    else if('x' == biArray[0][1] && 'x' == biArray[1][1] && 'x' == biArray[2][1]){
        cout << "X wins";
        checkWinnerX = true;
        
    }
    else if('x' == biArray[0][2] && 'x' == biArray[1][2] && 'x' == biArray[2][2]){
        cout << "X wins";
        checkWinnerX = true;
        
    }
    else if('x' == biArray[0][2] && 'x' == biArray[1][1] && 'x' == biArray[2][0]){
        cout << "X wins";
        checkWinnerX = true;
        
    }
    //FINISH CHECKING "X"
    
    // CHECKING "O"
    if(checkWinnerX == false){
    
    
    if('o' == biArray[0][0]){
        if('o' == biArray[1][0] && 'o' == biArray[2][0]){
            cout << "O wins";
            checkWinnerX =  true;
        }
        else if ('o' == biArray[0][1] && 'o' == biArray[0][2]){
            cout << "O wins";
            checkWinnerX = true;
        }
        else if('o' == biArray[1][1] && 'o' == biArray[2][2]){
            cout << "O wins";
            checkWinnerX = true;
            
        }
    }
    
    else if('o' == biArray[1][0] && 'o' == biArray[1][1] && 'o' == biArray[1][2]){
        cout << "O wins";
        checkWinnerO = true;
        
    }
    else if('o' == biArray[2][0] && 'o' == biArray[2][1] && 'o' == biArray[2][2]){
        cout << "O wins";
        checkWinnerO = true;
        
        
    }
    else if('o' == biArray[0][1] && 'o' == biArray[1][1] && 'o' == biArray[2][1]){
        cout << "O wins";
        checkWinnerO = true;
        
    }
    else if('o' == biArray[0][2] && 'o' == biArray[1][2] && 'o' == biArray[2][2]){
        cout << "O wins";
        checkWinnerO = true;
        
    }
    else if('o' == biArray[0][2] && 'o' == biArray[1][1] && 'o' == biArray[2][0]){
        cout << "O wins";
        checkWinnerO = true;
        
    }
    }
    //FINISH CHECKING "O"
    
    //CHECING DRAW
    if(checkWinnerX == false && checkWinnerO == false){
        cout << "It is a draw";
    }
    
    
    
    //FINISH CHECKING DRAW
    
    



}//end of the ticTacToeFunction function

void validateDateFunction(){
    int day,month,year;
    cout << "Please write a day, a month and a year. Next the computer will tell you if the provided date is a valid one" << endl;
    cout << "Day: ";
    cin >> day;
    cout << "Month: ";
    cin >> month;
    cout << "Year: ";
    cin >> year;
    
    if(day < 32 && day > 0){
        switch (month) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                if(day >= 1 && day <= 31){
                    if(year > 0){
                        cout << "It's a valid date" << endl;
                        
                    }
                    else{
                        cout << "It's an invalid date, the year is wrong" << endl;
                    }
                }
                else{
                    cout << "It's an invalid date, the day is wrong" << endl;
                }
                break;//fin del case 1,3,5,7,8,10,12
            case 2:
                if(day >= 1 && day <= 29){
                    if(day == 29){
                        if(year % 4 == 0){
                            cout << "It's a valid date" << endl;
                        }
                        else{
                            cout << "It's an invalid date, is not a leap-year" << endl;
                        }//fin del else
                   
                    }//fin del if
                    else{
                        if(year > 0){
                            cout << "It's a valid date" << endl;
                        }//fin del if
                        else{
                            cout << "It's an invalid date, the year is wrong" << endl;
                        }
                    }//fin del else
                }//fin del if
                else{
                    cout << "It's an invalid date, the day is wrong" << endl;

                }
                break;//fin del case 2
            case 4:
            case 6:
            case 9:
            case 11:
                if(day > 1 && day <= 30){
                    if(year > 0){
                        cout << "It's a valid date" << endl;
                    }
                    else{
                        cout << "It's an invalid date, the year is wrong" << endl;
                    }
                }//fin del if
                else{
                    cout << "It's an invalid date, the day is wrong" << endl;
                }
                break;//fin del case 4,6,9,11
            default:
                cout << "It's an invalid date, the month is wrong" << endl;
                
        }//fin del switch
        
    }//fin del if
    else{
        cout << "It's an invalid date, the day is wrong" << endl;
    }
    



}//end of the validateDateFunction function




void gradesClassFunction(){
    int userResponse, numStudents, graphicIntArr[] = {0,0,0,0,0,0};
    string *studNames, graphicStringArr[] = {"0-50","51-60","61-70","71-80","81-90","91-100"};
    cout << "How many students are going to be evaluated with 3 partials examinations? " << endl;
    cin >> userResponse;
    cin.ignore(256, '\n');
    numStudents = userResponse;
    studNames = new string[numStudents];
    int biStudGrades[numStudents][3];
    double studAverages[numStudents],  totalAv = 0;
   
    
    
    for(int i = 0; i < numStudents; i++){
        cout << "Name for the student #" << i + 1<< ": ";
        getline(cin, studNames[i]);
        cout << "Now provide 3 grades for the student" << endl;
        
        for(int j = 0; j < 3; j++){
            cout << "Grade # " << j + 1 << "\t";
            cin >> biStudGrades[i][j];
            cin.ignore(256, '\n');
            
            if((biStudGrades[i][j] >=0 && biStudGrades[i][j] <= 50)){
                graphicIntArr[0] += 1;
            }
            else if((biStudGrades[i][j] >=51 && biStudGrades[i][j] <= 60)){
                graphicIntArr[1] += 1;
            
            }
            else if((biStudGrades[i][j] >=61 && biStudGrades[i][j] <= 70)){
                graphicIntArr[2] += 1;
            }
            else if((biStudGrades[i][j] >=71 && biStudGrades[i][j] <= 80)){
                 graphicIntArr[3] += 1;
            }
            else if((biStudGrades[i][j] >=81 && biStudGrades[i][j] <= 90)){
                 graphicIntArr[4] += 1;
            }
            else if((biStudGrades[i][j] >=91 && biStudGrades[i][j] <= 100)){
                 graphicIntArr[5] += 1;
            }
            else{
            }
            
            
            
            cout << endl;
        }
        cout << endl;
    }
    
        
        
        for(int i = 0; i < numStudents; i++){
            for(int j = 0; j < 3; j++){
                totalAv += biStudGrades[i][j];
                
            }
            studAverages[i] = totalAv / 3.0;
            totalAv = 0;
        }
    
    
    
    cout << "GRADES: " << endl;
    
    for(int i = 0; i < numStudents; i++){
        cout << studNames[i] << "\t";
        for(int j = 0; j < 3; j++){
            cout << biStudGrades[i][j] << "\t";
        }
        cout << "\t" << setprecision(4) << studAverages[i];
        cout << endl;
    }
    cout << endl << endl;
    
    
    
    
    for(int i = 0; i < 6; i++){
         cout << graphicStringArr[i] << "\t";
        
        for (int j = 1; j < graphicIntArr[i] + 1; j++) {
            cout << "*" << "\t";
        }
        cout << endl;
    
    }
    cout << "Average of the group: " << "\t";
    for(int i = 0; i < numStudents; i++){
        totalAv += studAverages[i];
    }
    totalAv = totalAv / numStudents;
    cout << setprecision(4) << totalAv;
    cout << endl << endl;
}//End of the gradesClassFunction function



int main(int argc, const char * argv[]) {
    bool boolFlagUser = true;
    int userChoice;
    
    do{
        cout << endl;
        cout << "Please select an option in order to execute the corresponding functionality" << endl;
        cout << "Choices: (1)-TicTacToe game, (2)-Validate a provided date, (3)-Get the average of a class of three partials and display a graphic, (4)-exit the program" << endl;
        cout << "Choice: ";
        cin >> userChoice;
        
        
        switch(userChoice){
            case 1: ticTacToeFunction();
                break;
                
            case 2: validateDateFunction();
                break;
                
            case 3: gradesClassFunction();
                break;
                
            case 4: boolFlagUser = false;
                break;
                
            default: cout << "Wrong choice" << endl;
        
        }
        
    }while(boolFlagUser);
    
    return 0;
}
