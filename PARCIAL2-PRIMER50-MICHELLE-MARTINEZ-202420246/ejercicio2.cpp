#include <iostream>
using namespace std;

bool isCorrect(char userAnswe, char correctAnswer){
    if (userAnswe == correctAnswer)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int questionScore(bool correct){
    if (isCorrect(userAnswe, correctAnswer)=true)
    {
        return 10;
    }
    else
    {
        return 0;
    }
    
} 

void  playQuiz(){
    bool firstAnswer= isCorrect('a', 'a');
    int firstAnswerScore = questionScore(firstAnswer);

    bool seconAnswer = iscorrect ('b','b');
    int seconAnswerScore = questionScore (seconAnswer);
    
    bool threeAnswer = isCorrect ('c','c');
    int threeAnswerScore = questionScore (threeAnswer);
}

int main(){
    char correctAnswer  
    

    return 0;
}